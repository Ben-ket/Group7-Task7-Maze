import math
import time

import rclpy
from rclpy.action import ActionServer
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node

from geometry_msgs.msg import Twist
from maze_msgs.action import MoveYaw
from nav_msgs.msg import Odometry


class MovementYawServer(Node):

  def __init__(self):
    super().__init__('movement_yaw_server')

    self.cb_group = ReentrantCallbackGroup()
    self.current_yaw = None
    self.odom_updated = False

    self.create_subscription(
        Odometry,
        '/odom',
        self.odom_callback,
        10,
        callback_group=self.cb_group,
    )

    self.cmd_pub = self.create_publisher(Twist, '/cmd_vel', 10)

    self._action_server = ActionServer(
        self,
        MoveYaw,
        'move_robot_yaw',
        execute_callback=self.execute_callback,
        callback_group=self.cb_group,
    )

    self.get_logger().info('server ready')

  def odom_callback(self, msg):
    q = msg.pose.pose.orientation
    siny_cosp = 2.0 * (q.w * q.z + q.x * q.y)
    cosy_cosp = 1.0 - 2.0 * (q.y * q.y + q.z * q.z)

    self.current_yaw = math.atan2(siny_cosp, cosy_cosp)
    self.odom_updated = True

  @staticmethod
  def normalize_angle(angle: float) -> float:
    return math.atan2(math.sin(angle), math.cos(angle))

  def execute_callback(self, goal_handle):
    self.odom_updated = False
    start_wait = time.time()
    while not self.odom_updated and (time.time() - start_wait) < 3.0:
      time.sleep(0.01)

    if self.current_yaw is None:
      self.get_logger().error('no /odom received, aborting action.')
      goal_handle.abort()
      result = MoveYaw.Result()
      result.success = False
      return result


    target_relative_angle = goal_handle.request.angle
    max_speed = abs(goal_handle.request.speed)
    if max_speed == 0.0:
      max_speed = 0.8

    start_yaw = self.current_yaw
    target_yaw = self.normalize_angle(start_yaw + target_relative_angle)


    kp = 2.5
    ki = 0.01
    kd = 0.20

    integral = 0.0
    prev_error = 0.0
    current_speed = 0.0

  
    max_accel = 1.5

    tolerance = 0.002  
    stable_count = 0
    required_stable_ticks = 10

    loop_rate = self.create_rate(50)
    dt = 0.02

    self.get_logger().info(
        f'Executing turn: {math.degrees(target_relative_angle):.1f}°'
    )

    while rclpy.ok():
  
      if goal_handle.is_cancel_requested:
        goal_handle.canceled()
        self.stop_robot()
        result = MoveYaw.Result()
        result.success = False
        return result

      error = self.normalize_angle(target_yaw - self.current_yaw)

   
      if abs(error) <= tolerance:
        stable_count += 1
        if stable_count >= required_stable_ticks:
          break
      else:
        stable_count = 0

    
      integral += error * dt
      integral = max(-0.1, min(0.1, integral))  
      derivative = (error - prev_error) / dt
      prev_error = error

      desired_speed = (kp * error) + (ki * integral) + (kd * derivative)
      desired_speed = max(-max_speed, min(max_speed, desired_speed))

      max_speed_change = max_accel * dt
      speed_diff = desired_speed - current_speed
      speed_diff = max(-max_speed_change, min(max_speed_change, speed_diff))
      current_speed += speed_diff

      cmd = Twist()
      cmd.angular.z = current_speed
      self.cmd_pub.publish(cmd)

      loop_rate.sleep()

    self.stop_robot()

    actual_rotated = self.normalize_angle(self.current_yaw - start_yaw)
    self.get_logger().info(
        f'Turn Complete! Target:'
        f' {math.degrees(target_relative_angle):.1f}°, Achieved:'
        f' {math.degrees(actual_rotated):.2f}°'
    )

    goal_handle.succeed()
    result = MoveYaw.Result()
    result.success = True
    return result

  def stop_robot(self):
    cmd = Twist()
    cmd.linear.x = 0.0
    cmd.angular.z = 0.0
    for _ in range(5):
      self.cmd_pub.publish(cmd)
      time.sleep(0.005)


def main(args=None):
  rclpy.init(args=args)
  node = MovementYawServer()
  executor = MultiThreadedExecutor()
  executor.add_node(node)
  try:
    executor.spin()
  except KeyboardInterrupt:
    pass
  finally:
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
  main()
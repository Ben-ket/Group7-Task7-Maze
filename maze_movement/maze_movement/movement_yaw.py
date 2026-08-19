import math
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
import rclpy
from rclpy.node import Node
import numpy as np


class MovementYaw(Node):

  def __init__(self):
    super().__init__('movement_yaw')

    self.cmd_vel_pub = self.create_publisher(Twist, '/cmd_vel', 10)
    self.odom_sub = self.create_subscription(
        Odometry, '/odom', self.odom_callback, 10
    )

    self.current_yaw = None
    self.start_yaw = None

    
    errorFactor = 1.07
    # Rotate 90 degrees w/ margin of error included
    self.target_angle = (np.pi / 2.0) * errorFactor

    self.timer = self.create_timer(0.01, self.move_robot)

    self.kp = 2.0
    self.ki = 0.02
    self.kd = 0.1

    self.integral_error = 0.0
    self.prev_error = 0.0
    self.tolerance = 0.001

  def odom_callback(self, msg):
    q = msg.pose.pose.orientation
    siny_cosp = 2.0 * (q.w * q.z + q.x * q.y)
    cosy_cosp = 1.0 - 2.0 * (q.y * q.y + q.z * q.z)

    self.current_yaw = math.atan2(siny_cosp, cosy_cosp)

    if self.start_yaw is None:
      self.start_yaw = self.current_yaw

  def move_robot(self):
    if self.current_yaw is None or self.start_yaw is None:
      return


    # Keep angle between -pi and pi
    angle_moved = self.normalize_angle(self.current_yaw - self.start_yaw)
    error = self.normalize_angle(self.target_angle - angle_moved)


    # Stop when we reach the target
    if abs(error) < self.tolerance:
      self.stop_robot()
      self.timer.cancel()
      self.get_logger().info('Rotation finished!')
      rclpy.shutdown()
      return

    dt = 0.01
    self.integral_error += error * dt
    derivative = (error - self.prev_error) / dt
    self.prev_error = error

    # Rotate proportionally to remaining angle
    speed = (
        (self.kp * error) + (self.ki * self.integral_error) + (self.kd * derivative)
    )
    
    # Limit rotation speed
    max_speed = 0.5
    speed = max(-max_speed, min(max_speed, speed))

    msg = Twist()
    msg.angular.z = speed
    self.cmd_vel_pub.publish(msg)

  def stop_robot(self):
    msg = Twist()
    msg.linear.x = 0.0
    msg.angular.z = 0.0
    self.cmd_vel_pub.publish(msg)

  @staticmethod
  def normalize_angle(angle):
    return math.atan2(math.sin(angle), math.cos(angle))


def main():
  rclpy.init()
  node = MovementYaw()
  rclpy.spin(node)
  node.destroy_node()
  rclpy.shutdown()


if __name__ == '__main__':
  main()
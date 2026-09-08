import math
import rclpy
from rclpy.action import ActionServer
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node
from geometry_msgs.msg import Twist 
from nav_msgs.msg import Odometry
from maze_msgs.action import MoveX


class MovementXServer(Node):

    def __init__(self):
        super().__init__('movement_x_server')
        self._cb_group = ReentrantCallbackGroup()

        self._action_server = ActionServer(
            self,
            MoveX,
            'move_robot_x',
            self.execute_callback,
            callback_group=self._cb_group,
        )



        self._cmd_pub = self.create_publisher(Twist, '/cmd_vel', 10)
        self._odom_sub = self.create_subscription(
            Odometry,
            '/odom',
            self.odom_callback,
            10,
            callback_group=self._cb_group,
        )

        self.current_x = None
        self.current_y = None
        self.current_yaw = None

    def odom_callback(self, msg:Odometry):
        self.current_x = msg.pose.pose.position.x
        self.current_y = msg.pose.pose.position.y
        q = msg.pose.pose.orientation
        siny_cosp = 2.0 * (q.w * q.z + q.x * q.y)
        cosy_cosp = 1.0 - 2.0 * (q.y * q.y + q.z * q.z)
    
        self.current_yaw = math.atan2(siny_cosp, cosy_cosp)
        
    
    @staticmethod
    def normalize_angle(angle: float) -> float:
        return math.atan2(math.sin(angle), math.cos(angle))
    
    def execute_callback(self, goal_handle):
        
        

        while self.current_x is None or self.current_y is None:
            self.get_logger().info('Waiting for /odom...')
            rclpy.spin_once(self, timeout_sec=0.1)

        start_x = self.current_x
        start_y = self.current_y
        start_yaw = self.current_yaw
        target_dist = abs(goal_handle.request.distance)
        speed = goal_handle.request.speed if goal_handle.request.speed != 0 else 0.2

        if goal_handle.request.distance < 0:
            speed = -abs(speed)

        twist = Twist()
        twist.linear.x = float(speed)

        rate = self.create_rate(20)
        dt = 0.05
        #error heading dummy variables (to be implemented as parameters)
        kp_heading = 2.5
        ki_heading = 0.01
        kd_heading = 0.20

        integral_heading = 0.0
        prev_error_heading = 0.0
        MAX_ANGULAR_SPEED = 1.0
        
        while rclpy.ok():
            dist_traveled = math.hypot(self.current_x - start_x, self.current_y - start_y)
            error_heading = self.normalize_angle(start_yaw - self.current_yaw )
            #error haeding calculations 
            integral_heading += error_heading * dt
            integral_heading = max(min(integral_heading, 0.1), -0.1)
            derivative_heading = (error_heading - prev_error_heading) / dt
            twist.angular.z = (kp_heading * error_heading) + (ki_heading *integral_heading) + (kd_heading * derivative_heading)
            twist.angular.z = max(min(twist.angular.z, MAX_ANGULAR_SPEED), -MAX_ANGULAR_SPEED)
            prev_error_heading = error_heading
            
            if dist_traveled >= target_dist:
                break

            self._cmd_pub.publish(twist)
            rate.sleep()



        stop_twist = Twist()
        self._cmd_pub.publish(stop_twist)

        goal_handle.succeed()
        result = MoveX.Result()
        result.success = True
        return result


def main():
    rclpy.init()
    node = MovementXServer()
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
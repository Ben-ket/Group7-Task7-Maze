import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
import math


class MovementYaw(Node):

    def __init__(self):
        super().__init__('movement_yaw')

        self.cmd_vel_pub = self.create_publisher(
            Twist,
            '/cmd_vel',
            10
        )

        self.odom_sub = self.create_subscription(
            Odometry,
            '/odom',
            self.odom_callback,
            10
        )

        self.current_yaw = None
        self.start_yaw = None

        # Rotate 90 degrees
        self.target_angle = math.pi / 2

        self.timer = self.create_timer(
            0.1,
            self.move_robot
        )

    def odom_callback(self, msg):

        q = msg.pose.pose.orientation

        siny_cosp = 2.0 * (q.w * q.z + q.x * q.y)
        cosy_cosp = 1.0 - 2.0 * (q.y * q.y + q.z * q.z)

        self.current_yaw = math.atan2(
            siny_cosp,
            cosy_cosp
        )

        if self.start_yaw is None:
            self.start_yaw = self.current_yaw

    def move_robot(self):

        if self.start_yaw is None:
            return

        angle_moved = self.current_yaw - self.start_yaw

        # Keep angle between -pi and pi
        angle_moved = math.atan2(
            math.sin(angle_moved),
            math.cos(angle_moved)
        )

        error = self.target_angle - angle_moved

        # Stop when we reach the target
        if abs(error) < 0.02:

            self.stop_robot()

            self.get_logger().info(
                'Yaw movement finished!'
            )

            return

        msg = Twist()

        # Rotate proportionally to remaining angle
        speed = error

        # Limit rotation speed
        if speed > 1.0:
            speed = 1.0
        elif speed < -1.0:
            speed = -1.0

        msg.angular.z = speed
        msg.linear.x = 0.0

        self.cmd_vel_pub.publish(msg)

    def stop_robot(self):

        msg = Twist()

        msg.linear.x = 0.0
        msg.angular.z = 0.0

        self.cmd_vel_pub.publish(msg)


def main(args=None):

    rclpy.init(args=args)

    node = MovementYaw()

    rclpy.spin(node)

    node.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()
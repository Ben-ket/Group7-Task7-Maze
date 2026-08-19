import rclpy
from rclpy.node import Node

from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry

import math


class MovementX(Node):

    def __init__(self):
        super().__init__('movement_x')

        # Publisher for robot movement
        self.cmd_vel_publisher = self.create_publisher(
            Twist,
            '/cmd_vel',
            10
        )

        # Subscriber for robot position
        self.odom_subscriber = self.create_subscription(
            Odometry,
            '/odom',
            self.odom_callback,
            10
        )

        # Starting position
        self.start_x = None

        # How far we want to move
        self.target_distance = 1.0

        # Robot speed
        self.speed = 0.2

        # Check movement regularly
        self.timer = self.create_timer(
            0.1,
            self.move_robot
        )

    def odom_callback(self, msg):

        current_x = msg.pose.pose.position.x

        # Save the starting position
        if self.start_x is None:
            self.start_x = current_x

        self.current_x = current_x

    def move_robot(self):

        # We don't have odometry yet
        if self.start_x is None:
            return

        distance_moved = abs(self.current_x - self.start_x)

        # If we reached the target
        if distance_moved >= self.target_distance:

            self.stop_robot()

            self.get_logger().info(
                'Movement finished!'
            )

            return

        # Keep moving forward
        msg = Twist()
        msg.linear.x = self.speed
        msg.angular.z = 0.0

        self.cmd_vel_publisher.publish(msg)

    def stop_robot(self):

        msg = Twist()

        msg.linear.x = 0.0
        msg.angular.z = 0.0

        self.cmd_vel_publisher.publish(msg)


def main(args=None):

    rclpy.init(args=args)

    node = MovementX()

    rclpy.spin(node)

    node.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()
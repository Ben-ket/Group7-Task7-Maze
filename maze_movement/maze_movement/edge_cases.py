import time


class EdgeCaseHandler:

    def __init__(self, node, stop_robot,
                 odom_timeout=1.0, movement_timeout=10.0):

        self.node = node
        self.stop_robot = stop_robot

        self.odom_timeout = odom_timeout
        self.movement_timeout = movement_timeout

        self.last_odom_time = None
        self.start_time = None

    def odom_received(self):
        self.last_odom_time = self.node.get_clock().now()

    def start_movement(self):
        self.start_time = self.node.get_clock().now()

    def odom_missing(self):

        if self.last_odom_time is None:
            return True

        now = self.node.get_clock().now()

        elapsed = (
            now - self.last_odom_time
        ).nanoseconds / 1e9

        return elapsed > self.odom_timeout

    def movement_timeout_reached(self):

        if self.start_time is None:
            return False

        now = self.node.get_clock().now()

        elapsed = (
            now - self.start_time
        ).nanoseconds / 1e9

        return elapsed > self.movement_timeout

    def check(self):

        if self.odom_missing():

            self.stop_robot()

            self.node.get_logger().error(
                'No /odom data received.'
            )

            return False

        if self.movement_timeout_reached():

            self.stop_robot()

            self.node.get_logger().error(
                'Movement timeout.'
            )

            return False

        return True

    def reset(self):
        self.last_odom_time = None
        self.start_time = None
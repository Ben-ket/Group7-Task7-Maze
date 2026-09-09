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
from rcl_interfaces.msg import SetParametersResult


class MovementYawServer(Node):

    def __init__(self):
        super().__init__('movement_yaw_server')

        self.cb_group = ReentrantCallbackGroup()

        self.current_yaw = None
        self.odom_updated = False

        self.declare_parameter('linear.kp', 20)
        self.declare_parameter('linear.ki', 0.05)
        self.declare_parameter('linear.kd', 1)

        self.kp = self.get_parameter('linear.kp').value
        self.ki = self.get_parameter('linear.ki').value
        self.kd = self.get_parameter('linear.kd').value

        self.add_on_set_parameters_callback(
            self.param_callback
        )

        self.output_min = -100.0
        self.output_max = 100.0

        self.integral_min = -0.1
        self.integral_max = 0.1

        self.create_subscription(
            Odometry,
            '/odom',
            self.odom_callback,
            10,
            callback_group=self.cb_group
        )

        self.cmd_pub = self.create_publisher(
            Twist,
            '/cmd_vel',
            10
        )

        self._action_server = ActionServer(
            self,
            MoveYaw,
            'move_robot_yaw',
            execute_callback=self.execute_callback,
            callback_group=self.cb_group
        )

        self.get_logger().info(
            'Movement Yaw Server is ready.'
        )

    def odom_callback(self, msg):

        q = msg.pose.pose.orientation

        siny_cosp = 2.0 * (
            q.w * q.z +
            q.x * q.y
        )

        cosy_cosp = 1.0 - 2.0 * (
            q.y * q.y +
            q.z * q.z
        )

        self.current_yaw = math.atan2(
            siny_cosp,
            cosy_cosp
        )

        self.odom_updated = True

    @staticmethod
    def normalize_angle(angle):

        return math.atan2(
            math.sin(angle),
            math.cos(angle)
        )

    def compute_pid(
        self,
        error,
        prev_error,
        integral,
        dt
    ):

        P = self.kp * error

        new_integral = integral + (
            error * dt
        )

        new_integral = max(
            self.integral_min,
            min(
                self.integral_max,
                new_integral
            )
        )

        if dt > 0.0:

            derivative = (
                error - prev_error
            ) / dt

        else:

            derivative = 0.0

        D = self.kd * derivative

        predicted_signal = (
            P +
            self.ki * new_integral +
            D
        )

        if (
            self.output_min < predicted_signal
            < self.output_max
        ):

            integral = new_integral

        elif (
            predicted_signal >= self.output_max
            and error < 0
        ):

            integral = new_integral

        elif (
            predicted_signal <= self.output_min
            and error > 0
        ):

            integral = new_integral

        if error * prev_error < 0:

            integral = 0.0

        I = self.ki * integral

        signal = (
            P +
            I +
            D
        )

        signal = max(
            self.output_min,
            min(
                self.output_max,
                signal
            )
        )

        return signal, integral

    def param_callback(self, params):

        for p in params:

            if p.name == 'linear.kp':

                self.kp = p.value

            elif p.name == 'linear.ki':

                self.ki = p.value

            elif p.name == 'linear.kd':

                self.kd = p.value

        self.get_logger().info(
            f'PID updated: '
            f'Kp={self.kp}, '
            f'Ki={self.ki}, '
            f'Kd={self.kd}'
        )

        return SetParametersResult(
            successful=True
        )

    def execute_callback(self, goal_handle):

        self.odom_updated = False

        start_wait = time.time()

        while (
            not self.odom_updated
            and (time.time() - start_wait) < 3.0
        ):

            time.sleep(0.01)

        if self.current_yaw is None:

            self.get_logger().error(
                'No /odom received. Aborting action.'
            )

            goal_handle.abort()

            result = MoveYaw.Result()
            result.success = False

            return result

        target_relative_angle = (
            goal_handle.request.angle
        )

        max_speed = abs(
            goal_handle.request.speed
        )

        if max_speed == 0.0:

            max_speed = 0.8

        start_yaw = self.current_yaw

        target_yaw = self.normalize_angle(
            start_yaw +
            target_relative_angle
        )

        integral = 0.0
        prev_error = 0.0

        current_speed = 0.0

        max_accel = 15.0

        tolerance = math.radians(0.5)

        stable_count = 0

        required_stable_ticks = 5

        control_frequency = 50.0

        dt = 1.0 / control_frequency

        self.get_logger().info(
            f'Executing turn: '
            f'{math.degrees(target_relative_angle):.2f}°'
        )

        while rclpy.ok():

            if goal_handle.is_cancel_requested:

                self.get_logger().info(
                    'Goal cancelled.'
                )

                goal_handle.canceled()

                self.stop_robot()

                result = MoveYaw.Result()
                result.success = False

                return result

            error = self.normalize_angle(
                target_yaw -
                self.current_yaw
            )

            if abs(error) <= tolerance:

                stable_count += 1

                integral = 0.0

                if stable_count >= required_stable_ticks:

                    break

            else:

                stable_count = 0

            signal, integral = self.compute_pid(
                error,
                prev_error,
                integral,
                dt
            )

            desired_speed = max(
                -max_speed,
                min(
                    max_speed,
                    signal
                )
            )

            max_speed_change = (
                max_accel * dt
            )

            speed_diff = (
                desired_speed -
                current_speed
            )

            speed_diff = max(
                -max_speed_change,
                min(
                    max_speed_change,
                    speed_diff
                )
            )

            current_speed += speed_diff

            cmd = Twist()

            cmd.linear.x = 0.0
            cmd.linear.y = 0.0
            cmd.linear.z = 0.0

            cmd.angular.x = 0.0
            cmd.angular.y = 0.0

            cmd.angular.z = current_speed

            self.cmd_pub.publish(cmd)

            prev_error = error

            time.sleep(dt)

        self.stop_robot()

        actual_rotated = self.normalize_angle(
            self.current_yaw -
            start_yaw
        )

        self.get_logger().info(
            f'Turn Complete! '
            f'Target: '
            f'{math.degrees(target_relative_angle):.2f}°, '
            f'Achieved: '
            f'{math.degrees(actual_rotated):.2f}°'
        )

        goal_handle.succeed()

        result = MoveYaw.Result()
        result.success = True

        return result

    def stop_robot(self):

        cmd = Twist()

        cmd.linear.x = 0.0
        cmd.linear.y = 0.0
        cmd.linear.z = 0.0

        cmd.angular.x = 0.0
        cmd.angular.y = 0.0
        cmd.angular.z = 0.0

        for _ in range(5):

            self.cmd_pub.publish(cmd)

            time.sleep(0.005)

    def destroy_node(self):

        self.stop_robot()

        super().destroy_node()


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
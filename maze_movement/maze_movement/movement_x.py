import math
import time
import rclpy
from rclpy.action import ActionServer
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node

from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
from maze_msgs.action import MoveX
from rcl_interfaces.msg import SetParametersResult


class MovementXServer(Node):

    def __init__(self):

        super().__init__('movement_x_server')

        self.cb_group = ReentrantCallbackGroup()

        self.cmd_pub = self.create_publisher(
            Twist,
            '/cmd_vel',
            10
        )

        self.odom_sub = self.create_subscription(
            Odometry,
            '/odom',
            self.odom_callback,
            10,
            callback_group=self.cb_group
        )

        self.action_server = ActionServer(
            self,
            MoveX,
            'move_robot_x',
            execute_callback=self.execute_callback,
            callback_group=self.cb_group
        )

        self.current_x = None
        self.current_y = None
        self.current_yaw = None

        self.declare_parameter(
            'linear.kp',
            8.0
        )

        self.declare_parameter(
            'linear.ki',
            0.1
        )

        self.declare_parameter(
            'linear.kd',
            0.6
        )

        self.kp = self.get_parameter(
            'linear.kp'
        ).value

        self.ki = self.get_parameter(
            'linear.ki'
        ).value

        self.kd = self.get_parameter(
            'linear.kd'
        ).value

        self.declare_parameter(
            'heading.kp',
            5.0
        )

        self.declare_parameter(
            'heading.ki',
            0.05
        )

        self.declare_parameter(
            'heading.kd',
            0.3
        )

        self.heading_kp = self.get_parameter(
            'heading.kp'
        ).value

        self.heading_ki = self.get_parameter(
            'heading.ki'
        ).value

        self.heading_kd = self.get_parameter(
            'heading.kd'
        ).value

        self.add_on_set_parameters_callback(
            self.param_callback
        )

        self.max_speed = 1.0

        self.output_min = -self.max_speed
        self.output_max = self.max_speed

        self.integral_min = -0.1
        self.integral_max = 0.1

        self.max_angular_speed = 1.0

        self.heading_integral_min = -0.1
        self.heading_integral_max = 0.1

        self.max_accel = 1.0

        self.max_angular_accel = 2.0

        self.distance_tolerance = 0.01

        self.heading_tolerance = math.radians(1.0)

        self.required_stable_ticks = 5

        self.get_logger().info(
            'Movement X Server is ready.'
        )

    def odom_callback(self, msg: Odometry):

        self.current_x = msg.pose.pose.position.x
        self.current_y = msg.pose.pose.position.y

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

    @staticmethod
    def normalize_angle(angle: float) -> float:

        return math.atan2(
            math.sin(angle),
            math.cos(angle)
        )

    def linear_pid(
        self,
        error,
        prev_error,
        integral,
        dt
    ):

        if error * prev_error < 0.0:

            integral = 0.0

        P = self.kp * error

        new_integral = (
            integral +
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
                error -
                prev_error
            ) / dt

        else:

            derivative = 0.0

        D = self.kd * derivative

        predicted_output = (
            P +
            self.ki * new_integral +
            D
        )

        if (
            self.output_min < predicted_output <
            self.output_max
        ):

            integral = new_integral

        elif (
            predicted_output >= self.output_max
            and error < 0.0
        ):

            integral = new_integral

        elif (
            predicted_output <= self.output_min
            and error > 0.0
        ):

            integral = new_integral

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

    def heading_pid(
        self,
        error,
        prev_error,
        integral,
        dt
    ):

        if error * prev_error < 0.0:

            integral = 0.0

        P = self.heading_kp * error

        new_integral = (
            integral +
            error * dt
        )

        new_integral = max(
            self.heading_integral_min,
            min(
                self.heading_integral_max,
                new_integral
            )
        )

        if dt > 0.0:

            derivative = (
                error -
                prev_error
            ) / dt

        else:

            derivative = 0.0

        D = self.heading_kd * derivative

        predicted_output = (
            P +
            self.heading_ki * new_integral +
            D
        )

        if (
            -self.max_angular_speed
            < predicted_output
            < self.max_angular_speed
        ):

            integral = new_integral

        elif (
            predicted_output >= self.max_angular_speed
            and error < 0.0
        ):

            integral = new_integral

        elif (
            predicted_output <= -self.max_angular_speed
            and error > 0.0
        ):

            integral = new_integral

        I = self.heading_ki * integral

        signal = (
            P +
            I +
            D
        )

        signal = max(
            -self.max_angular_speed,
            min(
                self.max_angular_speed,
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

            elif p.name == 'heading.kp':

                self.heading_kp = p.value

            elif p.name == 'heading.ki':

                self.heading_ki = p.value

            elif p.name == 'heading.kd':

                self.heading_kd = p.value

        self.get_logger().info(
            f'PID updated | '
            f'Linear: '
            f'Kp={self.kp}, '
            f'Ki={self.ki}, '
            f'Kd={self.kd} | '
            f'Heading: '
            f'Kp={self.heading_kp}, '
            f'Ki={self.heading_ki}, '
            f'Kd={self.heading_kd}'
        )

        return SetParametersResult(
            successful=True
        )

    def execute_callback(self, goal_handle):

        timeout = 3.0
        start_wait = time.time()

        while (
            self.current_x is None
            or self.current_y is None
            or self.current_yaw is None
        ):

            if time.time() - start_wait > timeout:

                self.get_logger().error(
                    'Timeout waiting for /odom.'
                )

                goal_handle.abort()

                result = MoveX.Result()
                result.success = False

                return result

            time.sleep(0.01)

        requested_distance = (
            goal_handle.request.distance
        )

        requested_speed = (
            goal_handle.request.speed
        )

        if requested_distance >= 0.0:

            direction = 1.0

        else:

            direction = -1.0

        target_distance = abs(
            requested_distance
        )

        if requested_speed == 0.0:

            requested_speed = 0.2

        max_speed = min(
            abs(requested_speed),
            self.max_speed
        )

        start_x = self.current_x
        start_y = self.current_y
        start_yaw = self.current_yaw

        linear_integral = 0.0
        previous_linear_error = 0.0

        heading_integral = 0.0
        previous_heading_error = 0.0

        current_linear_speed = 0.0
        current_angular_speed = 0.0

        frequency = 20.0
        dt = 1.0 / frequency

        stable_count = 0

        self.get_logger().info(
            f'Moving X: '
            f'distance={requested_distance:.3f} m, '
            f'max_speed={max_speed:.3f} m/s'
        )

        while rclpy.ok():

            if goal_handle.is_cancel_requested:

                self.get_logger().info(
                    'Move X goal cancelled.'
                )

                self.stop_robot()

                goal_handle.canceled()

                result = MoveX.Result()
                result.success = False

                return result

            dx = self.current_x - start_x
            dy = self.current_y - start_y

            distance_traveled = math.hypot(
                dx,
                dy
            )

            distance_error = (
                target_distance -
                distance_traveled
            )

            if (
                distance_error <=
                self.distance_tolerance
            ):

                stable_count += 1

                linear_integral = 0.0

                if (
                    stable_count >=
                    self.required_stable_ticks
                ):

                    break

            else:

                stable_count = 0

            linear_signal, linear_integral = self.linear_pid(
                distance_error,
                previous_linear_error,
                linear_integral,
                dt
            )

            desired_linear_speed = (
                direction *
                abs(linear_signal)
            )

            desired_linear_speed = max(
                -max_speed,
                min(
                    max_speed,
                    desired_linear_speed
                )
            )

            max_linear_change = (
                self.max_accel *
                dt
            )

            linear_speed_difference = (
                desired_linear_speed -
                current_linear_speed
            )

            linear_speed_difference = max(
                -max_linear_change,
                min(
                    max_linear_change,
                    linear_speed_difference
                )
            )

            current_linear_speed += (
                linear_speed_difference
            )

            heading_error = self.normalize_angle(
                start_yaw -
                self.current_yaw
            )

            if abs(heading_error) <= self.heading_tolerance:

                heading_integral = 0.0

                heading_output = 0.0

            else:

                heading_output, heading_integral = (
                    self.heading_pid(
                        heading_error,
                        previous_heading_error,
                        heading_integral,
                        dt
                    )
                )

            max_angular_change = (
                self.max_angular_accel *
                dt
            )

            angular_difference = (
                heading_output -
                current_angular_speed
            )

            angular_difference = max(
                -max_angular_change,
                min(
                    max_angular_change,
                    angular_difference
                )
            )

            current_angular_speed += (
                angular_difference
            )

            twist = Twist()

            twist.linear.x = float(
                current_linear_speed
            )

            twist.linear.y = 0.0
            twist.linear.z = 0.0

            twist.angular.x = 0.0
            twist.angular.y = 0.0

            twist.angular.z = float(
                current_angular_speed
            )

            self.cmd_pub.publish(
                twist
            )

            previous_linear_error = (
                distance_error
            )

            previous_heading_error = (
                heading_error
            )

            time.sleep(dt)

        self.stop_robot()

        dx = self.current_x - start_x
        dy = self.current_y - start_y

        final_distance = math.hypot(
            dx,
            dy
        )

        self.get_logger().info(
            f'Move Complete | '
            f'Target={target_distance:.3f} m | '
            f'Achieved={final_distance:.3f} m'
        )

        goal_handle.succeed()

        result = MoveX.Result()
        result.success = True

        return result

    def stop_robot(self):

        stop_twist = Twist()

        stop_twist.linear.x = 0.0
        stop_twist.linear.y = 0.0
        stop_twist.linear.z = 0.0

        stop_twist.angular.x = 0.0
        stop_twist.angular.y = 0.0
        stop_twist.angular.z = 0.0

        for _ in range(5):

            self.cmd_pub.publish(
                stop_twist
            )

            time.sleep(0.005)

    def destroy_node(self):

        self.stop_robot()

        super().destroy_node()


def main(args=None):

    rclpy.init(args=args)

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


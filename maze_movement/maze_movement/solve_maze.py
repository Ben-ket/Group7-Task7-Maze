import math
import os
import time
import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from std_srvs.srv import SetBool
from maze_msgs.action import MoveX, MoveYaw

STATE_FILE = '/tmp/wall_state.txt'


class MazeSolverClient(Node):

    def __init__(self):
        super().__init__('maze_solver_client')

        self._move_x_client = ActionClient(self, MoveX, 'move_robot_x')
        self._move_yaw_client = ActionClient(self, MoveYaw, 'move_robot_yaw')
        self._wall_service_client = self.create_client(SetBool, '/toggle_walls_1_2')

        if os.path.exists(STATE_FILE):
            try:
                os.remove(STATE_FILE)
            except OSError:
                pass

        self._wall_state = False

    def move_robot_x(self, distance: float = 1.0, speed: float = 0.7) -> bool:
        goal_msg = MoveX.Goal()
        goal_msg.distance = float(distance)
        goal_msg.speed = float(speed)

        if not self._move_x_client.wait_for_server(timeout_sec=5.0):
            self.get_logger().error('MoveX Action Server not online!')
            return False

        send_goal_future = self._move_x_client.send_goal_async(goal_msg)
        rclpy.spin_until_future_complete(self, send_goal_future)

        goal_handle = send_goal_future.result()
        if not goal_handle.accepted:
            return False

        get_result_future = goal_handle.get_result_async()
        rclpy.spin_until_future_complete(self, get_result_future)
        return get_result_future.result().result.success

    def rotate_robot_yaw(self, angle_rad: float = math.pi / 2.0, speed: float = 0.6) -> bool:
        goal_msg = MoveYaw.Goal()
        goal_msg.angle = float(angle_rad)
        goal_msg.speed = float(speed)

        if not self._move_yaw_client.wait_for_server(timeout_sec=5.0):
            self.get_logger().error('MoveYaw Action Server not online!')
            return False

        send_goal_future = self._move_yaw_client.send_goal_async(goal_msg)
        rclpy.spin_until_future_complete(self, send_goal_future)

        goal_handle = send_goal_future.result()
        if not goal_handle.accepted:
            return False

        get_result_future = goal_handle.get_result_async()
        rclpy.spin_until_future_complete(self, get_result_future)
        return get_result_future.result().result.success

    def lower_red_walls(self) -> bool:
        if not self._wall_service_client.wait_for_service(timeout_sec=5.0):
            self.get_logger().error('Wall service /toggle_walls_1_2 not online!')
            return False

        self._wall_state = not self._wall_state

        try:
            with open(STATE_FILE, 'w') as f:
                f.write(str(self._wall_state))
        except OSError as e:
            self.get_logger().warn(f'Could not write state file: {e}')

        request = SetBool.Request()
        request.data = self._wall_state

        self.get_logger().info(f'Toggling red walls state to: {self._wall_state}')
        future = self._wall_service_client.call_async(request)
        rclpy.spin_until_future_complete(self, future)



        time.sleep(1.5)



        response = future.result()
        return response is not None and response.success

    def solve_maze(self):
        self.rotate_robot_yaw(math.pi / 2.0)
        self.lower_red_walls()
        self.move_robot_x(distance=1.0)
        self.lower_red_walls()
        self.move_robot_x(distance=1.0)
        self.rotate_robot_yaw(-math.pi / 2.0)
        self.move_robot_x(distance=4.5)


def main():
    rclpy.init()
    client = MazeSolverClient()
    client.solve_maze()
    client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
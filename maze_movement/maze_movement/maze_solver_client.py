import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient

from robot_interface.action import MoveRobot
from std_srvs.srv import SetBool


class MazeSolverClient(Node):
    def __init__(self):
        super().__init__('maze_solver_client')

        self.move_x_client = ActionClient(self, MoveRobot, 'movement_x')
        self.move_yaw_client = ActionClient(self, MoveRobot, 'movement_yaw')

        self.wall_client = self.create_client(SetBool, '/switch_walls')

    def move_x(self, distance: float, timeout_sec: float = 15.0) -> bool:
        if not self.move_x_client.wait_for_server(timeout_sec=5.0):
            return False

        goal_msg = MoveRobot.Goal()
        goal_msg.distance = distance

        send_future = self.move_x_client.send_goal_async(goal_msg)
        rclpy.spin_until_future_complete(self, send_future, timeout_sec=5.0)

        goal_handle = send_future.result()
        if goal_handle is None or not goal_handle.accepted:
            return False

        result_future = goal_handle.get_result_async()
        rclpy.spin_until_future_complete(self, result_future, timeout_sec=timeout_sec)

        result = result_future.result()
        if result is None:
            return False

        return result.result.success

    def move_yaw(self, angle: float, timeout_sec: float = 15.0) -> bool:
        if not self.move_yaw_client.wait_for_server(timeout_sec=5.0):
            return False

        goal_msg = MoveRobot.Goal()
        goal_msg.angle = angle

        send_future = self.move_yaw_client.send_goal_async(goal_msg)
        rclpy.spin_until_future_complete(self, send_future, timeout_sec=5.0)

        goal_handle = send_future.result()
        if goal_handle is None or not goal_handle.accepted:
            return False

        result_future = goal_handle.get_result_async()
        rclpy.spin_until_future_complete(self, result_future, timeout_sec=timeout_sec)

        result = result_future.result()
        if result is None:
            return False

        return result.result.success

    def open_wall(self, open_it: bool = True, timeout_sec: float = 5.0) -> bool:
        if not self.wall_client.wait_for_service(timeout_sec=5.0):
            return False

        request = SetBool.Request()
        request.data = open_it

        future = self.wall_client.call_async(request)
        rclpy.spin_until_future_complete(self, future, timeout_sec=timeout_sec)

        response = future.result()
        if response is None:
            return False

        return response.success

    def solve_maze(self):
        steps = [
            ('move_yaw', -1.57),
            ('open_wall', True),
            ('move_x', 2.0),
            ('open_wall', True),
            ('move_x', 2.0),
            ('move_yaw', 1.57),
            ('move_x', 8.0),
        ]

        for action, value in steps:
            if action == 'move_x':
                ok = self.move_x(value)
            elif action == 'move_yaw':
                ok = self.move_yaw(value)
            elif action == 'open_wall':
                ok = self.open_wall(value)
            else:
                ok = False

            if not ok:
                return False

        return True


def main():
    rclpy.init()

    node = MazeSolverClient()
    node.solve_maze()

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
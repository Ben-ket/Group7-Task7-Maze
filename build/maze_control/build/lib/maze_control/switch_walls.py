#!/usr/bin/env python3

import os
import rclpy
from rclpy.node import Node
from std_srvs.srv import SetBool

STATE_FILE = '/tmp/wall_state.txt'


class SwitchWalls(Node):
    def __init__(self):
        super().__init__('switch_walls')
        self.client = self.create_client(SetBool, '/toggle_walls_1_2')

    def toggle(self):
        current_state = False
        if os.path.exists(STATE_FILE):
            with open(STATE_FILE, 'r') as f:
                current_state = f.read().strip() == 'True'

        target_state = not current_state

        with open(STATE_FILE, 'w') as f:
            f.write(str(target_state))

        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('waiting for wall service')

        request = SetBool.Request()
        request.data = target_state

        self.get_logger().info(f'wall state: {target_state}')

        future = self.client.call_async(request)
        rclpy.spin_until_future_complete(self, future)

        return future.result()


def main():
    rclpy.init()

    node = SwitchWalls()
    response = node.toggle()

    if response is not None:
        node.get_logger().info(f'response: {response.success}, message="{response.message}"')
    else:
        node.get_logger().error('service call failed')

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
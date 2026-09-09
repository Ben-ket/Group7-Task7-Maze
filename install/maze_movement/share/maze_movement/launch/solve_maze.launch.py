from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # 1. Start the MoveX Action Server node
        Node(
            package='maze_movement',
            executable='movement_x',
            name='movement_x_server',
            output='screen'
        ),
        
        # 2. Start the MoveYaw Action Server node
        Node(
            package='maze_movement',
            executable='movement_yaw',
            name='movement_yaw_server',
            output='screen'
        ),
        
        # 3. Start the Maze Solver Action Client node
        Node(
            package='maze_movement',
            executable='solve_maze',
            name='solve_maze_client',
            output='screen'
        ),
    ])
# Group 7 Task7.2 - ROS 2 Maze Solver

A Python-based ROS 2 package designed for using Actions & services in a robot simulation to solve a Maze

## Requirements

-ROS 2 (Humble / Jazzy / Rolling)

-Gazebo / Ignition Simulation environment

-Python packages: rclpy, geometry_msgs, nav_msgs, numpy

-Custom interfaces: maze_msgs (contains MoveYaw.action)

##Build Instructions

-Clone this repository into your ROS 2 workspace's src folder:

```Bash
cd ~/ros2_ws/src
git clone <your-repository-url>
```
-Build the workspace using colcon:

```Bash
cd ~/ros2_ws
colcon build --packages-select maze_movement maze_msgs
```
-Source your setup environment:

```Bash
source install/setup.bash
```

## Usage
1. Launch the Main Gazebo Simulation

```Bash
ros2 launch maze_control maze_simulation_tb3.launch.py
```
2. In a Another Terminal, Launch the maze Solver

```Bash
ros2 launch maze_control solve_maze.launch.py
```
3. Enjoy the Moving Robot :)

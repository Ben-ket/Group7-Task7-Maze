# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target maze_msgs::maze_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${maze_msgs_TARGETS}.
if(maze_msgs_TARGETS AND NOT TARGET maze_msgs::maze_msgs)
  add_library(maze_msgs::maze_msgs INTERFACE IMPORTED)
  set_target_properties(maze_msgs::maze_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${maze_msgs_TARGETS}")
endif()

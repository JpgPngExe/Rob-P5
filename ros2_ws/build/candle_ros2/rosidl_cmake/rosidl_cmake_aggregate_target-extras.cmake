# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target candle_ros2::candle_ros2
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${candle_ros2_TARGETS}.
if(candle_ros2_TARGETS AND NOT TARGET candle_ros2::candle_ros2)
  add_library(candle_ros2::candle_ros2 INTERFACE IMPORTED)
  set_target_properties(candle_ros2::candle_ros2 PROPERTIES
    INTERFACE_LINK_LIBRARIES "${candle_ros2_TARGETS}")
endif()

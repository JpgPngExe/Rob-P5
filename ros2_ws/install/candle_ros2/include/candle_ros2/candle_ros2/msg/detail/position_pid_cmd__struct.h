// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from candle_ros2:msg/PositionPidCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/msg/position_pid_cmd.h"


#ifndef CANDLE_ROS2__MSG__DETAIL__POSITION_PID_CMD__STRUCT_H_
#define CANDLE_ROS2__MSG__DETAIL__POSITION_PID_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'device_ids'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'position_pid'
// Member 'velocity_pid'
#include "candle_ros2/msg/detail/pid__struct.h"

/// Struct defined in msg/PositionPidCmd in the package candle_ros2.
/**
  * Message holds PID controller parameters for Position PID motion mode for MD controllers
 */
typedef struct candle_ros2__msg__PositionPidCmd
{
  /// Device IDs
  rosidl_runtime_c__uint16__Sequence device_ids;
  /// Position PID parameters
  candle_ros2__msg__Pid__Sequence position_pid;
  /// Velocity PID parameters
  candle_ros2__msg__Pid__Sequence velocity_pid;
} candle_ros2__msg__PositionPidCmd;

// Struct for a sequence of candle_ros2__msg__PositionPidCmd.
typedef struct candle_ros2__msg__PositionPidCmd__Sequence
{
  candle_ros2__msg__PositionPidCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} candle_ros2__msg__PositionPidCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CANDLE_ROS2__MSG__DETAIL__POSITION_PID_CMD__STRUCT_H_

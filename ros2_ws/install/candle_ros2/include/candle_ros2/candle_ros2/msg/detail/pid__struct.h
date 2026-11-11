// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from candle_ros2:msg/Pid.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/msg/pid.h"


#ifndef CANDLE_ROS2__MSG__DETAIL__PID__STRUCT_H_
#define CANDLE_ROS2__MSG__DETAIL__PID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Pid in the package candle_ros2.
/**
  * Message holds PID controller parameters
 */
typedef struct candle_ros2__msg__Pid
{
  float kp;
  float ki;
  float kd;
  float i_windup;
  float max_output;
} candle_ros2__msg__Pid;

// Struct for a sequence of candle_ros2__msg__Pid.
typedef struct candle_ros2__msg__Pid__Sequence
{
  candle_ros2__msg__Pid * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} candle_ros2__msg__Pid__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CANDLE_ROS2__MSG__DETAIL__PID__STRUCT_H_

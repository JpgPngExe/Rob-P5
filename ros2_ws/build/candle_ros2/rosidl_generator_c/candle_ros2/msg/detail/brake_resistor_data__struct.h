// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from candle_ros2:msg/BrakeResistorData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/msg/brake_resistor_data.h"


#ifndef CANDLE_ROS2__MSG__DETAIL__BRAKE_RESISTOR_DATA__STRUCT_H_
#define CANDLE_ROS2__MSG__DETAIL__BRAKE_RESISTOR_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/BrakeResistorData in the package candle_ros2.
typedef struct candle_ros2__msg__BrakeResistorData
{
  std_msgs__msg__Header header;
  bool enabled;
  float temperature;
  float temperature_limit;
} candle_ros2__msg__BrakeResistorData;

// Struct for a sequence of candle_ros2__msg__BrakeResistorData.
typedef struct candle_ros2__msg__BrakeResistorData__Sequence
{
  candle_ros2__msg__BrakeResistorData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} candle_ros2__msg__BrakeResistorData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CANDLE_ROS2__MSG__DETAIL__BRAKE_RESISTOR_DATA__STRUCT_H_

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from candle_ros2:msg/ControlModuleData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/msg/control_module_data.h"


#ifndef CANDLE_ROS2__MSG__DETAIL__CONTROL_MODULE_DATA__STRUCT_H_
#define CANDLE_ROS2__MSG__DETAIL__CONTROL_MODULE_DATA__STRUCT_H_

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

/// Struct defined in msg/ControlModuleData in the package candle_ros2.
typedef struct candle_ros2__msg__ControlModuleData
{
  std_msgs__msg__Header header;
  uint32_t bus_voltage;
  uint32_t battery_voltage_level_1;
  uint32_t battery_voltage_level_2;
  uint32_t brake_trigger_voltage;
  float temperature;
  float temperature_limit;
} candle_ros2__msg__ControlModuleData;

// Struct for a sequence of candle_ros2__msg__ControlModuleData.
typedef struct candle_ros2__msg__ControlModuleData__Sequence
{
  candle_ros2__msg__ControlModuleData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} candle_ros2__msg__ControlModuleData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CANDLE_ROS2__MSG__DETAIL__CONTROL_MODULE_DATA__STRUCT_H_

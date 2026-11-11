// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from candle_ros2:msg/IsolatedConverterData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/msg/isolated_converter_data.h"


#ifndef CANDLE_ROS2__MSG__DETAIL__ISOLATED_CONVERTER_DATA__STRUCT_H_
#define CANDLE_ROS2__MSG__DETAIL__ISOLATED_CONVERTER_DATA__STRUCT_H_

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

/// Struct defined in msg/IsolatedConverterData in the package candle_ros2.
typedef struct candle_ros2__msg__IsolatedConverterData
{
  std_msgs__msg__Header header;
  bool enabled;
  uint32_t output_voltage;
  int32_t load_current;
  int32_t power;
  int32_t energy;
  uint32_t ocd_level;
  uint32_t ocd_delay;
  float temperature;
  float temperature_limit;
} candle_ros2__msg__IsolatedConverterData;

// Struct for a sequence of candle_ros2__msg__IsolatedConverterData.
typedef struct candle_ros2__msg__IsolatedConverterData__Sequence
{
  candle_ros2__msg__IsolatedConverterData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} candle_ros2__msg__IsolatedConverterData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CANDLE_ROS2__MSG__DETAIL__ISOLATED_CONVERTER_DATA__STRUCT_H_

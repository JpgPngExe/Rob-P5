// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from candle_ros2:msg/PowerStageData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/msg/power_stage_data.h"


#ifndef CANDLE_ROS2__MSG__DETAIL__POWER_STAGE_DATA__STRUCT_H_
#define CANDLE_ROS2__MSG__DETAIL__POWER_STAGE_DATA__STRUCT_H_

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

/// Struct defined in msg/PowerStageData in the package candle_ros2.
typedef struct candle_ros2__msg__PowerStageData
{
  std_msgs__msg__Header header;
  bool enabled;
  uint8_t brake_resistor_socket;
  uint32_t trigger_voltage;
  uint32_t output_voltage;
  bool autostart;
  int32_t load_current;
  int32_t power;
  uint32_t energy;
  uint32_t ocd_level;
  uint32_t ocd_delay;
  float temperature;
  float temperature_limit;
} candle_ros2__msg__PowerStageData;

// Struct for a sequence of candle_ros2__msg__PowerStageData.
typedef struct candle_ros2__msg__PowerStageData__Sequence
{
  candle_ros2__msg__PowerStageData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} candle_ros2__msg__PowerStageData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CANDLE_ROS2__MSG__DETAIL__POWER_STAGE_DATA__STRUCT_H_

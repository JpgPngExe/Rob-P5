// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from candle_ros2:msg/BrakeResistorData.idl
// generated code does not contain a copyright notice
#ifndef CANDLE_ROS2__MSG__DETAIL__BRAKE_RESISTOR_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define CANDLE_ROS2__MSG__DETAIL__BRAKE_RESISTOR_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "candle_ros2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "candle_ros2/msg/detail/brake_resistor_data__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_candle_ros2
bool cdr_serialize_candle_ros2__msg__BrakeResistorData(
  const candle_ros2__msg__BrakeResistorData * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_candle_ros2
bool cdr_deserialize_candle_ros2__msg__BrakeResistorData(
  eprosima::fastcdr::Cdr &,
  candle_ros2__msg__BrakeResistorData * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_candle_ros2
size_t get_serialized_size_candle_ros2__msg__BrakeResistorData(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_candle_ros2
size_t max_serialized_size_candle_ros2__msg__BrakeResistorData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_candle_ros2
bool cdr_serialize_key_candle_ros2__msg__BrakeResistorData(
  const candle_ros2__msg__BrakeResistorData * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_candle_ros2
size_t get_serialized_size_key_candle_ros2__msg__BrakeResistorData(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_candle_ros2
size_t max_serialized_size_key_candle_ros2__msg__BrakeResistorData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_candle_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, candle_ros2, msg, BrakeResistorData)();

#ifdef __cplusplus
}
#endif

#endif  // CANDLE_ROS2__MSG__DETAIL__BRAKE_RESISTOR_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_

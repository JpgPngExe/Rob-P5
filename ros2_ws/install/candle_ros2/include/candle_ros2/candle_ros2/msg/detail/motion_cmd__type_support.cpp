// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from candle_ros2:msg/MotionCmd.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "candle_ros2/msg/detail/motion_cmd__functions.h"
#include "candle_ros2/msg/detail/motion_cmd__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace candle_ros2
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MotionCmd_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) candle_ros2::msg::MotionCmd(_init);
}

void MotionCmd_fini_function(void * message_memory)
{
  auto typed_message = static_cast<candle_ros2::msg::MotionCmd *>(message_memory);
  typed_message->~MotionCmd();
}

size_t size_function__MotionCmd__device_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotionCmd__device_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MotionCmd__device_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotionCmd__device_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__MotionCmd__device_ids(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__MotionCmd__device_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__MotionCmd__device_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__MotionCmd__device_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MotionCmd__target_position(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotionCmd__target_position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__MotionCmd__target_position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotionCmd__target_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MotionCmd__target_position(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MotionCmd__target_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MotionCmd__target_position(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__MotionCmd__target_position(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MotionCmd__target_velocity(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotionCmd__target_velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__MotionCmd__target_velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotionCmd__target_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MotionCmd__target_velocity(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MotionCmd__target_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MotionCmd__target_velocity(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__MotionCmd__target_velocity(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MotionCmd__target_torque(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotionCmd__target_torque(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__MotionCmd__target_torque(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotionCmd__target_torque(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MotionCmd__target_torque(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MotionCmd__target_torque(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MotionCmd__target_torque(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__MotionCmd__target_torque(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotionCmd_message_member_array[4] = {
  {
    "device_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2::msg::MotionCmd, device_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotionCmd__device_ids,  // size() function pointer
    get_const_function__MotionCmd__device_ids,  // get_const(index) function pointer
    get_function__MotionCmd__device_ids,  // get(index) function pointer
    fetch_function__MotionCmd__device_ids,  // fetch(index, &value) function pointer
    assign_function__MotionCmd__device_ids,  // assign(index, value) function pointer
    resize_function__MotionCmd__device_ids  // resize(index) function pointer
  },
  {
    "target_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2::msg::MotionCmd, target_position),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotionCmd__target_position,  // size() function pointer
    get_const_function__MotionCmd__target_position,  // get_const(index) function pointer
    get_function__MotionCmd__target_position,  // get(index) function pointer
    fetch_function__MotionCmd__target_position,  // fetch(index, &value) function pointer
    assign_function__MotionCmd__target_position,  // assign(index, value) function pointer
    resize_function__MotionCmd__target_position  // resize(index) function pointer
  },
  {
    "target_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2::msg::MotionCmd, target_velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotionCmd__target_velocity,  // size() function pointer
    get_const_function__MotionCmd__target_velocity,  // get_const(index) function pointer
    get_function__MotionCmd__target_velocity,  // get(index) function pointer
    fetch_function__MotionCmd__target_velocity,  // fetch(index, &value) function pointer
    assign_function__MotionCmd__target_velocity,  // assign(index, value) function pointer
    resize_function__MotionCmd__target_velocity  // resize(index) function pointer
  },
  {
    "target_torque",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2::msg::MotionCmd, target_torque),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotionCmd__target_torque,  // size() function pointer
    get_const_function__MotionCmd__target_torque,  // get_const(index) function pointer
    get_function__MotionCmd__target_torque,  // get(index) function pointer
    fetch_function__MotionCmd__target_torque,  // fetch(index, &value) function pointer
    assign_function__MotionCmd__target_torque,  // assign(index, value) function pointer
    resize_function__MotionCmd__target_torque  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotionCmd_message_members = {
  "candle_ros2::msg",  // message namespace
  "MotionCmd",  // message name
  4,  // number of fields
  sizeof(candle_ros2::msg::MotionCmd),
  false,  // has_any_key_member_
  MotionCmd_message_member_array,  // message members
  MotionCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  MotionCmd_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotionCmd_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotionCmd_message_members,
  get_message_typesupport_handle_function,
  &candle_ros2__msg__MotionCmd__get_type_hash,
  &candle_ros2__msg__MotionCmd__get_type_description,
  &candle_ros2__msg__MotionCmd__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace candle_ros2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<candle_ros2::msg::MotionCmd>()
{
  return &::candle_ros2::msg::rosidl_typesupport_introspection_cpp::MotionCmd_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, candle_ros2, msg, MotionCmd)() {
  return &::candle_ros2::msg::rosidl_typesupport_introspection_cpp::MotionCmd_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

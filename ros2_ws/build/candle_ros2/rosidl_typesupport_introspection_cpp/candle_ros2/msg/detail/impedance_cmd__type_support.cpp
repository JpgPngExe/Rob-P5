// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from candle_ros2:msg/ImpedanceCmd.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "candle_ros2/msg/detail/impedance_cmd__functions.h"
#include "candle_ros2/msg/detail/impedance_cmd__struct.hpp"
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

void ImpedanceCmd_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) candle_ros2::msg::ImpedanceCmd(_init);
}

void ImpedanceCmd_fini_function(void * message_memory)
{
  auto typed_message = static_cast<candle_ros2::msg::ImpedanceCmd *>(message_memory);
  typed_message->~ImpedanceCmd();
}

size_t size_function__ImpedanceCmd__device_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ImpedanceCmd__device_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ImpedanceCmd__device_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__ImpedanceCmd__device_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint16_t *>(
    get_const_function__ImpedanceCmd__device_ids(untyped_member, index));
  auto & value = *reinterpret_cast<uint16_t *>(untyped_value);
  value = item;
}

void assign_function__ImpedanceCmd__device_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint16_t *>(
    get_function__ImpedanceCmd__device_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint16_t *>(untyped_value);
  item = value;
}

void resize_function__ImpedanceCmd__device_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ImpedanceCmd__kp(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ImpedanceCmd__kp(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ImpedanceCmd__kp(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__ImpedanceCmd__kp(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ImpedanceCmd__kp(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ImpedanceCmd__kp(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ImpedanceCmd__kp(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__ImpedanceCmd__kp(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ImpedanceCmd__kd(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ImpedanceCmd__kd(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ImpedanceCmd__kd(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__ImpedanceCmd__kd(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ImpedanceCmd__kd(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ImpedanceCmd__kd(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ImpedanceCmd__kd(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__ImpedanceCmd__kd(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ImpedanceCmd__max_output(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ImpedanceCmd__max_output(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ImpedanceCmd__max_output(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__ImpedanceCmd__max_output(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ImpedanceCmd__max_output(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ImpedanceCmd__max_output(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ImpedanceCmd__max_output(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__ImpedanceCmd__max_output(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ImpedanceCmd_message_member_array[4] = {
  {
    "device_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2::msg::ImpedanceCmd, device_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__ImpedanceCmd__device_ids,  // size() function pointer
    get_const_function__ImpedanceCmd__device_ids,  // get_const(index) function pointer
    get_function__ImpedanceCmd__device_ids,  // get(index) function pointer
    fetch_function__ImpedanceCmd__device_ids,  // fetch(index, &value) function pointer
    assign_function__ImpedanceCmd__device_ids,  // assign(index, value) function pointer
    resize_function__ImpedanceCmd__device_ids  // resize(index) function pointer
  },
  {
    "kp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2::msg::ImpedanceCmd, kp),  // bytes offset in struct
    nullptr,  // default value
    size_function__ImpedanceCmd__kp,  // size() function pointer
    get_const_function__ImpedanceCmd__kp,  // get_const(index) function pointer
    get_function__ImpedanceCmd__kp,  // get(index) function pointer
    fetch_function__ImpedanceCmd__kp,  // fetch(index, &value) function pointer
    assign_function__ImpedanceCmd__kp,  // assign(index, value) function pointer
    resize_function__ImpedanceCmd__kp  // resize(index) function pointer
  },
  {
    "kd",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2::msg::ImpedanceCmd, kd),  // bytes offset in struct
    nullptr,  // default value
    size_function__ImpedanceCmd__kd,  // size() function pointer
    get_const_function__ImpedanceCmd__kd,  // get_const(index) function pointer
    get_function__ImpedanceCmd__kd,  // get(index) function pointer
    fetch_function__ImpedanceCmd__kd,  // fetch(index, &value) function pointer
    assign_function__ImpedanceCmd__kd,  // assign(index, value) function pointer
    resize_function__ImpedanceCmd__kd  // resize(index) function pointer
  },
  {
    "max_output",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2::msg::ImpedanceCmd, max_output),  // bytes offset in struct
    nullptr,  // default value
    size_function__ImpedanceCmd__max_output,  // size() function pointer
    get_const_function__ImpedanceCmd__max_output,  // get_const(index) function pointer
    get_function__ImpedanceCmd__max_output,  // get(index) function pointer
    fetch_function__ImpedanceCmd__max_output,  // fetch(index, &value) function pointer
    assign_function__ImpedanceCmd__max_output,  // assign(index, value) function pointer
    resize_function__ImpedanceCmd__max_output  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ImpedanceCmd_message_members = {
  "candle_ros2::msg",  // message namespace
  "ImpedanceCmd",  // message name
  4,  // number of fields
  sizeof(candle_ros2::msg::ImpedanceCmd),
  false,  // has_any_key_member_
  ImpedanceCmd_message_member_array,  // message members
  ImpedanceCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  ImpedanceCmd_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ImpedanceCmd_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ImpedanceCmd_message_members,
  get_message_typesupport_handle_function,
  &candle_ros2__msg__ImpedanceCmd__get_type_hash,
  &candle_ros2__msg__ImpedanceCmd__get_type_description,
  &candle_ros2__msg__ImpedanceCmd__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace candle_ros2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<candle_ros2::msg::ImpedanceCmd>()
{
  return &::candle_ros2::msg::rosidl_typesupport_introspection_cpp::ImpedanceCmd_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, candle_ros2, msg, ImpedanceCmd)() {
  return &::candle_ros2::msg::rosidl_typesupport_introspection_cpp::ImpedanceCmd_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

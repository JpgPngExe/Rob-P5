// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from candle_ros2:msg/BrakeResistorData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "candle_ros2/msg/detail/brake_resistor_data__functions.h"
#include "candle_ros2/msg/detail/brake_resistor_data__struct.hpp"
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

void BrakeResistorData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) candle_ros2::msg::BrakeResistorData(_init);
}

void BrakeResistorData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<candle_ros2::msg::BrakeResistorData *>(message_memory);
  typed_message->~BrakeResistorData();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BrakeResistorData_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2::msg::BrakeResistorData, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "enabled",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2::msg::BrakeResistorData, enabled),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "temperature",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2::msg::BrakeResistorData, temperature),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "temperature_limit",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2::msg::BrakeResistorData, temperature_limit),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BrakeResistorData_message_members = {
  "candle_ros2::msg",  // message namespace
  "BrakeResistorData",  // message name
  4,  // number of fields
  sizeof(candle_ros2::msg::BrakeResistorData),
  false,  // has_any_key_member_
  BrakeResistorData_message_member_array,  // message members
  BrakeResistorData_init_function,  // function to initialize message memory (memory has to be allocated)
  BrakeResistorData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BrakeResistorData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BrakeResistorData_message_members,
  get_message_typesupport_handle_function,
  &candle_ros2__msg__BrakeResistorData__get_type_hash,
  &candle_ros2__msg__BrakeResistorData__get_type_description,
  &candle_ros2__msg__BrakeResistorData__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace candle_ros2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<candle_ros2::msg::BrakeResistorData>()
{
  return &::candle_ros2::msg::rosidl_typesupport_introspection_cpp::BrakeResistorData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, candle_ros2, msg, BrakeResistorData)() {
  return &::candle_ros2::msg::rosidl_typesupport_introspection_cpp::BrakeResistorData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

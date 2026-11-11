// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from candle_ros2:srv/SetLimits.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "candle_ros2/srv/detail/set_limits__functions.h"
#include "candle_ros2/srv/detail/set_limits__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace candle_ros2
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SetLimits_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) candle_ros2::srv::SetLimits_Request(_init);
}

void SetLimits_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<candle_ros2::srv::SetLimits_Request *>(message_memory);
  typed_message->~SetLimits_Request();
}

size_t size_function__SetLimits_Request__device_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetLimits_Request__device_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SetLimits_Request__device_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetLimits_Request__device_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint16_t *>(
    get_const_function__SetLimits_Request__device_ids(untyped_member, index));
  auto & value = *reinterpret_cast<uint16_t *>(untyped_value);
  value = item;
}

void assign_function__SetLimits_Request__device_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint16_t *>(
    get_function__SetLimits_Request__device_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint16_t *>(untyped_value);
  item = value;
}

void resize_function__SetLimits_Request__device_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SetLimits_Request__velocity_limit(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetLimits_Request__velocity_limit(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__SetLimits_Request__velocity_limit(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetLimits_Request__velocity_limit(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SetLimits_Request__velocity_limit(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SetLimits_Request__velocity_limit(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SetLimits_Request__velocity_limit(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__SetLimits_Request__velocity_limit(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SetLimits_Request__torque_limit(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetLimits_Request__torque_limit(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__SetLimits_Request__torque_limit(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetLimits_Request__torque_limit(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SetLimits_Request__torque_limit(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SetLimits_Request__torque_limit(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SetLimits_Request__torque_limit(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__SetLimits_Request__torque_limit(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetLimits_Request_message_member_array[3] = {
  {
    "device_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2::srv::SetLimits_Request, device_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetLimits_Request__device_ids,  // size() function pointer
    get_const_function__SetLimits_Request__device_ids,  // get_const(index) function pointer
    get_function__SetLimits_Request__device_ids,  // get(index) function pointer
    fetch_function__SetLimits_Request__device_ids,  // fetch(index, &value) function pointer
    assign_function__SetLimits_Request__device_ids,  // assign(index, value) function pointer
    resize_function__SetLimits_Request__device_ids  // resize(index) function pointer
  },
  {
    "velocity_limit",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2::srv::SetLimits_Request, velocity_limit),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetLimits_Request__velocity_limit,  // size() function pointer
    get_const_function__SetLimits_Request__velocity_limit,  // get_const(index) function pointer
    get_function__SetLimits_Request__velocity_limit,  // get(index) function pointer
    fetch_function__SetLimits_Request__velocity_limit,  // fetch(index, &value) function pointer
    assign_function__SetLimits_Request__velocity_limit,  // assign(index, value) function pointer
    resize_function__SetLimits_Request__velocity_limit  // resize(index) function pointer
  },
  {
    "torque_limit",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2::srv::SetLimits_Request, torque_limit),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetLimits_Request__torque_limit,  // size() function pointer
    get_const_function__SetLimits_Request__torque_limit,  // get_const(index) function pointer
    get_function__SetLimits_Request__torque_limit,  // get(index) function pointer
    fetch_function__SetLimits_Request__torque_limit,  // fetch(index, &value) function pointer
    assign_function__SetLimits_Request__torque_limit,  // assign(index, value) function pointer
    resize_function__SetLimits_Request__torque_limit  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetLimits_Request_message_members = {
  "candle_ros2::srv",  // message namespace
  "SetLimits_Request",  // message name
  3,  // number of fields
  sizeof(candle_ros2::srv::SetLimits_Request),
  false,  // has_any_key_member_
  SetLimits_Request_message_member_array,  // message members
  SetLimits_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetLimits_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetLimits_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetLimits_Request_message_members,
  get_message_typesupport_handle_function,
  &candle_ros2__srv__SetLimits_Request__get_type_hash,
  &candle_ros2__srv__SetLimits_Request__get_type_description,
  &candle_ros2__srv__SetLimits_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace candle_ros2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<candle_ros2::srv::SetLimits_Request>()
{
  return &::candle_ros2::srv::rosidl_typesupport_introspection_cpp::SetLimits_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, candle_ros2, srv, SetLimits_Request)() {
  return &::candle_ros2::srv::rosidl_typesupport_introspection_cpp::SetLimits_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "candle_ros2/srv/detail/set_limits__functions.h"
// already included above
// #include "candle_ros2/srv/detail/set_limits__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace candle_ros2
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SetLimits_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) candle_ros2::srv::SetLimits_Response(_init);
}

void SetLimits_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<candle_ros2::srv::SetLimits_Response *>(message_memory);
  typed_message->~SetLimits_Response();
}

size_t size_function__SetLimits_Response__success(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__SetLimits_Response__success(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__SetLimits_Response__success(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__SetLimits_Response__success(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetLimits_Response_message_member_array[1] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2::srv::SetLimits_Response, success),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetLimits_Response__success,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__SetLimits_Response__success,  // fetch(index, &value) function pointer
    assign_function__SetLimits_Response__success,  // assign(index, value) function pointer
    resize_function__SetLimits_Response__success  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetLimits_Response_message_members = {
  "candle_ros2::srv",  // message namespace
  "SetLimits_Response",  // message name
  1,  // number of fields
  sizeof(candle_ros2::srv::SetLimits_Response),
  false,  // has_any_key_member_
  SetLimits_Response_message_member_array,  // message members
  SetLimits_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetLimits_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetLimits_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetLimits_Response_message_members,
  get_message_typesupport_handle_function,
  &candle_ros2__srv__SetLimits_Response__get_type_hash,
  &candle_ros2__srv__SetLimits_Response__get_type_description,
  &candle_ros2__srv__SetLimits_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace candle_ros2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<candle_ros2::srv::SetLimits_Response>()
{
  return &::candle_ros2::srv::rosidl_typesupport_introspection_cpp::SetLimits_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, candle_ros2, srv, SetLimits_Response)() {
  return &::candle_ros2::srv::rosidl_typesupport_introspection_cpp::SetLimits_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "candle_ros2/srv/detail/set_limits__functions.h"
// already included above
// #include "candle_ros2/srv/detail/set_limits__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace candle_ros2
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SetLimits_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) candle_ros2::srv::SetLimits_Event(_init);
}

void SetLimits_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<candle_ros2::srv::SetLimits_Event *>(message_memory);
  typed_message->~SetLimits_Event();
}

size_t size_function__SetLimits_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<candle_ros2::srv::SetLimits_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetLimits_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<candle_ros2::srv::SetLimits_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__SetLimits_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<candle_ros2::srv::SetLimits_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetLimits_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const candle_ros2::srv::SetLimits_Request *>(
    get_const_function__SetLimits_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<candle_ros2::srv::SetLimits_Request *>(untyped_value);
  value = item;
}

void assign_function__SetLimits_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<candle_ros2::srv::SetLimits_Request *>(
    get_function__SetLimits_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const candle_ros2::srv::SetLimits_Request *>(untyped_value);
  item = value;
}

void resize_function__SetLimits_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<candle_ros2::srv::SetLimits_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SetLimits_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<candle_ros2::srv::SetLimits_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetLimits_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<candle_ros2::srv::SetLimits_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__SetLimits_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<candle_ros2::srv::SetLimits_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetLimits_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const candle_ros2::srv::SetLimits_Response *>(
    get_const_function__SetLimits_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<candle_ros2::srv::SetLimits_Response *>(untyped_value);
  value = item;
}

void assign_function__SetLimits_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<candle_ros2::srv::SetLimits_Response *>(
    get_function__SetLimits_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const candle_ros2::srv::SetLimits_Response *>(untyped_value);
  item = value;
}

void resize_function__SetLimits_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<candle_ros2::srv::SetLimits_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetLimits_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2::srv::SetLimits_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<candle_ros2::srv::SetLimits_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(candle_ros2::srv::SetLimits_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetLimits_Event__request,  // size() function pointer
    get_const_function__SetLimits_Event__request,  // get_const(index) function pointer
    get_function__SetLimits_Event__request,  // get(index) function pointer
    fetch_function__SetLimits_Event__request,  // fetch(index, &value) function pointer
    assign_function__SetLimits_Event__request,  // assign(index, value) function pointer
    resize_function__SetLimits_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<candle_ros2::srv::SetLimits_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(candle_ros2::srv::SetLimits_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetLimits_Event__response,  // size() function pointer
    get_const_function__SetLimits_Event__response,  // get_const(index) function pointer
    get_function__SetLimits_Event__response,  // get(index) function pointer
    fetch_function__SetLimits_Event__response,  // fetch(index, &value) function pointer
    assign_function__SetLimits_Event__response,  // assign(index, value) function pointer
    resize_function__SetLimits_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetLimits_Event_message_members = {
  "candle_ros2::srv",  // message namespace
  "SetLimits_Event",  // message name
  3,  // number of fields
  sizeof(candle_ros2::srv::SetLimits_Event),
  false,  // has_any_key_member_
  SetLimits_Event_message_member_array,  // message members
  SetLimits_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  SetLimits_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetLimits_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetLimits_Event_message_members,
  get_message_typesupport_handle_function,
  &candle_ros2__srv__SetLimits_Event__get_type_hash,
  &candle_ros2__srv__SetLimits_Event__get_type_description,
  &candle_ros2__srv__SetLimits_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace candle_ros2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<candle_ros2::srv::SetLimits_Event>()
{
  return &::candle_ros2::srv::rosidl_typesupport_introspection_cpp::SetLimits_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, candle_ros2, srv, SetLimits_Event)() {
  return &::candle_ros2::srv::rosidl_typesupport_introspection_cpp::SetLimits_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "candle_ros2/srv/detail/set_limits__functions.h"
// already included above
// #include "candle_ros2/srv/detail/set_limits__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace candle_ros2
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers SetLimits_service_members = {
  "candle_ros2::srv",  // service namespace
  "SetLimits",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<candle_ros2::srv::SetLimits>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t SetLimits_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetLimits_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<candle_ros2::srv::SetLimits_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<candle_ros2::srv::SetLimits_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<candle_ros2::srv::SetLimits_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<candle_ros2::srv::SetLimits>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<candle_ros2::srv::SetLimits>,
  &candle_ros2__srv__SetLimits__get_type_hash,
  &candle_ros2__srv__SetLimits__get_type_description,
  &candle_ros2__srv__SetLimits__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace candle_ros2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<candle_ros2::srv::SetLimits>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::candle_ros2::srv::rosidl_typesupport_introspection_cpp::SetLimits_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::candle_ros2::srv::SetLimits_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::candle_ros2::srv::SetLimits_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::candle_ros2::srv::SetLimits_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, candle_ros2, srv, SetLimits)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<candle_ros2::srv::SetLimits>();
}

#ifdef __cplusplus
}
#endif

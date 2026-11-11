// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from candle_ros2:msg/Pid.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "candle_ros2/msg/detail/pid__rosidl_typesupport_introspection_c.h"
#include "candle_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "candle_ros2/msg/detail/pid__functions.h"
#include "candle_ros2/msg/detail/pid__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void candle_ros2__msg__Pid__rosidl_typesupport_introspection_c__Pid_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  candle_ros2__msg__Pid__init(message_memory);
}

void candle_ros2__msg__Pid__rosidl_typesupport_introspection_c__Pid_fini_function(void * message_memory)
{
  candle_ros2__msg__Pid__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember candle_ros2__msg__Pid__rosidl_typesupport_introspection_c__Pid_message_member_array[5] = {
  {
    "kp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2__msg__Pid, kp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ki",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2__msg__Pid, ki),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2__msg__Pid, kd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "i_windup",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2__msg__Pid, i_windup),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_output",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2__msg__Pid, max_output),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers candle_ros2__msg__Pid__rosidl_typesupport_introspection_c__Pid_message_members = {
  "candle_ros2__msg",  // message namespace
  "Pid",  // message name
  5,  // number of fields
  sizeof(candle_ros2__msg__Pid),
  false,  // has_any_key_member_
  candle_ros2__msg__Pid__rosidl_typesupport_introspection_c__Pid_message_member_array,  // message members
  candle_ros2__msg__Pid__rosidl_typesupport_introspection_c__Pid_init_function,  // function to initialize message memory (memory has to be allocated)
  candle_ros2__msg__Pid__rosidl_typesupport_introspection_c__Pid_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t candle_ros2__msg__Pid__rosidl_typesupport_introspection_c__Pid_message_type_support_handle = {
  0,
  &candle_ros2__msg__Pid__rosidl_typesupport_introspection_c__Pid_message_members,
  get_message_typesupport_handle_function,
  &candle_ros2__msg__Pid__get_type_hash,
  &candle_ros2__msg__Pid__get_type_description,
  &candle_ros2__msg__Pid__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_candle_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, candle_ros2, msg, Pid)() {
  if (!candle_ros2__msg__Pid__rosidl_typesupport_introspection_c__Pid_message_type_support_handle.typesupport_identifier) {
    candle_ros2__msg__Pid__rosidl_typesupport_introspection_c__Pid_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &candle_ros2__msg__Pid__rosidl_typesupport_introspection_c__Pid_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

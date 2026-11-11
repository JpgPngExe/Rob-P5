// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from candle_ros2:msg/VelocityPidCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "candle_ros2/msg/detail/velocity_pid_cmd__rosidl_typesupport_introspection_c.h"
#include "candle_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "candle_ros2/msg/detail/velocity_pid_cmd__functions.h"
#include "candle_ros2/msg/detail/velocity_pid_cmd__struct.h"


// Include directives for member types
// Member `device_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `velocity_pid`
#include "candle_ros2/msg/pid.h"
// Member `velocity_pid`
#include "candle_ros2/msg/detail/pid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__VelocityPidCmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  candle_ros2__msg__VelocityPidCmd__init(message_memory);
}

void candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__VelocityPidCmd_fini_function(void * message_memory)
{
  candle_ros2__msg__VelocityPidCmd__fini(message_memory);
}

size_t candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__size_function__VelocityPidCmd__device_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return member->size;
}

const void * candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__get_const_function__VelocityPidCmd__device_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint16__Sequence * member =
    (const rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__get_function__VelocityPidCmd__device_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  return &member->data[index];
}

void candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__fetch_function__VelocityPidCmd__device_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint16_t * item =
    ((const uint16_t *)
    candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__get_const_function__VelocityPidCmd__device_ids(untyped_member, index));
  uint16_t * value =
    (uint16_t *)(untyped_value);
  *value = *item;
}

void candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__assign_function__VelocityPidCmd__device_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint16_t * item =
    ((uint16_t *)
    candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__get_function__VelocityPidCmd__device_ids(untyped_member, index));
  const uint16_t * value =
    (const uint16_t *)(untyped_value);
  *item = *value;
}

bool candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__resize_function__VelocityPidCmd__device_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint16__Sequence * member =
    (rosidl_runtime_c__uint16__Sequence *)(untyped_member);
  rosidl_runtime_c__uint16__Sequence__fini(member);
  return rosidl_runtime_c__uint16__Sequence__init(member, size);
}

size_t candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__size_function__VelocityPidCmd__velocity_pid(
  const void * untyped_member)
{
  const candle_ros2__msg__Pid__Sequence * member =
    (const candle_ros2__msg__Pid__Sequence *)(untyped_member);
  return member->size;
}

const void * candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__get_const_function__VelocityPidCmd__velocity_pid(
  const void * untyped_member, size_t index)
{
  const candle_ros2__msg__Pid__Sequence * member =
    (const candle_ros2__msg__Pid__Sequence *)(untyped_member);
  return &member->data[index];
}

void * candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__get_function__VelocityPidCmd__velocity_pid(
  void * untyped_member, size_t index)
{
  candle_ros2__msg__Pid__Sequence * member =
    (candle_ros2__msg__Pid__Sequence *)(untyped_member);
  return &member->data[index];
}

void candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__fetch_function__VelocityPidCmd__velocity_pid(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const candle_ros2__msg__Pid * item =
    ((const candle_ros2__msg__Pid *)
    candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__get_const_function__VelocityPidCmd__velocity_pid(untyped_member, index));
  candle_ros2__msg__Pid * value =
    (candle_ros2__msg__Pid *)(untyped_value);
  *value = *item;
}

void candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__assign_function__VelocityPidCmd__velocity_pid(
  void * untyped_member, size_t index, const void * untyped_value)
{
  candle_ros2__msg__Pid * item =
    ((candle_ros2__msg__Pid *)
    candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__get_function__VelocityPidCmd__velocity_pid(untyped_member, index));
  const candle_ros2__msg__Pid * value =
    (const candle_ros2__msg__Pid *)(untyped_value);
  *item = *value;
}

bool candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__resize_function__VelocityPidCmd__velocity_pid(
  void * untyped_member, size_t size)
{
  candle_ros2__msg__Pid__Sequence * member =
    (candle_ros2__msg__Pid__Sequence *)(untyped_member);
  candle_ros2__msg__Pid__Sequence__fini(member);
  return candle_ros2__msg__Pid__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__VelocityPidCmd_message_member_array[2] = {
  {
    "device_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2__msg__VelocityPidCmd, device_ids),  // bytes offset in struct
    NULL,  // default value
    candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__size_function__VelocityPidCmd__device_ids,  // size() function pointer
    candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__get_const_function__VelocityPidCmd__device_ids,  // get_const(index) function pointer
    candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__get_function__VelocityPidCmd__device_ids,  // get(index) function pointer
    candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__fetch_function__VelocityPidCmd__device_ids,  // fetch(index, &value) function pointer
    candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__assign_function__VelocityPidCmd__device_ids,  // assign(index, value) function pointer
    candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__resize_function__VelocityPidCmd__device_ids  // resize(index) function pointer
  },
  {
    "velocity_pid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2__msg__VelocityPidCmd, velocity_pid),  // bytes offset in struct
    NULL,  // default value
    candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__size_function__VelocityPidCmd__velocity_pid,  // size() function pointer
    candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__get_const_function__VelocityPidCmd__velocity_pid,  // get_const(index) function pointer
    candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__get_function__VelocityPidCmd__velocity_pid,  // get(index) function pointer
    candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__fetch_function__VelocityPidCmd__velocity_pid,  // fetch(index, &value) function pointer
    candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__assign_function__VelocityPidCmd__velocity_pid,  // assign(index, value) function pointer
    candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__resize_function__VelocityPidCmd__velocity_pid  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__VelocityPidCmd_message_members = {
  "candle_ros2__msg",  // message namespace
  "VelocityPidCmd",  // message name
  2,  // number of fields
  sizeof(candle_ros2__msg__VelocityPidCmd),
  false,  // has_any_key_member_
  candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__VelocityPidCmd_message_member_array,  // message members
  candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__VelocityPidCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__VelocityPidCmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__VelocityPidCmd_message_type_support_handle = {
  0,
  &candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__VelocityPidCmd_message_members,
  get_message_typesupport_handle_function,
  &candle_ros2__msg__VelocityPidCmd__get_type_hash,
  &candle_ros2__msg__VelocityPidCmd__get_type_description,
  &candle_ros2__msg__VelocityPidCmd__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_candle_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, candle_ros2, msg, VelocityPidCmd)() {
  candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__VelocityPidCmd_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, candle_ros2, msg, Pid)();
  if (!candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__VelocityPidCmd_message_type_support_handle.typesupport_identifier) {
    candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__VelocityPidCmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &candle_ros2__msg__VelocityPidCmd__rosidl_typesupport_introspection_c__VelocityPidCmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

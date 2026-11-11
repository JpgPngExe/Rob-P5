// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from candle_ros2:msg/MotionCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "candle_ros2/msg/detail/motion_cmd__rosidl_typesupport_introspection_c.h"
#include "candle_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "candle_ros2/msg/detail/motion_cmd__functions.h"
#include "candle_ros2/msg/detail/motion_cmd__struct.h"


// Include directives for member types
// Member `device_ids`
// Member `target_position`
// Member `target_velocity`
// Member `target_torque`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__MotionCmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  candle_ros2__msg__MotionCmd__init(message_memory);
}

void candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__MotionCmd_fini_function(void * message_memory)
{
  candle_ros2__msg__MotionCmd__fini(message_memory);
}

size_t candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__size_function__MotionCmd__device_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__get_const_function__MotionCmd__device_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__get_function__MotionCmd__device_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__fetch_function__MotionCmd__device_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__get_const_function__MotionCmd__device_ids(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__assign_function__MotionCmd__device_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__get_function__MotionCmd__device_ids(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__resize_function__MotionCmd__device_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__size_function__MotionCmd__target_position(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__get_const_function__MotionCmd__target_position(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__get_function__MotionCmd__target_position(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__fetch_function__MotionCmd__target_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__get_const_function__MotionCmd__target_position(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__assign_function__MotionCmd__target_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__get_function__MotionCmd__target_position(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__resize_function__MotionCmd__target_position(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__size_function__MotionCmd__target_velocity(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__get_const_function__MotionCmd__target_velocity(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__get_function__MotionCmd__target_velocity(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__fetch_function__MotionCmd__target_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__get_const_function__MotionCmd__target_velocity(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__assign_function__MotionCmd__target_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__get_function__MotionCmd__target_velocity(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__resize_function__MotionCmd__target_velocity(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__size_function__MotionCmd__target_torque(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__get_const_function__MotionCmd__target_torque(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__get_function__MotionCmd__target_torque(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__fetch_function__MotionCmd__target_torque(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__get_const_function__MotionCmd__target_torque(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__assign_function__MotionCmd__target_torque(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__get_function__MotionCmd__target_torque(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__resize_function__MotionCmd__target_torque(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__MotionCmd_message_member_array[4] = {
  {
    "device_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2__msg__MotionCmd, device_ids),  // bytes offset in struct
    NULL,  // default value
    candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__size_function__MotionCmd__device_ids,  // size() function pointer
    candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__get_const_function__MotionCmd__device_ids,  // get_const(index) function pointer
    candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__get_function__MotionCmd__device_ids,  // get(index) function pointer
    candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__fetch_function__MotionCmd__device_ids,  // fetch(index, &value) function pointer
    candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__assign_function__MotionCmd__device_ids,  // assign(index, value) function pointer
    candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__resize_function__MotionCmd__device_ids  // resize(index) function pointer
  },
  {
    "target_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2__msg__MotionCmd, target_position),  // bytes offset in struct
    NULL,  // default value
    candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__size_function__MotionCmd__target_position,  // size() function pointer
    candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__get_const_function__MotionCmd__target_position,  // get_const(index) function pointer
    candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__get_function__MotionCmd__target_position,  // get(index) function pointer
    candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__fetch_function__MotionCmd__target_position,  // fetch(index, &value) function pointer
    candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__assign_function__MotionCmd__target_position,  // assign(index, value) function pointer
    candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__resize_function__MotionCmd__target_position  // resize(index) function pointer
  },
  {
    "target_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2__msg__MotionCmd, target_velocity),  // bytes offset in struct
    NULL,  // default value
    candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__size_function__MotionCmd__target_velocity,  // size() function pointer
    candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__get_const_function__MotionCmd__target_velocity,  // get_const(index) function pointer
    candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__get_function__MotionCmd__target_velocity,  // get(index) function pointer
    candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__fetch_function__MotionCmd__target_velocity,  // fetch(index, &value) function pointer
    candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__assign_function__MotionCmd__target_velocity,  // assign(index, value) function pointer
    candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__resize_function__MotionCmd__target_velocity  // resize(index) function pointer
  },
  {
    "target_torque",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2__msg__MotionCmd, target_torque),  // bytes offset in struct
    NULL,  // default value
    candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__size_function__MotionCmd__target_torque,  // size() function pointer
    candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__get_const_function__MotionCmd__target_torque,  // get_const(index) function pointer
    candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__get_function__MotionCmd__target_torque,  // get(index) function pointer
    candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__fetch_function__MotionCmd__target_torque,  // fetch(index, &value) function pointer
    candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__assign_function__MotionCmd__target_torque,  // assign(index, value) function pointer
    candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__resize_function__MotionCmd__target_torque  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__MotionCmd_message_members = {
  "candle_ros2__msg",  // message namespace
  "MotionCmd",  // message name
  4,  // number of fields
  sizeof(candle_ros2__msg__MotionCmd),
  false,  // has_any_key_member_
  candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__MotionCmd_message_member_array,  // message members
  candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__MotionCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__MotionCmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__MotionCmd_message_type_support_handle = {
  0,
  &candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__MotionCmd_message_members,
  get_message_typesupport_handle_function,
  &candle_ros2__msg__MotionCmd__get_type_hash,
  &candle_ros2__msg__MotionCmd__get_type_description,
  &candle_ros2__msg__MotionCmd__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_candle_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, candle_ros2, msg, MotionCmd)() {
  if (!candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__MotionCmd_message_type_support_handle.typesupport_identifier) {
    candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__MotionCmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &candle_ros2__msg__MotionCmd__rosidl_typesupport_introspection_c__MotionCmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

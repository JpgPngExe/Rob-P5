// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from candle_ros2:srv/GenericPds.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "candle_ros2/srv/detail/generic_pds__rosidl_typesupport_introspection_c.h"
#include "candle_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "candle_ros2/srv/detail/generic_pds__functions.h"
#include "candle_ros2/srv/detail/generic_pds__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void candle_ros2__srv__GenericPds_Request__rosidl_typesupport_introspection_c__GenericPds_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  candle_ros2__srv__GenericPds_Request__init(message_memory);
}

void candle_ros2__srv__GenericPds_Request__rosidl_typesupport_introspection_c__GenericPds_Request_fini_function(void * message_memory)
{
  candle_ros2__srv__GenericPds_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember candle_ros2__srv__GenericPds_Request__rosidl_typesupport_introspection_c__GenericPds_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2__srv__GenericPds_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers candle_ros2__srv__GenericPds_Request__rosidl_typesupport_introspection_c__GenericPds_Request_message_members = {
  "candle_ros2__srv",  // message namespace
  "GenericPds_Request",  // message name
  1,  // number of fields
  sizeof(candle_ros2__srv__GenericPds_Request),
  false,  // has_any_key_member_
  candle_ros2__srv__GenericPds_Request__rosidl_typesupport_introspection_c__GenericPds_Request_message_member_array,  // message members
  candle_ros2__srv__GenericPds_Request__rosidl_typesupport_introspection_c__GenericPds_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  candle_ros2__srv__GenericPds_Request__rosidl_typesupport_introspection_c__GenericPds_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t candle_ros2__srv__GenericPds_Request__rosidl_typesupport_introspection_c__GenericPds_Request_message_type_support_handle = {
  0,
  &candle_ros2__srv__GenericPds_Request__rosidl_typesupport_introspection_c__GenericPds_Request_message_members,
  get_message_typesupport_handle_function,
  &candle_ros2__srv__GenericPds_Request__get_type_hash,
  &candle_ros2__srv__GenericPds_Request__get_type_description,
  &candle_ros2__srv__GenericPds_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_candle_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, candle_ros2, srv, GenericPds_Request)() {
  if (!candle_ros2__srv__GenericPds_Request__rosidl_typesupport_introspection_c__GenericPds_Request_message_type_support_handle.typesupport_identifier) {
    candle_ros2__srv__GenericPds_Request__rosidl_typesupport_introspection_c__GenericPds_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &candle_ros2__srv__GenericPds_Request__rosidl_typesupport_introspection_c__GenericPds_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "candle_ros2/srv/detail/generic_pds__rosidl_typesupport_introspection_c.h"
// already included above
// #include "candle_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "candle_ros2/srv/detail/generic_pds__functions.h"
// already included above
// #include "candle_ros2/srv/detail/generic_pds__struct.h"


// Include directives for member types
// Member `success`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void candle_ros2__srv__GenericPds_Response__rosidl_typesupport_introspection_c__GenericPds_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  candle_ros2__srv__GenericPds_Response__init(message_memory);
}

void candle_ros2__srv__GenericPds_Response__rosidl_typesupport_introspection_c__GenericPds_Response_fini_function(void * message_memory)
{
  candle_ros2__srv__GenericPds_Response__fini(message_memory);
}

size_t candle_ros2__srv__GenericPds_Response__rosidl_typesupport_introspection_c__size_function__GenericPds_Response__success(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * candle_ros2__srv__GenericPds_Response__rosidl_typesupport_introspection_c__get_const_function__GenericPds_Response__success(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * candle_ros2__srv__GenericPds_Response__rosidl_typesupport_introspection_c__get_function__GenericPds_Response__success(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void candle_ros2__srv__GenericPds_Response__rosidl_typesupport_introspection_c__fetch_function__GenericPds_Response__success(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    candle_ros2__srv__GenericPds_Response__rosidl_typesupport_introspection_c__get_const_function__GenericPds_Response__success(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void candle_ros2__srv__GenericPds_Response__rosidl_typesupport_introspection_c__assign_function__GenericPds_Response__success(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    candle_ros2__srv__GenericPds_Response__rosidl_typesupport_introspection_c__get_function__GenericPds_Response__success(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool candle_ros2__srv__GenericPds_Response__rosidl_typesupport_introspection_c__resize_function__GenericPds_Response__success(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember candle_ros2__srv__GenericPds_Response__rosidl_typesupport_introspection_c__GenericPds_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2__srv__GenericPds_Response, success),  // bytes offset in struct
    NULL,  // default value
    candle_ros2__srv__GenericPds_Response__rosidl_typesupport_introspection_c__size_function__GenericPds_Response__success,  // size() function pointer
    candle_ros2__srv__GenericPds_Response__rosidl_typesupport_introspection_c__get_const_function__GenericPds_Response__success,  // get_const(index) function pointer
    candle_ros2__srv__GenericPds_Response__rosidl_typesupport_introspection_c__get_function__GenericPds_Response__success,  // get(index) function pointer
    candle_ros2__srv__GenericPds_Response__rosidl_typesupport_introspection_c__fetch_function__GenericPds_Response__success,  // fetch(index, &value) function pointer
    candle_ros2__srv__GenericPds_Response__rosidl_typesupport_introspection_c__assign_function__GenericPds_Response__success,  // assign(index, value) function pointer
    candle_ros2__srv__GenericPds_Response__rosidl_typesupport_introspection_c__resize_function__GenericPds_Response__success  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers candle_ros2__srv__GenericPds_Response__rosidl_typesupport_introspection_c__GenericPds_Response_message_members = {
  "candle_ros2__srv",  // message namespace
  "GenericPds_Response",  // message name
  1,  // number of fields
  sizeof(candle_ros2__srv__GenericPds_Response),
  false,  // has_any_key_member_
  candle_ros2__srv__GenericPds_Response__rosidl_typesupport_introspection_c__GenericPds_Response_message_member_array,  // message members
  candle_ros2__srv__GenericPds_Response__rosidl_typesupport_introspection_c__GenericPds_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  candle_ros2__srv__GenericPds_Response__rosidl_typesupport_introspection_c__GenericPds_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t candle_ros2__srv__GenericPds_Response__rosidl_typesupport_introspection_c__GenericPds_Response_message_type_support_handle = {
  0,
  &candle_ros2__srv__GenericPds_Response__rosidl_typesupport_introspection_c__GenericPds_Response_message_members,
  get_message_typesupport_handle_function,
  &candle_ros2__srv__GenericPds_Response__get_type_hash,
  &candle_ros2__srv__GenericPds_Response__get_type_description,
  &candle_ros2__srv__GenericPds_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_candle_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, candle_ros2, srv, GenericPds_Response)() {
  if (!candle_ros2__srv__GenericPds_Response__rosidl_typesupport_introspection_c__GenericPds_Response_message_type_support_handle.typesupport_identifier) {
    candle_ros2__srv__GenericPds_Response__rosidl_typesupport_introspection_c__GenericPds_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &candle_ros2__srv__GenericPds_Response__rosidl_typesupport_introspection_c__GenericPds_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "candle_ros2/srv/detail/generic_pds__rosidl_typesupport_introspection_c.h"
// already included above
// #include "candle_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "candle_ros2/srv/detail/generic_pds__functions.h"
// already included above
// #include "candle_ros2/srv/detail/generic_pds__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "candle_ros2/srv/generic_pds.h"
// Member `request`
// Member `response`
// already included above
// #include "candle_ros2/srv/detail/generic_pds__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__GenericPds_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  candle_ros2__srv__GenericPds_Event__init(message_memory);
}

void candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__GenericPds_Event_fini_function(void * message_memory)
{
  candle_ros2__srv__GenericPds_Event__fini(message_memory);
}

size_t candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__size_function__GenericPds_Event__request(
  const void * untyped_member)
{
  const candle_ros2__srv__GenericPds_Request__Sequence * member =
    (const candle_ros2__srv__GenericPds_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__get_const_function__GenericPds_Event__request(
  const void * untyped_member, size_t index)
{
  const candle_ros2__srv__GenericPds_Request__Sequence * member =
    (const candle_ros2__srv__GenericPds_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__get_function__GenericPds_Event__request(
  void * untyped_member, size_t index)
{
  candle_ros2__srv__GenericPds_Request__Sequence * member =
    (candle_ros2__srv__GenericPds_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__fetch_function__GenericPds_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const candle_ros2__srv__GenericPds_Request * item =
    ((const candle_ros2__srv__GenericPds_Request *)
    candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__get_const_function__GenericPds_Event__request(untyped_member, index));
  candle_ros2__srv__GenericPds_Request * value =
    (candle_ros2__srv__GenericPds_Request *)(untyped_value);
  *value = *item;
}

void candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__assign_function__GenericPds_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  candle_ros2__srv__GenericPds_Request * item =
    ((candle_ros2__srv__GenericPds_Request *)
    candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__get_function__GenericPds_Event__request(untyped_member, index));
  const candle_ros2__srv__GenericPds_Request * value =
    (const candle_ros2__srv__GenericPds_Request *)(untyped_value);
  *item = *value;
}

bool candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__resize_function__GenericPds_Event__request(
  void * untyped_member, size_t size)
{
  candle_ros2__srv__GenericPds_Request__Sequence * member =
    (candle_ros2__srv__GenericPds_Request__Sequence *)(untyped_member);
  candle_ros2__srv__GenericPds_Request__Sequence__fini(member);
  return candle_ros2__srv__GenericPds_Request__Sequence__init(member, size);
}

size_t candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__size_function__GenericPds_Event__response(
  const void * untyped_member)
{
  const candle_ros2__srv__GenericPds_Response__Sequence * member =
    (const candle_ros2__srv__GenericPds_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__get_const_function__GenericPds_Event__response(
  const void * untyped_member, size_t index)
{
  const candle_ros2__srv__GenericPds_Response__Sequence * member =
    (const candle_ros2__srv__GenericPds_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__get_function__GenericPds_Event__response(
  void * untyped_member, size_t index)
{
  candle_ros2__srv__GenericPds_Response__Sequence * member =
    (candle_ros2__srv__GenericPds_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__fetch_function__GenericPds_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const candle_ros2__srv__GenericPds_Response * item =
    ((const candle_ros2__srv__GenericPds_Response *)
    candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__get_const_function__GenericPds_Event__response(untyped_member, index));
  candle_ros2__srv__GenericPds_Response * value =
    (candle_ros2__srv__GenericPds_Response *)(untyped_value);
  *value = *item;
}

void candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__assign_function__GenericPds_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  candle_ros2__srv__GenericPds_Response * item =
    ((candle_ros2__srv__GenericPds_Response *)
    candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__get_function__GenericPds_Event__response(untyped_member, index));
  const candle_ros2__srv__GenericPds_Response * value =
    (const candle_ros2__srv__GenericPds_Response *)(untyped_value);
  *item = *value;
}

bool candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__resize_function__GenericPds_Event__response(
  void * untyped_member, size_t size)
{
  candle_ros2__srv__GenericPds_Response__Sequence * member =
    (candle_ros2__srv__GenericPds_Response__Sequence *)(untyped_member);
  candle_ros2__srv__GenericPds_Response__Sequence__fini(member);
  return candle_ros2__srv__GenericPds_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__GenericPds_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2__srv__GenericPds_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(candle_ros2__srv__GenericPds_Event, request),  // bytes offset in struct
    NULL,  // default value
    candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__size_function__GenericPds_Event__request,  // size() function pointer
    candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__get_const_function__GenericPds_Event__request,  // get_const(index) function pointer
    candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__get_function__GenericPds_Event__request,  // get(index) function pointer
    candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__fetch_function__GenericPds_Event__request,  // fetch(index, &value) function pointer
    candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__assign_function__GenericPds_Event__request,  // assign(index, value) function pointer
    candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__resize_function__GenericPds_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(candle_ros2__srv__GenericPds_Event, response),  // bytes offset in struct
    NULL,  // default value
    candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__size_function__GenericPds_Event__response,  // size() function pointer
    candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__get_const_function__GenericPds_Event__response,  // get_const(index) function pointer
    candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__get_function__GenericPds_Event__response,  // get(index) function pointer
    candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__fetch_function__GenericPds_Event__response,  // fetch(index, &value) function pointer
    candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__assign_function__GenericPds_Event__response,  // assign(index, value) function pointer
    candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__resize_function__GenericPds_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__GenericPds_Event_message_members = {
  "candle_ros2__srv",  // message namespace
  "GenericPds_Event",  // message name
  3,  // number of fields
  sizeof(candle_ros2__srv__GenericPds_Event),
  false,  // has_any_key_member_
  candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__GenericPds_Event_message_member_array,  // message members
  candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__GenericPds_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__GenericPds_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__GenericPds_Event_message_type_support_handle = {
  0,
  &candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__GenericPds_Event_message_members,
  get_message_typesupport_handle_function,
  &candle_ros2__srv__GenericPds_Event__get_type_hash,
  &candle_ros2__srv__GenericPds_Event__get_type_description,
  &candle_ros2__srv__GenericPds_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_candle_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, candle_ros2, srv, GenericPds_Event)() {
  candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__GenericPds_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__GenericPds_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, candle_ros2, srv, GenericPds_Request)();
  candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__GenericPds_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, candle_ros2, srv, GenericPds_Response)();
  if (!candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__GenericPds_Event_message_type_support_handle.typesupport_identifier) {
    candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__GenericPds_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__GenericPds_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "candle_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "candle_ros2/srv/detail/generic_pds__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers candle_ros2__srv__detail__generic_pds__rosidl_typesupport_introspection_c__GenericPds_service_members = {
  "candle_ros2__srv",  // service namespace
  "GenericPds",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // candle_ros2__srv__detail__generic_pds__rosidl_typesupport_introspection_c__GenericPds_Request_message_type_support_handle,
  NULL,  // response message
  // candle_ros2__srv__detail__generic_pds__rosidl_typesupport_introspection_c__GenericPds_Response_message_type_support_handle
  NULL  // event_message
  // candle_ros2__srv__detail__generic_pds__rosidl_typesupport_introspection_c__GenericPds_Response_message_type_support_handle
};


static rosidl_service_type_support_t candle_ros2__srv__detail__generic_pds__rosidl_typesupport_introspection_c__GenericPds_service_type_support_handle = {
  0,
  &candle_ros2__srv__detail__generic_pds__rosidl_typesupport_introspection_c__GenericPds_service_members,
  get_service_typesupport_handle_function,
  &candle_ros2__srv__GenericPds_Request__rosidl_typesupport_introspection_c__GenericPds_Request_message_type_support_handle,
  &candle_ros2__srv__GenericPds_Response__rosidl_typesupport_introspection_c__GenericPds_Response_message_type_support_handle,
  &candle_ros2__srv__GenericPds_Event__rosidl_typesupport_introspection_c__GenericPds_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    candle_ros2,
    srv,
    GenericPds
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    candle_ros2,
    srv,
    GenericPds
  ),
  &candle_ros2__srv__GenericPds__get_type_hash,
  &candle_ros2__srv__GenericPds__get_type_description,
  &candle_ros2__srv__GenericPds__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, candle_ros2, srv, GenericPds_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, candle_ros2, srv, GenericPds_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, candle_ros2, srv, GenericPds_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_candle_ros2
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, candle_ros2, srv, GenericPds)(void) {
  if (!candle_ros2__srv__detail__generic_pds__rosidl_typesupport_introspection_c__GenericPds_service_type_support_handle.typesupport_identifier) {
    candle_ros2__srv__detail__generic_pds__rosidl_typesupport_introspection_c__GenericPds_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)candle_ros2__srv__detail__generic_pds__rosidl_typesupport_introspection_c__GenericPds_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, candle_ros2, srv, GenericPds_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, candle_ros2, srv, GenericPds_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, candle_ros2, srv, GenericPds_Event)()->data;
  }

  return &candle_ros2__srv__detail__generic_pds__rosidl_typesupport_introspection_c__GenericPds_service_type_support_handle;
}

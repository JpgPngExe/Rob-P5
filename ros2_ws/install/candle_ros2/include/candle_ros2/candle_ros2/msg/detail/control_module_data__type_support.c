// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from candle_ros2:msg/ControlModuleData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "candle_ros2/msg/detail/control_module_data__rosidl_typesupport_introspection_c.h"
#include "candle_ros2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "candle_ros2/msg/detail/control_module_data__functions.h"
#include "candle_ros2/msg/detail/control_module_data__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void candle_ros2__msg__ControlModuleData__rosidl_typesupport_introspection_c__ControlModuleData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  candle_ros2__msg__ControlModuleData__init(message_memory);
}

void candle_ros2__msg__ControlModuleData__rosidl_typesupport_introspection_c__ControlModuleData_fini_function(void * message_memory)
{
  candle_ros2__msg__ControlModuleData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember candle_ros2__msg__ControlModuleData__rosidl_typesupport_introspection_c__ControlModuleData_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2__msg__ControlModuleData, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bus_voltage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2__msg__ControlModuleData, bus_voltage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery_voltage_level_1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2__msg__ControlModuleData, battery_voltage_level_1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery_voltage_level_2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2__msg__ControlModuleData, battery_voltage_level_2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "brake_trigger_voltage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2__msg__ControlModuleData, brake_trigger_voltage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2__msg__ControlModuleData, temperature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "temperature_limit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(candle_ros2__msg__ControlModuleData, temperature_limit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers candle_ros2__msg__ControlModuleData__rosidl_typesupport_introspection_c__ControlModuleData_message_members = {
  "candle_ros2__msg",  // message namespace
  "ControlModuleData",  // message name
  7,  // number of fields
  sizeof(candle_ros2__msg__ControlModuleData),
  false,  // has_any_key_member_
  candle_ros2__msg__ControlModuleData__rosidl_typesupport_introspection_c__ControlModuleData_message_member_array,  // message members
  candle_ros2__msg__ControlModuleData__rosidl_typesupport_introspection_c__ControlModuleData_init_function,  // function to initialize message memory (memory has to be allocated)
  candle_ros2__msg__ControlModuleData__rosidl_typesupport_introspection_c__ControlModuleData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t candle_ros2__msg__ControlModuleData__rosidl_typesupport_introspection_c__ControlModuleData_message_type_support_handle = {
  0,
  &candle_ros2__msg__ControlModuleData__rosidl_typesupport_introspection_c__ControlModuleData_message_members,
  get_message_typesupport_handle_function,
  &candle_ros2__msg__ControlModuleData__get_type_hash,
  &candle_ros2__msg__ControlModuleData__get_type_description,
  &candle_ros2__msg__ControlModuleData__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_candle_ros2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, candle_ros2, msg, ControlModuleData)() {
  candle_ros2__msg__ControlModuleData__rosidl_typesupport_introspection_c__ControlModuleData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!candle_ros2__msg__ControlModuleData__rosidl_typesupport_introspection_c__ControlModuleData_message_type_support_handle.typesupport_identifier) {
    candle_ros2__msg__ControlModuleData__rosidl_typesupport_introspection_c__ControlModuleData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &candle_ros2__msg__ControlModuleData__rosidl_typesupport_introspection_c__ControlModuleData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

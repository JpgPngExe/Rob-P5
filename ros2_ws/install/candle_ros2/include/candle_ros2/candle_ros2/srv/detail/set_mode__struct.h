// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from candle_ros2:srv/SetMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/srv/set_mode.h"


#ifndef CANDLE_ROS2__SRV__DETAIL__SET_MODE__STRUCT_H_
#define CANDLE_ROS2__SRV__DETAIL__SET_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'device_ids'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'mode'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetMode in the package candle_ros2.
typedef struct candle_ros2__srv__SetMode_Request
{
  /// Device IDs
  rosidl_runtime_c__uint16__Sequence device_ids;
  /// Mode for each device: "IMPEDANCE", "POSITION_PID", "VELOCITY_PID", "RAW_TORQUE"
  rosidl_runtime_c__String__Sequence mode;
} candle_ros2__srv__SetMode_Request;

// Struct for a sequence of candle_ros2__srv__SetMode_Request.
typedef struct candle_ros2__srv__SetMode_Request__Sequence
{
  candle_ros2__srv__SetMode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} candle_ros2__srv__SetMode_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'success'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SetMode in the package candle_ros2.
typedef struct candle_ros2__srv__SetMode_Response
{
  /// Success status for each device
  rosidl_runtime_c__boolean__Sequence success;
} candle_ros2__srv__SetMode_Response;

// Struct for a sequence of candle_ros2__srv__SetMode_Response.
typedef struct candle_ros2__srv__SetMode_Response__Sequence
{
  candle_ros2__srv__SetMode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} candle_ros2__srv__SetMode_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  candle_ros2__srv__SetMode_Event__request__MAX_SIZE = 1
};
// response
enum
{
  candle_ros2__srv__SetMode_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetMode in the package candle_ros2.
typedef struct candle_ros2__srv__SetMode_Event
{
  service_msgs__msg__ServiceEventInfo info;
  candle_ros2__srv__SetMode_Request__Sequence request;
  candle_ros2__srv__SetMode_Response__Sequence response;
} candle_ros2__srv__SetMode_Event;

// Struct for a sequence of candle_ros2__srv__SetMode_Event.
typedef struct candle_ros2__srv__SetMode_Event__Sequence
{
  candle_ros2__srv__SetMode_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} candle_ros2__srv__SetMode_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CANDLE_ROS2__SRV__DETAIL__SET_MODE__STRUCT_H_

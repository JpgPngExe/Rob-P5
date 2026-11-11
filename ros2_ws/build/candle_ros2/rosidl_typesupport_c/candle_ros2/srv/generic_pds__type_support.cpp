// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from candle_ros2:srv/GenericPds.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "candle_ros2/srv/detail/generic_pds__struct.h"
#include "candle_ros2/srv/detail/generic_pds__type_support.h"
#include "candle_ros2/srv/detail/generic_pds__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace candle_ros2
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GenericPds_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GenericPds_Request_type_support_ids_t;

static const _GenericPds_Request_type_support_ids_t _GenericPds_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GenericPds_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GenericPds_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GenericPds_Request_type_support_symbol_names_t _GenericPds_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, candle_ros2, srv, GenericPds_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, candle_ros2, srv, GenericPds_Request)),
  }
};

typedef struct _GenericPds_Request_type_support_data_t
{
  void * data[2];
} _GenericPds_Request_type_support_data_t;

static _GenericPds_Request_type_support_data_t _GenericPds_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GenericPds_Request_message_typesupport_map = {
  2,
  "candle_ros2",
  &_GenericPds_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GenericPds_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GenericPds_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GenericPds_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GenericPds_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &candle_ros2__srv__GenericPds_Request__get_type_hash,
  &candle_ros2__srv__GenericPds_Request__get_type_description,
  &candle_ros2__srv__GenericPds_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace candle_ros2

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, candle_ros2, srv, GenericPds_Request)() {
  return &::candle_ros2::srv::rosidl_typesupport_c::GenericPds_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "candle_ros2/srv/detail/generic_pds__struct.h"
// already included above
// #include "candle_ros2/srv/detail/generic_pds__type_support.h"
// already included above
// #include "candle_ros2/srv/detail/generic_pds__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace candle_ros2
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GenericPds_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GenericPds_Response_type_support_ids_t;

static const _GenericPds_Response_type_support_ids_t _GenericPds_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GenericPds_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GenericPds_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GenericPds_Response_type_support_symbol_names_t _GenericPds_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, candle_ros2, srv, GenericPds_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, candle_ros2, srv, GenericPds_Response)),
  }
};

typedef struct _GenericPds_Response_type_support_data_t
{
  void * data[2];
} _GenericPds_Response_type_support_data_t;

static _GenericPds_Response_type_support_data_t _GenericPds_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GenericPds_Response_message_typesupport_map = {
  2,
  "candle_ros2",
  &_GenericPds_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GenericPds_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GenericPds_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GenericPds_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GenericPds_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &candle_ros2__srv__GenericPds_Response__get_type_hash,
  &candle_ros2__srv__GenericPds_Response__get_type_description,
  &candle_ros2__srv__GenericPds_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace candle_ros2

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, candle_ros2, srv, GenericPds_Response)() {
  return &::candle_ros2::srv::rosidl_typesupport_c::GenericPds_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "candle_ros2/srv/detail/generic_pds__struct.h"
// already included above
// #include "candle_ros2/srv/detail/generic_pds__type_support.h"
// already included above
// #include "candle_ros2/srv/detail/generic_pds__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace candle_ros2
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GenericPds_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GenericPds_Event_type_support_ids_t;

static const _GenericPds_Event_type_support_ids_t _GenericPds_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GenericPds_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GenericPds_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GenericPds_Event_type_support_symbol_names_t _GenericPds_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, candle_ros2, srv, GenericPds_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, candle_ros2, srv, GenericPds_Event)),
  }
};

typedef struct _GenericPds_Event_type_support_data_t
{
  void * data[2];
} _GenericPds_Event_type_support_data_t;

static _GenericPds_Event_type_support_data_t _GenericPds_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GenericPds_Event_message_typesupport_map = {
  2,
  "candle_ros2",
  &_GenericPds_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GenericPds_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GenericPds_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GenericPds_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GenericPds_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &candle_ros2__srv__GenericPds_Event__get_type_hash,
  &candle_ros2__srv__GenericPds_Event__get_type_description,
  &candle_ros2__srv__GenericPds_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace candle_ros2

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, candle_ros2, srv, GenericPds_Event)() {
  return &::candle_ros2::srv::rosidl_typesupport_c::GenericPds_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "candle_ros2/srv/detail/generic_pds__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace candle_ros2
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _GenericPds_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GenericPds_type_support_ids_t;

static const _GenericPds_type_support_ids_t _GenericPds_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GenericPds_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GenericPds_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GenericPds_type_support_symbol_names_t _GenericPds_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, candle_ros2, srv, GenericPds)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, candle_ros2, srv, GenericPds)),
  }
};

typedef struct _GenericPds_type_support_data_t
{
  void * data[2];
} _GenericPds_type_support_data_t;

static _GenericPds_type_support_data_t _GenericPds_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GenericPds_service_typesupport_map = {
  2,
  "candle_ros2",
  &_GenericPds_service_typesupport_ids.typesupport_identifier[0],
  &_GenericPds_service_typesupport_symbol_names.symbol_name[0],
  &_GenericPds_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GenericPds_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GenericPds_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &GenericPds_Request_message_type_support_handle,
  &GenericPds_Response_message_type_support_handle,
  &GenericPds_Event_message_type_support_handle,
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

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace candle_ros2

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, candle_ros2, srv, GenericPds)() {
  return &::candle_ros2::srv::rosidl_typesupport_c::GenericPds_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

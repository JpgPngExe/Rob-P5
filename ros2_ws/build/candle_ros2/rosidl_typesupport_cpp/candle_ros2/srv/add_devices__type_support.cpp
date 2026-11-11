// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from candle_ros2:srv/AddDevices.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "candle_ros2/srv/detail/add_devices__functions.h"
#include "candle_ros2/srv/detail/add_devices__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace candle_ros2
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _AddDevices_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AddDevices_Request_type_support_ids_t;

static const _AddDevices_Request_type_support_ids_t _AddDevices_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AddDevices_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AddDevices_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AddDevices_Request_type_support_symbol_names_t _AddDevices_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, candle_ros2, srv, AddDevices_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, candle_ros2, srv, AddDevices_Request)),
  }
};

typedef struct _AddDevices_Request_type_support_data_t
{
  void * data[2];
} _AddDevices_Request_type_support_data_t;

static _AddDevices_Request_type_support_data_t _AddDevices_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AddDevices_Request_message_typesupport_map = {
  2,
  "candle_ros2",
  &_AddDevices_Request_message_typesupport_ids.typesupport_identifier[0],
  &_AddDevices_Request_message_typesupport_symbol_names.symbol_name[0],
  &_AddDevices_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AddDevices_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddDevices_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &candle_ros2__srv__AddDevices_Request__get_type_hash,
  &candle_ros2__srv__AddDevices_Request__get_type_description,
  &candle_ros2__srv__AddDevices_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace candle_ros2

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<candle_ros2::srv::AddDevices_Request>()
{
  return &::candle_ros2::srv::rosidl_typesupport_cpp::AddDevices_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, candle_ros2, srv, AddDevices_Request)() {
  return get_message_type_support_handle<candle_ros2::srv::AddDevices_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "candle_ros2/srv/detail/add_devices__functions.h"
// already included above
// #include "candle_ros2/srv/detail/add_devices__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace candle_ros2
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _AddDevices_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AddDevices_Response_type_support_ids_t;

static const _AddDevices_Response_type_support_ids_t _AddDevices_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AddDevices_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AddDevices_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AddDevices_Response_type_support_symbol_names_t _AddDevices_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, candle_ros2, srv, AddDevices_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, candle_ros2, srv, AddDevices_Response)),
  }
};

typedef struct _AddDevices_Response_type_support_data_t
{
  void * data[2];
} _AddDevices_Response_type_support_data_t;

static _AddDevices_Response_type_support_data_t _AddDevices_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AddDevices_Response_message_typesupport_map = {
  2,
  "candle_ros2",
  &_AddDevices_Response_message_typesupport_ids.typesupport_identifier[0],
  &_AddDevices_Response_message_typesupport_symbol_names.symbol_name[0],
  &_AddDevices_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AddDevices_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddDevices_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &candle_ros2__srv__AddDevices_Response__get_type_hash,
  &candle_ros2__srv__AddDevices_Response__get_type_description,
  &candle_ros2__srv__AddDevices_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace candle_ros2

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<candle_ros2::srv::AddDevices_Response>()
{
  return &::candle_ros2::srv::rosidl_typesupport_cpp::AddDevices_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, candle_ros2, srv, AddDevices_Response)() {
  return get_message_type_support_handle<candle_ros2::srv::AddDevices_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "candle_ros2/srv/detail/add_devices__functions.h"
// already included above
// #include "candle_ros2/srv/detail/add_devices__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace candle_ros2
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _AddDevices_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AddDevices_Event_type_support_ids_t;

static const _AddDevices_Event_type_support_ids_t _AddDevices_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AddDevices_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AddDevices_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AddDevices_Event_type_support_symbol_names_t _AddDevices_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, candle_ros2, srv, AddDevices_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, candle_ros2, srv, AddDevices_Event)),
  }
};

typedef struct _AddDevices_Event_type_support_data_t
{
  void * data[2];
} _AddDevices_Event_type_support_data_t;

static _AddDevices_Event_type_support_data_t _AddDevices_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AddDevices_Event_message_typesupport_map = {
  2,
  "candle_ros2",
  &_AddDevices_Event_message_typesupport_ids.typesupport_identifier[0],
  &_AddDevices_Event_message_typesupport_symbol_names.symbol_name[0],
  &_AddDevices_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AddDevices_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddDevices_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &candle_ros2__srv__AddDevices_Event__get_type_hash,
  &candle_ros2__srv__AddDevices_Event__get_type_description,
  &candle_ros2__srv__AddDevices_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace candle_ros2

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<candle_ros2::srv::AddDevices_Event>()
{
  return &::candle_ros2::srv::rosidl_typesupport_cpp::AddDevices_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, candle_ros2, srv, AddDevices_Event)() {
  return get_message_type_support_handle<candle_ros2::srv::AddDevices_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "candle_ros2/srv/detail/add_devices__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace candle_ros2
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _AddDevices_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AddDevices_type_support_ids_t;

static const _AddDevices_type_support_ids_t _AddDevices_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AddDevices_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AddDevices_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AddDevices_type_support_symbol_names_t _AddDevices_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, candle_ros2, srv, AddDevices)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, candle_ros2, srv, AddDevices)),
  }
};

typedef struct _AddDevices_type_support_data_t
{
  void * data[2];
} _AddDevices_type_support_data_t;

static _AddDevices_type_support_data_t _AddDevices_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AddDevices_service_typesupport_map = {
  2,
  "candle_ros2",
  &_AddDevices_service_typesupport_ids.typesupport_identifier[0],
  &_AddDevices_service_typesupport_symbol_names.symbol_name[0],
  &_AddDevices_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t AddDevices_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddDevices_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<candle_ros2::srv::AddDevices_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<candle_ros2::srv::AddDevices_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<candle_ros2::srv::AddDevices_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<candle_ros2::srv::AddDevices>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<candle_ros2::srv::AddDevices>,
  &candle_ros2__srv__AddDevices__get_type_hash,
  &candle_ros2__srv__AddDevices__get_type_description,
  &candle_ros2__srv__AddDevices__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace candle_ros2

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<candle_ros2::srv::AddDevices>()
{
  return &::candle_ros2::srv::rosidl_typesupport_cpp::AddDevices_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, candle_ros2, srv, AddDevices)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<candle_ros2::srv::AddDevices>();
}

#ifdef __cplusplus
}
#endif

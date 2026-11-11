// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from candle_ros2:srv/SetLimits.idl
// generated code does not contain a copyright notice

#include "candle_ros2/srv/detail/set_limits__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
const rosidl_type_hash_t *
candle_ros2__srv__SetLimits__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xde, 0x4e, 0x37, 0x3b, 0xec, 0x95, 0xfc, 0x88,
      0xbf, 0x2e, 0xfe, 0x4c, 0xcc, 0x96, 0x01, 0x17,
      0xf7, 0x46, 0x21, 0x7e, 0x7a, 0x5d, 0xe8, 0xdf,
      0xc7, 0x30, 0xd9, 0x53, 0x1c, 0x7f, 0x95, 0xa0,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
const rosidl_type_hash_t *
candle_ros2__srv__SetLimits_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x54, 0xa6, 0x22, 0xc2, 0x61, 0x81, 0xef, 0xe9,
      0xc6, 0x50, 0x71, 0x60, 0x68, 0x05, 0x2c, 0x68,
      0xc5, 0xf4, 0xcb, 0xb9, 0x34, 0xe3, 0xe7, 0x4c,
      0xfe, 0xb7, 0x5f, 0x0c, 0x9f, 0xa7, 0x2e, 0x31,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
const rosidl_type_hash_t *
candle_ros2__srv__SetLimits_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdb, 0x00, 0x4a, 0x35, 0xd8, 0x23, 0x1d, 0x47,
      0x3a, 0x3a, 0xfb, 0xde, 0x3a, 0x05, 0xf8, 0x22,
      0x3b, 0x11, 0xa7, 0x7b, 0xcc, 0xf4, 0xcc, 0xd1,
      0x44, 0x08, 0xf7, 0xe6, 0x4d, 0xf9, 0xc8, 0x6f,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
const rosidl_type_hash_t *
candle_ros2__srv__SetLimits_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x68, 0x66, 0xc2, 0xe0, 0x7d, 0x3d, 0x04, 0xe6,
      0x22, 0x2d, 0x9a, 0x37, 0x62, 0x74, 0x54, 0xfa,
      0x7b, 0xc0, 0xf5, 0xff, 0xfa, 0x2f, 0xb7, 0xdf,
      0x0a, 0xa3, 0x32, 0x70, 0x5b, 0x19, 0x4c, 0x87,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char candle_ros2__srv__SetLimits__TYPE_NAME[] = "candle_ros2/srv/SetLimits";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char candle_ros2__srv__SetLimits_Event__TYPE_NAME[] = "candle_ros2/srv/SetLimits_Event";
static char candle_ros2__srv__SetLimits_Request__TYPE_NAME[] = "candle_ros2/srv/SetLimits_Request";
static char candle_ros2__srv__SetLimits_Response__TYPE_NAME[] = "candle_ros2/srv/SetLimits_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char candle_ros2__srv__SetLimits__FIELD_NAME__request_message[] = "request_message";
static char candle_ros2__srv__SetLimits__FIELD_NAME__response_message[] = "response_message";
static char candle_ros2__srv__SetLimits__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field candle_ros2__srv__SetLimits__FIELDS[] = {
  {
    {candle_ros2__srv__SetLimits__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {candle_ros2__srv__SetLimits_Request__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {candle_ros2__srv__SetLimits__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {candle_ros2__srv__SetLimits_Response__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {candle_ros2__srv__SetLimits__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {candle_ros2__srv__SetLimits_Event__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription candle_ros2__srv__SetLimits__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {candle_ros2__srv__SetLimits_Event__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {candle_ros2__srv__SetLimits_Request__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {candle_ros2__srv__SetLimits_Response__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
candle_ros2__srv__SetLimits__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {candle_ros2__srv__SetLimits__TYPE_NAME, 25, 25},
      {candle_ros2__srv__SetLimits__FIELDS, 3, 3},
    },
    {candle_ros2__srv__SetLimits__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = candle_ros2__srv__SetLimits_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = candle_ros2__srv__SetLimits_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = candle_ros2__srv__SetLimits_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char candle_ros2__srv__SetLimits_Request__FIELD_NAME__device_ids[] = "device_ids";
static char candle_ros2__srv__SetLimits_Request__FIELD_NAME__velocity_limit[] = "velocity_limit";
static char candle_ros2__srv__SetLimits_Request__FIELD_NAME__torque_limit[] = "torque_limit";

static rosidl_runtime_c__type_description__Field candle_ros2__srv__SetLimits_Request__FIELDS[] = {
  {
    {candle_ros2__srv__SetLimits_Request__FIELD_NAME__device_ids, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {candle_ros2__srv__SetLimits_Request__FIELD_NAME__velocity_limit, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {candle_ros2__srv__SetLimits_Request__FIELD_NAME__torque_limit, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
candle_ros2__srv__SetLimits_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {candle_ros2__srv__SetLimits_Request__TYPE_NAME, 33, 33},
      {candle_ros2__srv__SetLimits_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char candle_ros2__srv__SetLimits_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field candle_ros2__srv__SetLimits_Response__FIELDS[] = {
  {
    {candle_ros2__srv__SetLimits_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
candle_ros2__srv__SetLimits_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {candle_ros2__srv__SetLimits_Response__TYPE_NAME, 34, 34},
      {candle_ros2__srv__SetLimits_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char candle_ros2__srv__SetLimits_Event__FIELD_NAME__info[] = "info";
static char candle_ros2__srv__SetLimits_Event__FIELD_NAME__request[] = "request";
static char candle_ros2__srv__SetLimits_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field candle_ros2__srv__SetLimits_Event__FIELDS[] = {
  {
    {candle_ros2__srv__SetLimits_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {candle_ros2__srv__SetLimits_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {candle_ros2__srv__SetLimits_Request__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {candle_ros2__srv__SetLimits_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {candle_ros2__srv__SetLimits_Response__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription candle_ros2__srv__SetLimits_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {candle_ros2__srv__SetLimits_Request__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {candle_ros2__srv__SetLimits_Response__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
candle_ros2__srv__SetLimits_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {candle_ros2__srv__SetLimits_Event__TYPE_NAME, 31, 31},
      {candle_ros2__srv__SetLimits_Event__FIELDS, 3, 3},
    },
    {candle_ros2__srv__SetLimits_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = candle_ros2__srv__SetLimits_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = candle_ros2__srv__SetLimits_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Service sets limits for MD devices\n"
  "\n"
  "uint16[] device_ids         # Device IDs\n"
  "float32[] velocity_limit    # Velocity limit for each device [rad/s]\n"
  "float32[] torque_limit      # Torque limit for each device [Nm]\n"
  "---\n"
  "bool[] success              # Success status for each device";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
candle_ros2__srv__SetLimits__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {candle_ros2__srv__SetLimits__TYPE_NAME, 25, 25},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 277, 277},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
candle_ros2__srv__SetLimits_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {candle_ros2__srv__SetLimits_Request__TYPE_NAME, 33, 33},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
candle_ros2__srv__SetLimits_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {candle_ros2__srv__SetLimits_Response__TYPE_NAME, 34, 34},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
candle_ros2__srv__SetLimits_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {candle_ros2__srv__SetLimits_Event__TYPE_NAME, 31, 31},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
candle_ros2__srv__SetLimits__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *candle_ros2__srv__SetLimits__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *candle_ros2__srv__SetLimits_Event__get_individual_type_description_source(NULL);
    sources[3] = *candle_ros2__srv__SetLimits_Request__get_individual_type_description_source(NULL);
    sources[4] = *candle_ros2__srv__SetLimits_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
candle_ros2__srv__SetLimits_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *candle_ros2__srv__SetLimits_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
candle_ros2__srv__SetLimits_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *candle_ros2__srv__SetLimits_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
candle_ros2__srv__SetLimits_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *candle_ros2__srv__SetLimits_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *candle_ros2__srv__SetLimits_Request__get_individual_type_description_source(NULL);
    sources[3] = *candle_ros2__srv__SetLimits_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

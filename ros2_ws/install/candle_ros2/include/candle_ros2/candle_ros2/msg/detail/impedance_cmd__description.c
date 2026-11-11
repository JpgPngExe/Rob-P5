// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from candle_ros2:msg/ImpedanceCmd.idl
// generated code does not contain a copyright notice

#include "candle_ros2/msg/detail/impedance_cmd__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
const rosidl_type_hash_t *
candle_ros2__msg__ImpedanceCmd__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x50, 0xf0, 0x9d, 0x2a, 0xca, 0x17, 0x1b, 0xba,
      0xd9, 0xb8, 0xe0, 0xc9, 0x0f, 0xea, 0xe4, 0x87,
      0xe5, 0x15, 0x98, 0xa9, 0x93, 0x1c, 0x2d, 0x5e,
      0x0a, 0x5f, 0xd0, 0x5a, 0x1f, 0x94, 0x4a, 0x04,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char candle_ros2__msg__ImpedanceCmd__TYPE_NAME[] = "candle_ros2/msg/ImpedanceCmd";

// Define type names, field names, and default values
static char candle_ros2__msg__ImpedanceCmd__FIELD_NAME__device_ids[] = "device_ids";
static char candle_ros2__msg__ImpedanceCmd__FIELD_NAME__kp[] = "kp";
static char candle_ros2__msg__ImpedanceCmd__FIELD_NAME__kd[] = "kd";
static char candle_ros2__msg__ImpedanceCmd__FIELD_NAME__max_output[] = "max_output";

static rosidl_runtime_c__type_description__Field candle_ros2__msg__ImpedanceCmd__FIELDS[] = {
  {
    {candle_ros2__msg__ImpedanceCmd__FIELD_NAME__device_ids, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {candle_ros2__msg__ImpedanceCmd__FIELD_NAME__kp, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {candle_ros2__msg__ImpedanceCmd__FIELD_NAME__kd, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {candle_ros2__msg__ImpedanceCmd__FIELD_NAME__max_output, 10, 10},
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
candle_ros2__msg__ImpedanceCmd__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {candle_ros2__msg__ImpedanceCmd__TYPE_NAME, 28, 28},
      {candle_ros2__msg__ImpedanceCmd__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Message holds impedance PD controller parameters for MD controllers\n"
  "\n"
  "uint16[] device_ids # Device IDs\n"
  "float32[] kp\n"
  "float32[] kd\n"
  "float32[] max_output";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
candle_ros2__msg__ImpedanceCmd__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {candle_ros2__msg__ImpedanceCmd__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 151, 151},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
candle_ros2__msg__ImpedanceCmd__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *candle_ros2__msg__ImpedanceCmd__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

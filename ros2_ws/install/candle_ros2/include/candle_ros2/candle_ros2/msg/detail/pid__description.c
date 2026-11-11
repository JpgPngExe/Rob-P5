// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from candle_ros2:msg/Pid.idl
// generated code does not contain a copyright notice

#include "candle_ros2/msg/detail/pid__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
const rosidl_type_hash_t *
candle_ros2__msg__Pid__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8e, 0x0c, 0x55, 0xf1, 0x6a, 0xb8, 0xab, 0x1d,
      0x42, 0xfe, 0xb5, 0x01, 0xf0, 0xa1, 0xfd, 0xaf,
      0x38, 0x94, 0x73, 0x08, 0x81, 0xa8, 0xa1, 0xfe,
      0x9f, 0x19, 0x8d, 0xbc, 0xb2, 0x52, 0x9e, 0x31,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char candle_ros2__msg__Pid__TYPE_NAME[] = "candle_ros2/msg/Pid";

// Define type names, field names, and default values
static char candle_ros2__msg__Pid__FIELD_NAME__kp[] = "kp";
static char candle_ros2__msg__Pid__FIELD_NAME__ki[] = "ki";
static char candle_ros2__msg__Pid__FIELD_NAME__kd[] = "kd";
static char candle_ros2__msg__Pid__FIELD_NAME__i_windup[] = "i_windup";
static char candle_ros2__msg__Pid__FIELD_NAME__max_output[] = "max_output";

static rosidl_runtime_c__type_description__Field candle_ros2__msg__Pid__FIELDS[] = {
  {
    {candle_ros2__msg__Pid__FIELD_NAME__kp, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {candle_ros2__msg__Pid__FIELD_NAME__ki, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {candle_ros2__msg__Pid__FIELD_NAME__kd, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {candle_ros2__msg__Pid__FIELD_NAME__i_windup, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {candle_ros2__msg__Pid__FIELD_NAME__max_output, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
candle_ros2__msg__Pid__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {candle_ros2__msg__Pid__TYPE_NAME, 19, 19},
      {candle_ros2__msg__Pid__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Message holds PID controller parameters\n"
  "\n"
  "float32 kp\n"
  "float32 ki\n"
  "float32 kd\n"
  "float32 i_windup\n"
  "float32 max_output";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
candle_ros2__msg__Pid__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {candle_ros2__msg__Pid__TYPE_NAME, 19, 19},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 112, 112},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
candle_ros2__msg__Pid__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *candle_ros2__msg__Pid__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

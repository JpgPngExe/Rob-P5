// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from candle_ros2:msg/MotionCmd.idl
// generated code does not contain a copyright notice

#include "candle_ros2/msg/detail/motion_cmd__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
const rosidl_type_hash_t *
candle_ros2__msg__MotionCmd__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x31, 0xf2, 0x43, 0x9c, 0xbe, 0x68, 0x03, 0xb4,
      0x4f, 0xa6, 0xe9, 0x4f, 0xa0, 0xfc, 0xa0, 0x7d,
      0x76, 0xd0, 0x1f, 0xaa, 0xc6, 0x29, 0x79, 0x63,
      0x21, 0xfb, 0xc3, 0x18, 0x2b, 0xdd, 0xb4, 0x20,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char candle_ros2__msg__MotionCmd__TYPE_NAME[] = "candle_ros2/msg/MotionCmd";

// Define type names, field names, and default values
static char candle_ros2__msg__MotionCmd__FIELD_NAME__device_ids[] = "device_ids";
static char candle_ros2__msg__MotionCmd__FIELD_NAME__target_position[] = "target_position";
static char candle_ros2__msg__MotionCmd__FIELD_NAME__target_velocity[] = "target_velocity";
static char candle_ros2__msg__MotionCmd__FIELD_NAME__target_torque[] = "target_torque";

static rosidl_runtime_c__type_description__Field candle_ros2__msg__MotionCmd__FIELDS[] = {
  {
    {candle_ros2__msg__MotionCmd__FIELD_NAME__device_ids, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {candle_ros2__msg__MotionCmd__FIELD_NAME__target_position, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {candle_ros2__msg__MotionCmd__FIELD_NAME__target_velocity, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {candle_ros2__msg__MotionCmd__FIELD_NAME__target_torque, 13, 13},
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
candle_ros2__msg__MotionCmd__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {candle_ros2__msg__MotionCmd__TYPE_NAME, 25, 25},
      {candle_ros2__msg__MotionCmd__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Message holds motion targets for MD devices\n"
  "\n"
  "uint32[] device_ids         # Device IDs\n"
  "float32[] target_position   # Target positions [rad]\n"
  "float32[] target_velocity   # Target velocities [rad/s]\n"
  "float32[] target_torque     # Target torques [Nm]";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
candle_ros2__msg__MotionCmd__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {candle_ros2__msg__MotionCmd__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 247, 247},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
candle_ros2__msg__MotionCmd__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *candle_ros2__msg__MotionCmd__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

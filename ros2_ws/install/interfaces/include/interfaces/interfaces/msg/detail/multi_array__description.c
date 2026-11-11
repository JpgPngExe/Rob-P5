// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interfaces:msg/MultiArray.idl
// generated code does not contain a copyright notice

#include "interfaces/msg/detail/multi_array__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__msg__MultiArray__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x87, 0xfd, 0xd5, 0x35, 0x9c, 0x10, 0xfc, 0x00,
      0xd2, 0x93, 0x84, 0x44, 0x8b, 0x76, 0x1f, 0x96,
      0xf2, 0x3e, 0x94, 0x97, 0xfd, 0x33, 0x0b, 0x9f,
      0xe9, 0x19, 0xe9, 0x93, 0xeb, 0x2e, 0x1f, 0x88,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char interfaces__msg__MultiArray__TYPE_NAME[] = "interfaces/msg/MultiArray";

// Define type names, field names, and default values
static char interfaces__msg__MultiArray__FIELD_NAME__rows[] = "rows";
static char interfaces__msg__MultiArray__FIELD_NAME__cols[] = "cols";
static char interfaces__msg__MultiArray__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field interfaces__msg__MultiArray__FIELDS[] = {
  {
    {interfaces__msg__MultiArray__FIELD_NAME__rows, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__MultiArray__FIELD_NAME__cols, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {interfaces__msg__MultiArray__FIELD_NAME__data, 4, 4},
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
interfaces__msg__MultiArray__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__msg__MultiArray__TYPE_NAME, 25, 25},
      {interfaces__msg__MultiArray__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 rows\n"
  "float32 cols\n"
  "float32[] data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interfaces__msg__MultiArray__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__msg__MultiArray__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 41, 41},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__msg__MultiArray__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__msg__MultiArray__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

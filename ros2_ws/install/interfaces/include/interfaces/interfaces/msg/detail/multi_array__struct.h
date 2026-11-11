// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/MultiArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/multi_array.h"


#ifndef INTERFACES__MSG__DETAIL__MULTI_ARRAY__STRUCT_H_
#define INTERFACES__MSG__DETAIL__MULTI_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/MultiArray in the package interfaces.
typedef struct interfaces__msg__MultiArray
{
  uint32_t rows;
  uint32_t cols;
  rosidl_runtime_c__float__Sequence data;
} interfaces__msg__MultiArray;

// Struct for a sequence of interfaces__msg__MultiArray.
typedef struct interfaces__msg__MultiArray__Sequence
{
  interfaces__msg__MultiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__MultiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__MULTI_ARRAY__STRUCT_H_

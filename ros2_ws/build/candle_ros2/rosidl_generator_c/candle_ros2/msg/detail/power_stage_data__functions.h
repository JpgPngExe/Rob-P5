// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from candle_ros2:msg/PowerStageData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/msg/power_stage_data.h"


#ifndef CANDLE_ROS2__MSG__DETAIL__POWER_STAGE_DATA__FUNCTIONS_H_
#define CANDLE_ROS2__MSG__DETAIL__POWER_STAGE_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "candle_ros2/msg/rosidl_generator_c__visibility_control.h"

#include "candle_ros2/msg/detail/power_stage_data__struct.h"

/// Initialize msg/PowerStageData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * candle_ros2__msg__PowerStageData
 * )) before or use
 * candle_ros2__msg__PowerStageData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
bool
candle_ros2__msg__PowerStageData__init(candle_ros2__msg__PowerStageData * msg);

/// Finalize msg/PowerStageData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
void
candle_ros2__msg__PowerStageData__fini(candle_ros2__msg__PowerStageData * msg);

/// Create msg/PowerStageData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * candle_ros2__msg__PowerStageData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
candle_ros2__msg__PowerStageData *
candle_ros2__msg__PowerStageData__create(void);

/// Destroy msg/PowerStageData message.
/**
 * It calls
 * candle_ros2__msg__PowerStageData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
void
candle_ros2__msg__PowerStageData__destroy(candle_ros2__msg__PowerStageData * msg);

/// Check for msg/PowerStageData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
bool
candle_ros2__msg__PowerStageData__are_equal(const candle_ros2__msg__PowerStageData * lhs, const candle_ros2__msg__PowerStageData * rhs);

/// Copy a msg/PowerStageData message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
bool
candle_ros2__msg__PowerStageData__copy(
  const candle_ros2__msg__PowerStageData * input,
  candle_ros2__msg__PowerStageData * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
const rosidl_type_hash_t *
candle_ros2__msg__PowerStageData__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
const rosidl_runtime_c__type_description__TypeDescription *
candle_ros2__msg__PowerStageData__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
const rosidl_runtime_c__type_description__TypeSource *
candle_ros2__msg__PowerStageData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
const rosidl_runtime_c__type_description__TypeSource__Sequence *
candle_ros2__msg__PowerStageData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/PowerStageData messages.
/**
 * It allocates the memory for the number of elements and calls
 * candle_ros2__msg__PowerStageData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
bool
candle_ros2__msg__PowerStageData__Sequence__init(candle_ros2__msg__PowerStageData__Sequence * array, size_t size);

/// Finalize array of msg/PowerStageData messages.
/**
 * It calls
 * candle_ros2__msg__PowerStageData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
void
candle_ros2__msg__PowerStageData__Sequence__fini(candle_ros2__msg__PowerStageData__Sequence * array);

/// Create array of msg/PowerStageData messages.
/**
 * It allocates the memory for the array and calls
 * candle_ros2__msg__PowerStageData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
candle_ros2__msg__PowerStageData__Sequence *
candle_ros2__msg__PowerStageData__Sequence__create(size_t size);

/// Destroy array of msg/PowerStageData messages.
/**
 * It calls
 * candle_ros2__msg__PowerStageData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
void
candle_ros2__msg__PowerStageData__Sequence__destroy(candle_ros2__msg__PowerStageData__Sequence * array);

/// Check for msg/PowerStageData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
bool
candle_ros2__msg__PowerStageData__Sequence__are_equal(const candle_ros2__msg__PowerStageData__Sequence * lhs, const candle_ros2__msg__PowerStageData__Sequence * rhs);

/// Copy an array of msg/PowerStageData messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
bool
candle_ros2__msg__PowerStageData__Sequence__copy(
  const candle_ros2__msg__PowerStageData__Sequence * input,
  candle_ros2__msg__PowerStageData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CANDLE_ROS2__MSG__DETAIL__POWER_STAGE_DATA__FUNCTIONS_H_

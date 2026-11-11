// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from candle_ros2:srv/SetLimits.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/srv/set_limits.h"


#ifndef CANDLE_ROS2__SRV__DETAIL__SET_LIMITS__FUNCTIONS_H_
#define CANDLE_ROS2__SRV__DETAIL__SET_LIMITS__FUNCTIONS_H_

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

#include "candle_ros2/srv/detail/set_limits__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
const rosidl_type_hash_t *
candle_ros2__srv__SetLimits__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
const rosidl_runtime_c__type_description__TypeDescription *
candle_ros2__srv__SetLimits__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
const rosidl_runtime_c__type_description__TypeSource *
candle_ros2__srv__SetLimits__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
const rosidl_runtime_c__type_description__TypeSource__Sequence *
candle_ros2__srv__SetLimits__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/SetLimits message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * candle_ros2__srv__SetLimits_Request
 * )) before or use
 * candle_ros2__srv__SetLimits_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
bool
candle_ros2__srv__SetLimits_Request__init(candle_ros2__srv__SetLimits_Request * msg);

/// Finalize srv/SetLimits message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
void
candle_ros2__srv__SetLimits_Request__fini(candle_ros2__srv__SetLimits_Request * msg);

/// Create srv/SetLimits message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * candle_ros2__srv__SetLimits_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
candle_ros2__srv__SetLimits_Request *
candle_ros2__srv__SetLimits_Request__create(void);

/// Destroy srv/SetLimits message.
/**
 * It calls
 * candle_ros2__srv__SetLimits_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
void
candle_ros2__srv__SetLimits_Request__destroy(candle_ros2__srv__SetLimits_Request * msg);

/// Check for srv/SetLimits message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
bool
candle_ros2__srv__SetLimits_Request__are_equal(const candle_ros2__srv__SetLimits_Request * lhs, const candle_ros2__srv__SetLimits_Request * rhs);

/// Copy a srv/SetLimits message.
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
candle_ros2__srv__SetLimits_Request__copy(
  const candle_ros2__srv__SetLimits_Request * input,
  candle_ros2__srv__SetLimits_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
const rosidl_type_hash_t *
candle_ros2__srv__SetLimits_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
const rosidl_runtime_c__type_description__TypeDescription *
candle_ros2__srv__SetLimits_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
const rosidl_runtime_c__type_description__TypeSource *
candle_ros2__srv__SetLimits_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
const rosidl_runtime_c__type_description__TypeSource__Sequence *
candle_ros2__srv__SetLimits_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SetLimits messages.
/**
 * It allocates the memory for the number of elements and calls
 * candle_ros2__srv__SetLimits_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
bool
candle_ros2__srv__SetLimits_Request__Sequence__init(candle_ros2__srv__SetLimits_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetLimits messages.
/**
 * It calls
 * candle_ros2__srv__SetLimits_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
void
candle_ros2__srv__SetLimits_Request__Sequence__fini(candle_ros2__srv__SetLimits_Request__Sequence * array);

/// Create array of srv/SetLimits messages.
/**
 * It allocates the memory for the array and calls
 * candle_ros2__srv__SetLimits_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
candle_ros2__srv__SetLimits_Request__Sequence *
candle_ros2__srv__SetLimits_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetLimits messages.
/**
 * It calls
 * candle_ros2__srv__SetLimits_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
void
candle_ros2__srv__SetLimits_Request__Sequence__destroy(candle_ros2__srv__SetLimits_Request__Sequence * array);

/// Check for srv/SetLimits message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
bool
candle_ros2__srv__SetLimits_Request__Sequence__are_equal(const candle_ros2__srv__SetLimits_Request__Sequence * lhs, const candle_ros2__srv__SetLimits_Request__Sequence * rhs);

/// Copy an array of srv/SetLimits messages.
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
candle_ros2__srv__SetLimits_Request__Sequence__copy(
  const candle_ros2__srv__SetLimits_Request__Sequence * input,
  candle_ros2__srv__SetLimits_Request__Sequence * output);

/// Initialize srv/SetLimits message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * candle_ros2__srv__SetLimits_Response
 * )) before or use
 * candle_ros2__srv__SetLimits_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
bool
candle_ros2__srv__SetLimits_Response__init(candle_ros2__srv__SetLimits_Response * msg);

/// Finalize srv/SetLimits message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
void
candle_ros2__srv__SetLimits_Response__fini(candle_ros2__srv__SetLimits_Response * msg);

/// Create srv/SetLimits message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * candle_ros2__srv__SetLimits_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
candle_ros2__srv__SetLimits_Response *
candle_ros2__srv__SetLimits_Response__create(void);

/// Destroy srv/SetLimits message.
/**
 * It calls
 * candle_ros2__srv__SetLimits_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
void
candle_ros2__srv__SetLimits_Response__destroy(candle_ros2__srv__SetLimits_Response * msg);

/// Check for srv/SetLimits message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
bool
candle_ros2__srv__SetLimits_Response__are_equal(const candle_ros2__srv__SetLimits_Response * lhs, const candle_ros2__srv__SetLimits_Response * rhs);

/// Copy a srv/SetLimits message.
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
candle_ros2__srv__SetLimits_Response__copy(
  const candle_ros2__srv__SetLimits_Response * input,
  candle_ros2__srv__SetLimits_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
const rosidl_type_hash_t *
candle_ros2__srv__SetLimits_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
const rosidl_runtime_c__type_description__TypeDescription *
candle_ros2__srv__SetLimits_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
const rosidl_runtime_c__type_description__TypeSource *
candle_ros2__srv__SetLimits_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
const rosidl_runtime_c__type_description__TypeSource__Sequence *
candle_ros2__srv__SetLimits_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SetLimits messages.
/**
 * It allocates the memory for the number of elements and calls
 * candle_ros2__srv__SetLimits_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
bool
candle_ros2__srv__SetLimits_Response__Sequence__init(candle_ros2__srv__SetLimits_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetLimits messages.
/**
 * It calls
 * candle_ros2__srv__SetLimits_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
void
candle_ros2__srv__SetLimits_Response__Sequence__fini(candle_ros2__srv__SetLimits_Response__Sequence * array);

/// Create array of srv/SetLimits messages.
/**
 * It allocates the memory for the array and calls
 * candle_ros2__srv__SetLimits_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
candle_ros2__srv__SetLimits_Response__Sequence *
candle_ros2__srv__SetLimits_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetLimits messages.
/**
 * It calls
 * candle_ros2__srv__SetLimits_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
void
candle_ros2__srv__SetLimits_Response__Sequence__destroy(candle_ros2__srv__SetLimits_Response__Sequence * array);

/// Check for srv/SetLimits message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
bool
candle_ros2__srv__SetLimits_Response__Sequence__are_equal(const candle_ros2__srv__SetLimits_Response__Sequence * lhs, const candle_ros2__srv__SetLimits_Response__Sequence * rhs);

/// Copy an array of srv/SetLimits messages.
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
candle_ros2__srv__SetLimits_Response__Sequence__copy(
  const candle_ros2__srv__SetLimits_Response__Sequence * input,
  candle_ros2__srv__SetLimits_Response__Sequence * output);

/// Initialize srv/SetLimits message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * candle_ros2__srv__SetLimits_Event
 * )) before or use
 * candle_ros2__srv__SetLimits_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
bool
candle_ros2__srv__SetLimits_Event__init(candle_ros2__srv__SetLimits_Event * msg);

/// Finalize srv/SetLimits message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
void
candle_ros2__srv__SetLimits_Event__fini(candle_ros2__srv__SetLimits_Event * msg);

/// Create srv/SetLimits message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * candle_ros2__srv__SetLimits_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
candle_ros2__srv__SetLimits_Event *
candle_ros2__srv__SetLimits_Event__create(void);

/// Destroy srv/SetLimits message.
/**
 * It calls
 * candle_ros2__srv__SetLimits_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
void
candle_ros2__srv__SetLimits_Event__destroy(candle_ros2__srv__SetLimits_Event * msg);

/// Check for srv/SetLimits message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
bool
candle_ros2__srv__SetLimits_Event__are_equal(const candle_ros2__srv__SetLimits_Event * lhs, const candle_ros2__srv__SetLimits_Event * rhs);

/// Copy a srv/SetLimits message.
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
candle_ros2__srv__SetLimits_Event__copy(
  const candle_ros2__srv__SetLimits_Event * input,
  candle_ros2__srv__SetLimits_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
const rosidl_type_hash_t *
candle_ros2__srv__SetLimits_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
const rosidl_runtime_c__type_description__TypeDescription *
candle_ros2__srv__SetLimits_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
const rosidl_runtime_c__type_description__TypeSource *
candle_ros2__srv__SetLimits_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
const rosidl_runtime_c__type_description__TypeSource__Sequence *
candle_ros2__srv__SetLimits_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SetLimits messages.
/**
 * It allocates the memory for the number of elements and calls
 * candle_ros2__srv__SetLimits_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
bool
candle_ros2__srv__SetLimits_Event__Sequence__init(candle_ros2__srv__SetLimits_Event__Sequence * array, size_t size);

/// Finalize array of srv/SetLimits messages.
/**
 * It calls
 * candle_ros2__srv__SetLimits_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
void
candle_ros2__srv__SetLimits_Event__Sequence__fini(candle_ros2__srv__SetLimits_Event__Sequence * array);

/// Create array of srv/SetLimits messages.
/**
 * It allocates the memory for the array and calls
 * candle_ros2__srv__SetLimits_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
candle_ros2__srv__SetLimits_Event__Sequence *
candle_ros2__srv__SetLimits_Event__Sequence__create(size_t size);

/// Destroy array of srv/SetLimits messages.
/**
 * It calls
 * candle_ros2__srv__SetLimits_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
void
candle_ros2__srv__SetLimits_Event__Sequence__destroy(candle_ros2__srv__SetLimits_Event__Sequence * array);

/// Check for srv/SetLimits message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_candle_ros2
bool
candle_ros2__srv__SetLimits_Event__Sequence__are_equal(const candle_ros2__srv__SetLimits_Event__Sequence * lhs, const candle_ros2__srv__SetLimits_Event__Sequence * rhs);

/// Copy an array of srv/SetLimits messages.
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
candle_ros2__srv__SetLimits_Event__Sequence__copy(
  const candle_ros2__srv__SetLimits_Event__Sequence * input,
  candle_ros2__srv__SetLimits_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // CANDLE_ROS2__SRV__DETAIL__SET_LIMITS__FUNCTIONS_H_

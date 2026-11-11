// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from candle_ros2:msg/VelocityPidCmd.idl
// generated code does not contain a copyright notice
#include "candle_ros2/msg/detail/velocity_pid_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `device_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `velocity_pid`
#include "candle_ros2/msg/detail/pid__functions.h"

bool
candle_ros2__msg__VelocityPidCmd__init(candle_ros2__msg__VelocityPidCmd * msg)
{
  if (!msg) {
    return false;
  }
  // device_ids
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->device_ids, 0)) {
    candle_ros2__msg__VelocityPidCmd__fini(msg);
    return false;
  }
  // velocity_pid
  if (!candle_ros2__msg__Pid__Sequence__init(&msg->velocity_pid, 0)) {
    candle_ros2__msg__VelocityPidCmd__fini(msg);
    return false;
  }
  return true;
}

void
candle_ros2__msg__VelocityPidCmd__fini(candle_ros2__msg__VelocityPidCmd * msg)
{
  if (!msg) {
    return;
  }
  // device_ids
  rosidl_runtime_c__uint16__Sequence__fini(&msg->device_ids);
  // velocity_pid
  candle_ros2__msg__Pid__Sequence__fini(&msg->velocity_pid);
}

bool
candle_ros2__msg__VelocityPidCmd__are_equal(const candle_ros2__msg__VelocityPidCmd * lhs, const candle_ros2__msg__VelocityPidCmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // device_ids
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->device_ids), &(rhs->device_ids)))
  {
    return false;
  }
  // velocity_pid
  if (!candle_ros2__msg__Pid__Sequence__are_equal(
      &(lhs->velocity_pid), &(rhs->velocity_pid)))
  {
    return false;
  }
  return true;
}

bool
candle_ros2__msg__VelocityPidCmd__copy(
  const candle_ros2__msg__VelocityPidCmd * input,
  candle_ros2__msg__VelocityPidCmd * output)
{
  if (!input || !output) {
    return false;
  }
  // device_ids
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->device_ids), &(output->device_ids)))
  {
    return false;
  }
  // velocity_pid
  if (!candle_ros2__msg__Pid__Sequence__copy(
      &(input->velocity_pid), &(output->velocity_pid)))
  {
    return false;
  }
  return true;
}

candle_ros2__msg__VelocityPidCmd *
candle_ros2__msg__VelocityPidCmd__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  candle_ros2__msg__VelocityPidCmd * msg = (candle_ros2__msg__VelocityPidCmd *)allocator.allocate(sizeof(candle_ros2__msg__VelocityPidCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(candle_ros2__msg__VelocityPidCmd));
  bool success = candle_ros2__msg__VelocityPidCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
candle_ros2__msg__VelocityPidCmd__destroy(candle_ros2__msg__VelocityPidCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    candle_ros2__msg__VelocityPidCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
candle_ros2__msg__VelocityPidCmd__Sequence__init(candle_ros2__msg__VelocityPidCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  candle_ros2__msg__VelocityPidCmd * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(candle_ros2__msg__VelocityPidCmd)) {
      return false;
    }
    data = (candle_ros2__msg__VelocityPidCmd *)allocator.zero_allocate(size, sizeof(candle_ros2__msg__VelocityPidCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = candle_ros2__msg__VelocityPidCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        candle_ros2__msg__VelocityPidCmd__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
candle_ros2__msg__VelocityPidCmd__Sequence__fini(candle_ros2__msg__VelocityPidCmd__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      candle_ros2__msg__VelocityPidCmd__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

candle_ros2__msg__VelocityPidCmd__Sequence *
candle_ros2__msg__VelocityPidCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  candle_ros2__msg__VelocityPidCmd__Sequence * array = (candle_ros2__msg__VelocityPidCmd__Sequence *)allocator.allocate(sizeof(candle_ros2__msg__VelocityPidCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = candle_ros2__msg__VelocityPidCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
candle_ros2__msg__VelocityPidCmd__Sequence__destroy(candle_ros2__msg__VelocityPidCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    candle_ros2__msg__VelocityPidCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
candle_ros2__msg__VelocityPidCmd__Sequence__are_equal(const candle_ros2__msg__VelocityPidCmd__Sequence * lhs, const candle_ros2__msg__VelocityPidCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!candle_ros2__msg__VelocityPidCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
candle_ros2__msg__VelocityPidCmd__Sequence__copy(
  const candle_ros2__msg__VelocityPidCmd__Sequence * input,
  candle_ros2__msg__VelocityPidCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(candle_ros2__msg__VelocityPidCmd)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(candle_ros2__msg__VelocityPidCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    candle_ros2__msg__VelocityPidCmd * data =
      (candle_ros2__msg__VelocityPidCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!candle_ros2__msg__VelocityPidCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          candle_ros2__msg__VelocityPidCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!candle_ros2__msg__VelocityPidCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

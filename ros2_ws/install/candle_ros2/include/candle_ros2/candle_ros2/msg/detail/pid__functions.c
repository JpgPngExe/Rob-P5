// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from candle_ros2:msg/Pid.idl
// generated code does not contain a copyright notice
#include "candle_ros2/msg/detail/pid__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
candle_ros2__msg__Pid__init(candle_ros2__msg__Pid * msg)
{
  if (!msg) {
    return false;
  }
  // kp
  // ki
  // kd
  // i_windup
  // max_output
  return true;
}

void
candle_ros2__msg__Pid__fini(candle_ros2__msg__Pid * msg)
{
  if (!msg) {
    return;
  }
  // kp
  // ki
  // kd
  // i_windup
  // max_output
}

bool
candle_ros2__msg__Pid__are_equal(const candle_ros2__msg__Pid * lhs, const candle_ros2__msg__Pid * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // kp
  if (lhs->kp != rhs->kp) {
    return false;
  }
  // ki
  if (lhs->ki != rhs->ki) {
    return false;
  }
  // kd
  if (lhs->kd != rhs->kd) {
    return false;
  }
  // i_windup
  if (lhs->i_windup != rhs->i_windup) {
    return false;
  }
  // max_output
  if (lhs->max_output != rhs->max_output) {
    return false;
  }
  return true;
}

bool
candle_ros2__msg__Pid__copy(
  const candle_ros2__msg__Pid * input,
  candle_ros2__msg__Pid * output)
{
  if (!input || !output) {
    return false;
  }
  // kp
  output->kp = input->kp;
  // ki
  output->ki = input->ki;
  // kd
  output->kd = input->kd;
  // i_windup
  output->i_windup = input->i_windup;
  // max_output
  output->max_output = input->max_output;
  return true;
}

candle_ros2__msg__Pid *
candle_ros2__msg__Pid__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  candle_ros2__msg__Pid * msg = (candle_ros2__msg__Pid *)allocator.allocate(sizeof(candle_ros2__msg__Pid), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(candle_ros2__msg__Pid));
  bool success = candle_ros2__msg__Pid__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
candle_ros2__msg__Pid__destroy(candle_ros2__msg__Pid * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    candle_ros2__msg__Pid__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
candle_ros2__msg__Pid__Sequence__init(candle_ros2__msg__Pid__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  candle_ros2__msg__Pid * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(candle_ros2__msg__Pid)) {
      return false;
    }
    data = (candle_ros2__msg__Pid *)allocator.zero_allocate(size, sizeof(candle_ros2__msg__Pid), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = candle_ros2__msg__Pid__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        candle_ros2__msg__Pid__fini(&data[i - 1]);
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
candle_ros2__msg__Pid__Sequence__fini(candle_ros2__msg__Pid__Sequence * array)
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
      candle_ros2__msg__Pid__fini(&array->data[i]);
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

candle_ros2__msg__Pid__Sequence *
candle_ros2__msg__Pid__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  candle_ros2__msg__Pid__Sequence * array = (candle_ros2__msg__Pid__Sequence *)allocator.allocate(sizeof(candle_ros2__msg__Pid__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = candle_ros2__msg__Pid__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
candle_ros2__msg__Pid__Sequence__destroy(candle_ros2__msg__Pid__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    candle_ros2__msg__Pid__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
candle_ros2__msg__Pid__Sequence__are_equal(const candle_ros2__msg__Pid__Sequence * lhs, const candle_ros2__msg__Pid__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!candle_ros2__msg__Pid__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
candle_ros2__msg__Pid__Sequence__copy(
  const candle_ros2__msg__Pid__Sequence * input,
  candle_ros2__msg__Pid__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(candle_ros2__msg__Pid)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(candle_ros2__msg__Pid);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    candle_ros2__msg__Pid * data =
      (candle_ros2__msg__Pid *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!candle_ros2__msg__Pid__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          candle_ros2__msg__Pid__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!candle_ros2__msg__Pid__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from candle_ros2:msg/BrakeResistorData.idl
// generated code does not contain a copyright notice
#include "candle_ros2/msg/detail/brake_resistor_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
candle_ros2__msg__BrakeResistorData__init(candle_ros2__msg__BrakeResistorData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    candle_ros2__msg__BrakeResistorData__fini(msg);
    return false;
  }
  // enabled
  // temperature
  // temperature_limit
  return true;
}

void
candle_ros2__msg__BrakeResistorData__fini(candle_ros2__msg__BrakeResistorData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // enabled
  // temperature
  // temperature_limit
}

bool
candle_ros2__msg__BrakeResistorData__are_equal(const candle_ros2__msg__BrakeResistorData * lhs, const candle_ros2__msg__BrakeResistorData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // enabled
  if (lhs->enabled != rhs->enabled) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // temperature_limit
  if (lhs->temperature_limit != rhs->temperature_limit) {
    return false;
  }
  return true;
}

bool
candle_ros2__msg__BrakeResistorData__copy(
  const candle_ros2__msg__BrakeResistorData * input,
  candle_ros2__msg__BrakeResistorData * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // enabled
  output->enabled = input->enabled;
  // temperature
  output->temperature = input->temperature;
  // temperature_limit
  output->temperature_limit = input->temperature_limit;
  return true;
}

candle_ros2__msg__BrakeResistorData *
candle_ros2__msg__BrakeResistorData__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  candle_ros2__msg__BrakeResistorData * msg = (candle_ros2__msg__BrakeResistorData *)allocator.allocate(sizeof(candle_ros2__msg__BrakeResistorData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(candle_ros2__msg__BrakeResistorData));
  bool success = candle_ros2__msg__BrakeResistorData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
candle_ros2__msg__BrakeResistorData__destroy(candle_ros2__msg__BrakeResistorData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    candle_ros2__msg__BrakeResistorData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
candle_ros2__msg__BrakeResistorData__Sequence__init(candle_ros2__msg__BrakeResistorData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  candle_ros2__msg__BrakeResistorData * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(candle_ros2__msg__BrakeResistorData)) {
      return false;
    }
    data = (candle_ros2__msg__BrakeResistorData *)allocator.zero_allocate(size, sizeof(candle_ros2__msg__BrakeResistorData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = candle_ros2__msg__BrakeResistorData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        candle_ros2__msg__BrakeResistorData__fini(&data[i - 1]);
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
candle_ros2__msg__BrakeResistorData__Sequence__fini(candle_ros2__msg__BrakeResistorData__Sequence * array)
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
      candle_ros2__msg__BrakeResistorData__fini(&array->data[i]);
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

candle_ros2__msg__BrakeResistorData__Sequence *
candle_ros2__msg__BrakeResistorData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  candle_ros2__msg__BrakeResistorData__Sequence * array = (candle_ros2__msg__BrakeResistorData__Sequence *)allocator.allocate(sizeof(candle_ros2__msg__BrakeResistorData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = candle_ros2__msg__BrakeResistorData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
candle_ros2__msg__BrakeResistorData__Sequence__destroy(candle_ros2__msg__BrakeResistorData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    candle_ros2__msg__BrakeResistorData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
candle_ros2__msg__BrakeResistorData__Sequence__are_equal(const candle_ros2__msg__BrakeResistorData__Sequence * lhs, const candle_ros2__msg__BrakeResistorData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!candle_ros2__msg__BrakeResistorData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
candle_ros2__msg__BrakeResistorData__Sequence__copy(
  const candle_ros2__msg__BrakeResistorData__Sequence * input,
  candle_ros2__msg__BrakeResistorData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(candle_ros2__msg__BrakeResistorData)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(candle_ros2__msg__BrakeResistorData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    candle_ros2__msg__BrakeResistorData * data =
      (candle_ros2__msg__BrakeResistorData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!candle_ros2__msg__BrakeResistorData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          candle_ros2__msg__BrakeResistorData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!candle_ros2__msg__BrakeResistorData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

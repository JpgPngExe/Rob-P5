// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from candle_ros2:msg/ControlModuleData.idl
// generated code does not contain a copyright notice
#include "candle_ros2/msg/detail/control_module_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
candle_ros2__msg__ControlModuleData__init(candle_ros2__msg__ControlModuleData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    candle_ros2__msg__ControlModuleData__fini(msg);
    return false;
  }
  // bus_voltage
  // battery_voltage_level_1
  // battery_voltage_level_2
  // brake_trigger_voltage
  // temperature
  // temperature_limit
  return true;
}

void
candle_ros2__msg__ControlModuleData__fini(candle_ros2__msg__ControlModuleData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // bus_voltage
  // battery_voltage_level_1
  // battery_voltage_level_2
  // brake_trigger_voltage
  // temperature
  // temperature_limit
}

bool
candle_ros2__msg__ControlModuleData__are_equal(const candle_ros2__msg__ControlModuleData * lhs, const candle_ros2__msg__ControlModuleData * rhs)
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
  // bus_voltage
  if (lhs->bus_voltage != rhs->bus_voltage) {
    return false;
  }
  // battery_voltage_level_1
  if (lhs->battery_voltage_level_1 != rhs->battery_voltage_level_1) {
    return false;
  }
  // battery_voltage_level_2
  if (lhs->battery_voltage_level_2 != rhs->battery_voltage_level_2) {
    return false;
  }
  // brake_trigger_voltage
  if (lhs->brake_trigger_voltage != rhs->brake_trigger_voltage) {
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
candle_ros2__msg__ControlModuleData__copy(
  const candle_ros2__msg__ControlModuleData * input,
  candle_ros2__msg__ControlModuleData * output)
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
  // bus_voltage
  output->bus_voltage = input->bus_voltage;
  // battery_voltage_level_1
  output->battery_voltage_level_1 = input->battery_voltage_level_1;
  // battery_voltage_level_2
  output->battery_voltage_level_2 = input->battery_voltage_level_2;
  // brake_trigger_voltage
  output->brake_trigger_voltage = input->brake_trigger_voltage;
  // temperature
  output->temperature = input->temperature;
  // temperature_limit
  output->temperature_limit = input->temperature_limit;
  return true;
}

candle_ros2__msg__ControlModuleData *
candle_ros2__msg__ControlModuleData__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  candle_ros2__msg__ControlModuleData * msg = (candle_ros2__msg__ControlModuleData *)allocator.allocate(sizeof(candle_ros2__msg__ControlModuleData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(candle_ros2__msg__ControlModuleData));
  bool success = candle_ros2__msg__ControlModuleData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
candle_ros2__msg__ControlModuleData__destroy(candle_ros2__msg__ControlModuleData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    candle_ros2__msg__ControlModuleData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
candle_ros2__msg__ControlModuleData__Sequence__init(candle_ros2__msg__ControlModuleData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  candle_ros2__msg__ControlModuleData * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(candle_ros2__msg__ControlModuleData)) {
      return false;
    }
    data = (candle_ros2__msg__ControlModuleData *)allocator.zero_allocate(size, sizeof(candle_ros2__msg__ControlModuleData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = candle_ros2__msg__ControlModuleData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        candle_ros2__msg__ControlModuleData__fini(&data[i - 1]);
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
candle_ros2__msg__ControlModuleData__Sequence__fini(candle_ros2__msg__ControlModuleData__Sequence * array)
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
      candle_ros2__msg__ControlModuleData__fini(&array->data[i]);
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

candle_ros2__msg__ControlModuleData__Sequence *
candle_ros2__msg__ControlModuleData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  candle_ros2__msg__ControlModuleData__Sequence * array = (candle_ros2__msg__ControlModuleData__Sequence *)allocator.allocate(sizeof(candle_ros2__msg__ControlModuleData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = candle_ros2__msg__ControlModuleData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
candle_ros2__msg__ControlModuleData__Sequence__destroy(candle_ros2__msg__ControlModuleData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    candle_ros2__msg__ControlModuleData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
candle_ros2__msg__ControlModuleData__Sequence__are_equal(const candle_ros2__msg__ControlModuleData__Sequence * lhs, const candle_ros2__msg__ControlModuleData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!candle_ros2__msg__ControlModuleData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
candle_ros2__msg__ControlModuleData__Sequence__copy(
  const candle_ros2__msg__ControlModuleData__Sequence * input,
  candle_ros2__msg__ControlModuleData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(candle_ros2__msg__ControlModuleData)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(candle_ros2__msg__ControlModuleData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    candle_ros2__msg__ControlModuleData * data =
      (candle_ros2__msg__ControlModuleData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!candle_ros2__msg__ControlModuleData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          candle_ros2__msg__ControlModuleData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!candle_ros2__msg__ControlModuleData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from candle_ros2:srv/SetLimits.idl
// generated code does not contain a copyright notice
#include "candle_ros2/srv/detail/set_limits__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `device_ids`
// Member `velocity_limit`
// Member `torque_limit`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
candle_ros2__srv__SetLimits_Request__init(candle_ros2__srv__SetLimits_Request * msg)
{
  if (!msg) {
    return false;
  }
  // device_ids
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->device_ids, 0)) {
    candle_ros2__srv__SetLimits_Request__fini(msg);
    return false;
  }
  // velocity_limit
  if (!rosidl_runtime_c__float__Sequence__init(&msg->velocity_limit, 0)) {
    candle_ros2__srv__SetLimits_Request__fini(msg);
    return false;
  }
  // torque_limit
  if (!rosidl_runtime_c__float__Sequence__init(&msg->torque_limit, 0)) {
    candle_ros2__srv__SetLimits_Request__fini(msg);
    return false;
  }
  return true;
}

void
candle_ros2__srv__SetLimits_Request__fini(candle_ros2__srv__SetLimits_Request * msg)
{
  if (!msg) {
    return;
  }
  // device_ids
  rosidl_runtime_c__uint16__Sequence__fini(&msg->device_ids);
  // velocity_limit
  rosidl_runtime_c__float__Sequence__fini(&msg->velocity_limit);
  // torque_limit
  rosidl_runtime_c__float__Sequence__fini(&msg->torque_limit);
}

bool
candle_ros2__srv__SetLimits_Request__are_equal(const candle_ros2__srv__SetLimits_Request * lhs, const candle_ros2__srv__SetLimits_Request * rhs)
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
  // velocity_limit
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->velocity_limit), &(rhs->velocity_limit)))
  {
    return false;
  }
  // torque_limit
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->torque_limit), &(rhs->torque_limit)))
  {
    return false;
  }
  return true;
}

bool
candle_ros2__srv__SetLimits_Request__copy(
  const candle_ros2__srv__SetLimits_Request * input,
  candle_ros2__srv__SetLimits_Request * output)
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
  // velocity_limit
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->velocity_limit), &(output->velocity_limit)))
  {
    return false;
  }
  // torque_limit
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->torque_limit), &(output->torque_limit)))
  {
    return false;
  }
  return true;
}

candle_ros2__srv__SetLimits_Request *
candle_ros2__srv__SetLimits_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  candle_ros2__srv__SetLimits_Request * msg = (candle_ros2__srv__SetLimits_Request *)allocator.allocate(sizeof(candle_ros2__srv__SetLimits_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(candle_ros2__srv__SetLimits_Request));
  bool success = candle_ros2__srv__SetLimits_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
candle_ros2__srv__SetLimits_Request__destroy(candle_ros2__srv__SetLimits_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    candle_ros2__srv__SetLimits_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
candle_ros2__srv__SetLimits_Request__Sequence__init(candle_ros2__srv__SetLimits_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  candle_ros2__srv__SetLimits_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(candle_ros2__srv__SetLimits_Request)) {
      return false;
    }
    data = (candle_ros2__srv__SetLimits_Request *)allocator.zero_allocate(size, sizeof(candle_ros2__srv__SetLimits_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = candle_ros2__srv__SetLimits_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        candle_ros2__srv__SetLimits_Request__fini(&data[i - 1]);
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
candle_ros2__srv__SetLimits_Request__Sequence__fini(candle_ros2__srv__SetLimits_Request__Sequence * array)
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
      candle_ros2__srv__SetLimits_Request__fini(&array->data[i]);
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

candle_ros2__srv__SetLimits_Request__Sequence *
candle_ros2__srv__SetLimits_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  candle_ros2__srv__SetLimits_Request__Sequence * array = (candle_ros2__srv__SetLimits_Request__Sequence *)allocator.allocate(sizeof(candle_ros2__srv__SetLimits_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = candle_ros2__srv__SetLimits_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
candle_ros2__srv__SetLimits_Request__Sequence__destroy(candle_ros2__srv__SetLimits_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    candle_ros2__srv__SetLimits_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
candle_ros2__srv__SetLimits_Request__Sequence__are_equal(const candle_ros2__srv__SetLimits_Request__Sequence * lhs, const candle_ros2__srv__SetLimits_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!candle_ros2__srv__SetLimits_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
candle_ros2__srv__SetLimits_Request__Sequence__copy(
  const candle_ros2__srv__SetLimits_Request__Sequence * input,
  candle_ros2__srv__SetLimits_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(candle_ros2__srv__SetLimits_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(candle_ros2__srv__SetLimits_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    candle_ros2__srv__SetLimits_Request * data =
      (candle_ros2__srv__SetLimits_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!candle_ros2__srv__SetLimits_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          candle_ros2__srv__SetLimits_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!candle_ros2__srv__SetLimits_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `success`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
candle_ros2__srv__SetLimits_Response__init(candle_ros2__srv__SetLimits_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->success, 0)) {
    candle_ros2__srv__SetLimits_Response__fini(msg);
    return false;
  }
  return true;
}

void
candle_ros2__srv__SetLimits_Response__fini(candle_ros2__srv__SetLimits_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  rosidl_runtime_c__boolean__Sequence__fini(&msg->success);
}

bool
candle_ros2__srv__SetLimits_Response__are_equal(const candle_ros2__srv__SetLimits_Response * lhs, const candle_ros2__srv__SetLimits_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->success), &(rhs->success)))
  {
    return false;
  }
  return true;
}

bool
candle_ros2__srv__SetLimits_Response__copy(
  const candle_ros2__srv__SetLimits_Response * input,
  candle_ros2__srv__SetLimits_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->success), &(output->success)))
  {
    return false;
  }
  return true;
}

candle_ros2__srv__SetLimits_Response *
candle_ros2__srv__SetLimits_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  candle_ros2__srv__SetLimits_Response * msg = (candle_ros2__srv__SetLimits_Response *)allocator.allocate(sizeof(candle_ros2__srv__SetLimits_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(candle_ros2__srv__SetLimits_Response));
  bool success = candle_ros2__srv__SetLimits_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
candle_ros2__srv__SetLimits_Response__destroy(candle_ros2__srv__SetLimits_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    candle_ros2__srv__SetLimits_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
candle_ros2__srv__SetLimits_Response__Sequence__init(candle_ros2__srv__SetLimits_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  candle_ros2__srv__SetLimits_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(candle_ros2__srv__SetLimits_Response)) {
      return false;
    }
    data = (candle_ros2__srv__SetLimits_Response *)allocator.zero_allocate(size, sizeof(candle_ros2__srv__SetLimits_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = candle_ros2__srv__SetLimits_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        candle_ros2__srv__SetLimits_Response__fini(&data[i - 1]);
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
candle_ros2__srv__SetLimits_Response__Sequence__fini(candle_ros2__srv__SetLimits_Response__Sequence * array)
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
      candle_ros2__srv__SetLimits_Response__fini(&array->data[i]);
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

candle_ros2__srv__SetLimits_Response__Sequence *
candle_ros2__srv__SetLimits_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  candle_ros2__srv__SetLimits_Response__Sequence * array = (candle_ros2__srv__SetLimits_Response__Sequence *)allocator.allocate(sizeof(candle_ros2__srv__SetLimits_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = candle_ros2__srv__SetLimits_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
candle_ros2__srv__SetLimits_Response__Sequence__destroy(candle_ros2__srv__SetLimits_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    candle_ros2__srv__SetLimits_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
candle_ros2__srv__SetLimits_Response__Sequence__are_equal(const candle_ros2__srv__SetLimits_Response__Sequence * lhs, const candle_ros2__srv__SetLimits_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!candle_ros2__srv__SetLimits_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
candle_ros2__srv__SetLimits_Response__Sequence__copy(
  const candle_ros2__srv__SetLimits_Response__Sequence * input,
  candle_ros2__srv__SetLimits_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(candle_ros2__srv__SetLimits_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(candle_ros2__srv__SetLimits_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    candle_ros2__srv__SetLimits_Response * data =
      (candle_ros2__srv__SetLimits_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!candle_ros2__srv__SetLimits_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          candle_ros2__srv__SetLimits_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!candle_ros2__srv__SetLimits_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "candle_ros2/srv/detail/set_limits__functions.h"

bool
candle_ros2__srv__SetLimits_Event__init(candle_ros2__srv__SetLimits_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    candle_ros2__srv__SetLimits_Event__fini(msg);
    return false;
  }
  // request
  if (!candle_ros2__srv__SetLimits_Request__Sequence__init(&msg->request, 0)) {
    candle_ros2__srv__SetLimits_Event__fini(msg);
    return false;
  }
  // response
  if (!candle_ros2__srv__SetLimits_Response__Sequence__init(&msg->response, 0)) {
    candle_ros2__srv__SetLimits_Event__fini(msg);
    return false;
  }
  return true;
}

void
candle_ros2__srv__SetLimits_Event__fini(candle_ros2__srv__SetLimits_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  candle_ros2__srv__SetLimits_Request__Sequence__fini(&msg->request);
  // response
  candle_ros2__srv__SetLimits_Response__Sequence__fini(&msg->response);
}

bool
candle_ros2__srv__SetLimits_Event__are_equal(const candle_ros2__srv__SetLimits_Event * lhs, const candle_ros2__srv__SetLimits_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!candle_ros2__srv__SetLimits_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!candle_ros2__srv__SetLimits_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
candle_ros2__srv__SetLimits_Event__copy(
  const candle_ros2__srv__SetLimits_Event * input,
  candle_ros2__srv__SetLimits_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!candle_ros2__srv__SetLimits_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!candle_ros2__srv__SetLimits_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

candle_ros2__srv__SetLimits_Event *
candle_ros2__srv__SetLimits_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  candle_ros2__srv__SetLimits_Event * msg = (candle_ros2__srv__SetLimits_Event *)allocator.allocate(sizeof(candle_ros2__srv__SetLimits_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(candle_ros2__srv__SetLimits_Event));
  bool success = candle_ros2__srv__SetLimits_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
candle_ros2__srv__SetLimits_Event__destroy(candle_ros2__srv__SetLimits_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    candle_ros2__srv__SetLimits_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
candle_ros2__srv__SetLimits_Event__Sequence__init(candle_ros2__srv__SetLimits_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  candle_ros2__srv__SetLimits_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(candle_ros2__srv__SetLimits_Event)) {
      return false;
    }
    data = (candle_ros2__srv__SetLimits_Event *)allocator.zero_allocate(size, sizeof(candle_ros2__srv__SetLimits_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = candle_ros2__srv__SetLimits_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        candle_ros2__srv__SetLimits_Event__fini(&data[i - 1]);
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
candle_ros2__srv__SetLimits_Event__Sequence__fini(candle_ros2__srv__SetLimits_Event__Sequence * array)
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
      candle_ros2__srv__SetLimits_Event__fini(&array->data[i]);
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

candle_ros2__srv__SetLimits_Event__Sequence *
candle_ros2__srv__SetLimits_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  candle_ros2__srv__SetLimits_Event__Sequence * array = (candle_ros2__srv__SetLimits_Event__Sequence *)allocator.allocate(sizeof(candle_ros2__srv__SetLimits_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = candle_ros2__srv__SetLimits_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
candle_ros2__srv__SetLimits_Event__Sequence__destroy(candle_ros2__srv__SetLimits_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    candle_ros2__srv__SetLimits_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
candle_ros2__srv__SetLimits_Event__Sequence__are_equal(const candle_ros2__srv__SetLimits_Event__Sequence * lhs, const candle_ros2__srv__SetLimits_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!candle_ros2__srv__SetLimits_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
candle_ros2__srv__SetLimits_Event__Sequence__copy(
  const candle_ros2__srv__SetLimits_Event__Sequence * input,
  candle_ros2__srv__SetLimits_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(candle_ros2__srv__SetLimits_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(candle_ros2__srv__SetLimits_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    candle_ros2__srv__SetLimits_Event * data =
      (candle_ros2__srv__SetLimits_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!candle_ros2__srv__SetLimits_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          candle_ros2__srv__SetLimits_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!candle_ros2__srv__SetLimits_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

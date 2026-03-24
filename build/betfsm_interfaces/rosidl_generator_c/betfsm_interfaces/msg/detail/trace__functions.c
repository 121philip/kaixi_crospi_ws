// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from betfsm_interfaces:msg/Trace.idl
// generated code does not contain a copyright notice
#include "betfsm_interfaces/msg/detail/trace__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `active_states`
#include "rosidl_runtime_c/string_functions.h"

bool
betfsm_interfaces__msg__Trace__init(betfsm_interfaces__msg__Trace * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    betfsm_interfaces__msg__Trace__fini(msg);
    return false;
  }
  // active_states
  if (!rosidl_runtime_c__String__Sequence__init(&msg->active_states, 0)) {
    betfsm_interfaces__msg__Trace__fini(msg);
    return false;
  }
  return true;
}

void
betfsm_interfaces__msg__Trace__fini(betfsm_interfaces__msg__Trace * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // active_states
  rosidl_runtime_c__String__Sequence__fini(&msg->active_states);
}

bool
betfsm_interfaces__msg__Trace__are_equal(const betfsm_interfaces__msg__Trace * lhs, const betfsm_interfaces__msg__Trace * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // active_states
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->active_states), &(rhs->active_states)))
  {
    return false;
  }
  return true;
}

bool
betfsm_interfaces__msg__Trace__copy(
  const betfsm_interfaces__msg__Trace * input,
  betfsm_interfaces__msg__Trace * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // active_states
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->active_states), &(output->active_states)))
  {
    return false;
  }
  return true;
}

betfsm_interfaces__msg__Trace *
betfsm_interfaces__msg__Trace__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  betfsm_interfaces__msg__Trace * msg = (betfsm_interfaces__msg__Trace *)allocator.allocate(sizeof(betfsm_interfaces__msg__Trace), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(betfsm_interfaces__msg__Trace));
  bool success = betfsm_interfaces__msg__Trace__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
betfsm_interfaces__msg__Trace__destroy(betfsm_interfaces__msg__Trace * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    betfsm_interfaces__msg__Trace__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
betfsm_interfaces__msg__Trace__Sequence__init(betfsm_interfaces__msg__Trace__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  betfsm_interfaces__msg__Trace * data = NULL;

  if (size) {
    data = (betfsm_interfaces__msg__Trace *)allocator.zero_allocate(size, sizeof(betfsm_interfaces__msg__Trace), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = betfsm_interfaces__msg__Trace__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        betfsm_interfaces__msg__Trace__fini(&data[i - 1]);
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
betfsm_interfaces__msg__Trace__Sequence__fini(betfsm_interfaces__msg__Trace__Sequence * array)
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
      betfsm_interfaces__msg__Trace__fini(&array->data[i]);
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

betfsm_interfaces__msg__Trace__Sequence *
betfsm_interfaces__msg__Trace__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  betfsm_interfaces__msg__Trace__Sequence * array = (betfsm_interfaces__msg__Trace__Sequence *)allocator.allocate(sizeof(betfsm_interfaces__msg__Trace__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = betfsm_interfaces__msg__Trace__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
betfsm_interfaces__msg__Trace__Sequence__destroy(betfsm_interfaces__msg__Trace__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    betfsm_interfaces__msg__Trace__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
betfsm_interfaces__msg__Trace__Sequence__are_equal(const betfsm_interfaces__msg__Trace__Sequence * lhs, const betfsm_interfaces__msg__Trace__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!betfsm_interfaces__msg__Trace__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
betfsm_interfaces__msg__Trace__Sequence__copy(
  const betfsm_interfaces__msg__Trace__Sequence * input,
  betfsm_interfaces__msg__Trace__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(betfsm_interfaces__msg__Trace);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    betfsm_interfaces__msg__Trace * data =
      (betfsm_interfaces__msg__Trace *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!betfsm_interfaces__msg__Trace__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          betfsm_interfaces__msg__Trace__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!betfsm_interfaces__msg__Trace__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

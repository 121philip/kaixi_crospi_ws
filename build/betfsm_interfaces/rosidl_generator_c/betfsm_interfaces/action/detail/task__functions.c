// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from betfsm_interfaces:action/Task.idl
// generated code does not contain a copyright notice
#include "betfsm_interfaces/action/detail/task__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `task`
// Member `parameters`
#include "rosidl_runtime_c/string_functions.h"

bool
betfsm_interfaces__action__Task_Goal__init(betfsm_interfaces__action__Task_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // task
  if (!rosidl_runtime_c__String__init(&msg->task)) {
    betfsm_interfaces__action__Task_Goal__fini(msg);
    return false;
  }
  // parameters
  if (!rosidl_runtime_c__String__init(&msg->parameters)) {
    betfsm_interfaces__action__Task_Goal__fini(msg);
    return false;
  }
  return true;
}

void
betfsm_interfaces__action__Task_Goal__fini(betfsm_interfaces__action__Task_Goal * msg)
{
  if (!msg) {
    return;
  }
  // task
  rosidl_runtime_c__String__fini(&msg->task);
  // parameters
  rosidl_runtime_c__String__fini(&msg->parameters);
}

bool
betfsm_interfaces__action__Task_Goal__are_equal(const betfsm_interfaces__action__Task_Goal * lhs, const betfsm_interfaces__action__Task_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // task
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->task), &(rhs->task)))
  {
    return false;
  }
  // parameters
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->parameters), &(rhs->parameters)))
  {
    return false;
  }
  return true;
}

bool
betfsm_interfaces__action__Task_Goal__copy(
  const betfsm_interfaces__action__Task_Goal * input,
  betfsm_interfaces__action__Task_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // task
  if (!rosidl_runtime_c__String__copy(
      &(input->task), &(output->task)))
  {
    return false;
  }
  // parameters
  if (!rosidl_runtime_c__String__copy(
      &(input->parameters), &(output->parameters)))
  {
    return false;
  }
  return true;
}

betfsm_interfaces__action__Task_Goal *
betfsm_interfaces__action__Task_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  betfsm_interfaces__action__Task_Goal * msg = (betfsm_interfaces__action__Task_Goal *)allocator.allocate(sizeof(betfsm_interfaces__action__Task_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(betfsm_interfaces__action__Task_Goal));
  bool success = betfsm_interfaces__action__Task_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
betfsm_interfaces__action__Task_Goal__destroy(betfsm_interfaces__action__Task_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    betfsm_interfaces__action__Task_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
betfsm_interfaces__action__Task_Goal__Sequence__init(betfsm_interfaces__action__Task_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  betfsm_interfaces__action__Task_Goal * data = NULL;

  if (size) {
    data = (betfsm_interfaces__action__Task_Goal *)allocator.zero_allocate(size, sizeof(betfsm_interfaces__action__Task_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = betfsm_interfaces__action__Task_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        betfsm_interfaces__action__Task_Goal__fini(&data[i - 1]);
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
betfsm_interfaces__action__Task_Goal__Sequence__fini(betfsm_interfaces__action__Task_Goal__Sequence * array)
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
      betfsm_interfaces__action__Task_Goal__fini(&array->data[i]);
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

betfsm_interfaces__action__Task_Goal__Sequence *
betfsm_interfaces__action__Task_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  betfsm_interfaces__action__Task_Goal__Sequence * array = (betfsm_interfaces__action__Task_Goal__Sequence *)allocator.allocate(sizeof(betfsm_interfaces__action__Task_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = betfsm_interfaces__action__Task_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
betfsm_interfaces__action__Task_Goal__Sequence__destroy(betfsm_interfaces__action__Task_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    betfsm_interfaces__action__Task_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
betfsm_interfaces__action__Task_Goal__Sequence__are_equal(const betfsm_interfaces__action__Task_Goal__Sequence * lhs, const betfsm_interfaces__action__Task_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!betfsm_interfaces__action__Task_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
betfsm_interfaces__action__Task_Goal__Sequence__copy(
  const betfsm_interfaces__action__Task_Goal__Sequence * input,
  betfsm_interfaces__action__Task_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(betfsm_interfaces__action__Task_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    betfsm_interfaces__action__Task_Goal * data =
      (betfsm_interfaces__action__Task_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!betfsm_interfaces__action__Task_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          betfsm_interfaces__action__Task_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!betfsm_interfaces__action__Task_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `outcome`
// Member `parameters`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
betfsm_interfaces__action__Task_Result__init(betfsm_interfaces__action__Task_Result * msg)
{
  if (!msg) {
    return false;
  }
  // outcome
  if (!rosidl_runtime_c__String__init(&msg->outcome)) {
    betfsm_interfaces__action__Task_Result__fini(msg);
    return false;
  }
  // parameters
  if (!rosidl_runtime_c__String__init(&msg->parameters)) {
    betfsm_interfaces__action__Task_Result__fini(msg);
    return false;
  }
  return true;
}

void
betfsm_interfaces__action__Task_Result__fini(betfsm_interfaces__action__Task_Result * msg)
{
  if (!msg) {
    return;
  }
  // outcome
  rosidl_runtime_c__String__fini(&msg->outcome);
  // parameters
  rosidl_runtime_c__String__fini(&msg->parameters);
}

bool
betfsm_interfaces__action__Task_Result__are_equal(const betfsm_interfaces__action__Task_Result * lhs, const betfsm_interfaces__action__Task_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // outcome
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->outcome), &(rhs->outcome)))
  {
    return false;
  }
  // parameters
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->parameters), &(rhs->parameters)))
  {
    return false;
  }
  return true;
}

bool
betfsm_interfaces__action__Task_Result__copy(
  const betfsm_interfaces__action__Task_Result * input,
  betfsm_interfaces__action__Task_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // outcome
  if (!rosidl_runtime_c__String__copy(
      &(input->outcome), &(output->outcome)))
  {
    return false;
  }
  // parameters
  if (!rosidl_runtime_c__String__copy(
      &(input->parameters), &(output->parameters)))
  {
    return false;
  }
  return true;
}

betfsm_interfaces__action__Task_Result *
betfsm_interfaces__action__Task_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  betfsm_interfaces__action__Task_Result * msg = (betfsm_interfaces__action__Task_Result *)allocator.allocate(sizeof(betfsm_interfaces__action__Task_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(betfsm_interfaces__action__Task_Result));
  bool success = betfsm_interfaces__action__Task_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
betfsm_interfaces__action__Task_Result__destroy(betfsm_interfaces__action__Task_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    betfsm_interfaces__action__Task_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
betfsm_interfaces__action__Task_Result__Sequence__init(betfsm_interfaces__action__Task_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  betfsm_interfaces__action__Task_Result * data = NULL;

  if (size) {
    data = (betfsm_interfaces__action__Task_Result *)allocator.zero_allocate(size, sizeof(betfsm_interfaces__action__Task_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = betfsm_interfaces__action__Task_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        betfsm_interfaces__action__Task_Result__fini(&data[i - 1]);
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
betfsm_interfaces__action__Task_Result__Sequence__fini(betfsm_interfaces__action__Task_Result__Sequence * array)
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
      betfsm_interfaces__action__Task_Result__fini(&array->data[i]);
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

betfsm_interfaces__action__Task_Result__Sequence *
betfsm_interfaces__action__Task_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  betfsm_interfaces__action__Task_Result__Sequence * array = (betfsm_interfaces__action__Task_Result__Sequence *)allocator.allocate(sizeof(betfsm_interfaces__action__Task_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = betfsm_interfaces__action__Task_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
betfsm_interfaces__action__Task_Result__Sequence__destroy(betfsm_interfaces__action__Task_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    betfsm_interfaces__action__Task_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
betfsm_interfaces__action__Task_Result__Sequence__are_equal(const betfsm_interfaces__action__Task_Result__Sequence * lhs, const betfsm_interfaces__action__Task_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!betfsm_interfaces__action__Task_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
betfsm_interfaces__action__Task_Result__Sequence__copy(
  const betfsm_interfaces__action__Task_Result__Sequence * input,
  betfsm_interfaces__action__Task_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(betfsm_interfaces__action__Task_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    betfsm_interfaces__action__Task_Result * data =
      (betfsm_interfaces__action__Task_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!betfsm_interfaces__action__Task_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          betfsm_interfaces__action__Task_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!betfsm_interfaces__action__Task_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `state`
// Member `parameters`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
betfsm_interfaces__action__Task_Feedback__init(betfsm_interfaces__action__Task_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    betfsm_interfaces__action__Task_Feedback__fini(msg);
    return false;
  }
  // parameters
  if (!rosidl_runtime_c__String__init(&msg->parameters)) {
    betfsm_interfaces__action__Task_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
betfsm_interfaces__action__Task_Feedback__fini(betfsm_interfaces__action__Task_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // state
  rosidl_runtime_c__String__fini(&msg->state);
  // parameters
  rosidl_runtime_c__String__fini(&msg->parameters);
}

bool
betfsm_interfaces__action__Task_Feedback__are_equal(const betfsm_interfaces__action__Task_Feedback * lhs, const betfsm_interfaces__action__Task_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // parameters
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->parameters), &(rhs->parameters)))
  {
    return false;
  }
  return true;
}

bool
betfsm_interfaces__action__Task_Feedback__copy(
  const betfsm_interfaces__action__Task_Feedback * input,
  betfsm_interfaces__action__Task_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // parameters
  if (!rosidl_runtime_c__String__copy(
      &(input->parameters), &(output->parameters)))
  {
    return false;
  }
  return true;
}

betfsm_interfaces__action__Task_Feedback *
betfsm_interfaces__action__Task_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  betfsm_interfaces__action__Task_Feedback * msg = (betfsm_interfaces__action__Task_Feedback *)allocator.allocate(sizeof(betfsm_interfaces__action__Task_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(betfsm_interfaces__action__Task_Feedback));
  bool success = betfsm_interfaces__action__Task_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
betfsm_interfaces__action__Task_Feedback__destroy(betfsm_interfaces__action__Task_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    betfsm_interfaces__action__Task_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
betfsm_interfaces__action__Task_Feedback__Sequence__init(betfsm_interfaces__action__Task_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  betfsm_interfaces__action__Task_Feedback * data = NULL;

  if (size) {
    data = (betfsm_interfaces__action__Task_Feedback *)allocator.zero_allocate(size, sizeof(betfsm_interfaces__action__Task_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = betfsm_interfaces__action__Task_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        betfsm_interfaces__action__Task_Feedback__fini(&data[i - 1]);
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
betfsm_interfaces__action__Task_Feedback__Sequence__fini(betfsm_interfaces__action__Task_Feedback__Sequence * array)
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
      betfsm_interfaces__action__Task_Feedback__fini(&array->data[i]);
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

betfsm_interfaces__action__Task_Feedback__Sequence *
betfsm_interfaces__action__Task_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  betfsm_interfaces__action__Task_Feedback__Sequence * array = (betfsm_interfaces__action__Task_Feedback__Sequence *)allocator.allocate(sizeof(betfsm_interfaces__action__Task_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = betfsm_interfaces__action__Task_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
betfsm_interfaces__action__Task_Feedback__Sequence__destroy(betfsm_interfaces__action__Task_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    betfsm_interfaces__action__Task_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
betfsm_interfaces__action__Task_Feedback__Sequence__are_equal(const betfsm_interfaces__action__Task_Feedback__Sequence * lhs, const betfsm_interfaces__action__Task_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!betfsm_interfaces__action__Task_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
betfsm_interfaces__action__Task_Feedback__Sequence__copy(
  const betfsm_interfaces__action__Task_Feedback__Sequence * input,
  betfsm_interfaces__action__Task_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(betfsm_interfaces__action__Task_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    betfsm_interfaces__action__Task_Feedback * data =
      (betfsm_interfaces__action__Task_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!betfsm_interfaces__action__Task_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          betfsm_interfaces__action__Task_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!betfsm_interfaces__action__Task_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "betfsm_interfaces/action/detail/task__functions.h"

bool
betfsm_interfaces__action__Task_SendGoal_Request__init(betfsm_interfaces__action__Task_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    betfsm_interfaces__action__Task_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!betfsm_interfaces__action__Task_Goal__init(&msg->goal)) {
    betfsm_interfaces__action__Task_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
betfsm_interfaces__action__Task_SendGoal_Request__fini(betfsm_interfaces__action__Task_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  betfsm_interfaces__action__Task_Goal__fini(&msg->goal);
}

bool
betfsm_interfaces__action__Task_SendGoal_Request__are_equal(const betfsm_interfaces__action__Task_SendGoal_Request * lhs, const betfsm_interfaces__action__Task_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!betfsm_interfaces__action__Task_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
betfsm_interfaces__action__Task_SendGoal_Request__copy(
  const betfsm_interfaces__action__Task_SendGoal_Request * input,
  betfsm_interfaces__action__Task_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!betfsm_interfaces__action__Task_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

betfsm_interfaces__action__Task_SendGoal_Request *
betfsm_interfaces__action__Task_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  betfsm_interfaces__action__Task_SendGoal_Request * msg = (betfsm_interfaces__action__Task_SendGoal_Request *)allocator.allocate(sizeof(betfsm_interfaces__action__Task_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(betfsm_interfaces__action__Task_SendGoal_Request));
  bool success = betfsm_interfaces__action__Task_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
betfsm_interfaces__action__Task_SendGoal_Request__destroy(betfsm_interfaces__action__Task_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    betfsm_interfaces__action__Task_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
betfsm_interfaces__action__Task_SendGoal_Request__Sequence__init(betfsm_interfaces__action__Task_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  betfsm_interfaces__action__Task_SendGoal_Request * data = NULL;

  if (size) {
    data = (betfsm_interfaces__action__Task_SendGoal_Request *)allocator.zero_allocate(size, sizeof(betfsm_interfaces__action__Task_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = betfsm_interfaces__action__Task_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        betfsm_interfaces__action__Task_SendGoal_Request__fini(&data[i - 1]);
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
betfsm_interfaces__action__Task_SendGoal_Request__Sequence__fini(betfsm_interfaces__action__Task_SendGoal_Request__Sequence * array)
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
      betfsm_interfaces__action__Task_SendGoal_Request__fini(&array->data[i]);
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

betfsm_interfaces__action__Task_SendGoal_Request__Sequence *
betfsm_interfaces__action__Task_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  betfsm_interfaces__action__Task_SendGoal_Request__Sequence * array = (betfsm_interfaces__action__Task_SendGoal_Request__Sequence *)allocator.allocate(sizeof(betfsm_interfaces__action__Task_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = betfsm_interfaces__action__Task_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
betfsm_interfaces__action__Task_SendGoal_Request__Sequence__destroy(betfsm_interfaces__action__Task_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    betfsm_interfaces__action__Task_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
betfsm_interfaces__action__Task_SendGoal_Request__Sequence__are_equal(const betfsm_interfaces__action__Task_SendGoal_Request__Sequence * lhs, const betfsm_interfaces__action__Task_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!betfsm_interfaces__action__Task_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
betfsm_interfaces__action__Task_SendGoal_Request__Sequence__copy(
  const betfsm_interfaces__action__Task_SendGoal_Request__Sequence * input,
  betfsm_interfaces__action__Task_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(betfsm_interfaces__action__Task_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    betfsm_interfaces__action__Task_SendGoal_Request * data =
      (betfsm_interfaces__action__Task_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!betfsm_interfaces__action__Task_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          betfsm_interfaces__action__Task_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!betfsm_interfaces__action__Task_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
betfsm_interfaces__action__Task_SendGoal_Response__init(betfsm_interfaces__action__Task_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    betfsm_interfaces__action__Task_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
betfsm_interfaces__action__Task_SendGoal_Response__fini(betfsm_interfaces__action__Task_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
betfsm_interfaces__action__Task_SendGoal_Response__are_equal(const betfsm_interfaces__action__Task_SendGoal_Response * lhs, const betfsm_interfaces__action__Task_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
betfsm_interfaces__action__Task_SendGoal_Response__copy(
  const betfsm_interfaces__action__Task_SendGoal_Response * input,
  betfsm_interfaces__action__Task_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

betfsm_interfaces__action__Task_SendGoal_Response *
betfsm_interfaces__action__Task_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  betfsm_interfaces__action__Task_SendGoal_Response * msg = (betfsm_interfaces__action__Task_SendGoal_Response *)allocator.allocate(sizeof(betfsm_interfaces__action__Task_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(betfsm_interfaces__action__Task_SendGoal_Response));
  bool success = betfsm_interfaces__action__Task_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
betfsm_interfaces__action__Task_SendGoal_Response__destroy(betfsm_interfaces__action__Task_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    betfsm_interfaces__action__Task_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
betfsm_interfaces__action__Task_SendGoal_Response__Sequence__init(betfsm_interfaces__action__Task_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  betfsm_interfaces__action__Task_SendGoal_Response * data = NULL;

  if (size) {
    data = (betfsm_interfaces__action__Task_SendGoal_Response *)allocator.zero_allocate(size, sizeof(betfsm_interfaces__action__Task_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = betfsm_interfaces__action__Task_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        betfsm_interfaces__action__Task_SendGoal_Response__fini(&data[i - 1]);
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
betfsm_interfaces__action__Task_SendGoal_Response__Sequence__fini(betfsm_interfaces__action__Task_SendGoal_Response__Sequence * array)
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
      betfsm_interfaces__action__Task_SendGoal_Response__fini(&array->data[i]);
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

betfsm_interfaces__action__Task_SendGoal_Response__Sequence *
betfsm_interfaces__action__Task_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  betfsm_interfaces__action__Task_SendGoal_Response__Sequence * array = (betfsm_interfaces__action__Task_SendGoal_Response__Sequence *)allocator.allocate(sizeof(betfsm_interfaces__action__Task_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = betfsm_interfaces__action__Task_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
betfsm_interfaces__action__Task_SendGoal_Response__Sequence__destroy(betfsm_interfaces__action__Task_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    betfsm_interfaces__action__Task_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
betfsm_interfaces__action__Task_SendGoal_Response__Sequence__are_equal(const betfsm_interfaces__action__Task_SendGoal_Response__Sequence * lhs, const betfsm_interfaces__action__Task_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!betfsm_interfaces__action__Task_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
betfsm_interfaces__action__Task_SendGoal_Response__Sequence__copy(
  const betfsm_interfaces__action__Task_SendGoal_Response__Sequence * input,
  betfsm_interfaces__action__Task_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(betfsm_interfaces__action__Task_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    betfsm_interfaces__action__Task_SendGoal_Response * data =
      (betfsm_interfaces__action__Task_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!betfsm_interfaces__action__Task_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          betfsm_interfaces__action__Task_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!betfsm_interfaces__action__Task_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
betfsm_interfaces__action__Task_GetResult_Request__init(betfsm_interfaces__action__Task_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    betfsm_interfaces__action__Task_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
betfsm_interfaces__action__Task_GetResult_Request__fini(betfsm_interfaces__action__Task_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
betfsm_interfaces__action__Task_GetResult_Request__are_equal(const betfsm_interfaces__action__Task_GetResult_Request * lhs, const betfsm_interfaces__action__Task_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
betfsm_interfaces__action__Task_GetResult_Request__copy(
  const betfsm_interfaces__action__Task_GetResult_Request * input,
  betfsm_interfaces__action__Task_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

betfsm_interfaces__action__Task_GetResult_Request *
betfsm_interfaces__action__Task_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  betfsm_interfaces__action__Task_GetResult_Request * msg = (betfsm_interfaces__action__Task_GetResult_Request *)allocator.allocate(sizeof(betfsm_interfaces__action__Task_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(betfsm_interfaces__action__Task_GetResult_Request));
  bool success = betfsm_interfaces__action__Task_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
betfsm_interfaces__action__Task_GetResult_Request__destroy(betfsm_interfaces__action__Task_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    betfsm_interfaces__action__Task_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
betfsm_interfaces__action__Task_GetResult_Request__Sequence__init(betfsm_interfaces__action__Task_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  betfsm_interfaces__action__Task_GetResult_Request * data = NULL;

  if (size) {
    data = (betfsm_interfaces__action__Task_GetResult_Request *)allocator.zero_allocate(size, sizeof(betfsm_interfaces__action__Task_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = betfsm_interfaces__action__Task_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        betfsm_interfaces__action__Task_GetResult_Request__fini(&data[i - 1]);
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
betfsm_interfaces__action__Task_GetResult_Request__Sequence__fini(betfsm_interfaces__action__Task_GetResult_Request__Sequence * array)
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
      betfsm_interfaces__action__Task_GetResult_Request__fini(&array->data[i]);
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

betfsm_interfaces__action__Task_GetResult_Request__Sequence *
betfsm_interfaces__action__Task_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  betfsm_interfaces__action__Task_GetResult_Request__Sequence * array = (betfsm_interfaces__action__Task_GetResult_Request__Sequence *)allocator.allocate(sizeof(betfsm_interfaces__action__Task_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = betfsm_interfaces__action__Task_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
betfsm_interfaces__action__Task_GetResult_Request__Sequence__destroy(betfsm_interfaces__action__Task_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    betfsm_interfaces__action__Task_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
betfsm_interfaces__action__Task_GetResult_Request__Sequence__are_equal(const betfsm_interfaces__action__Task_GetResult_Request__Sequence * lhs, const betfsm_interfaces__action__Task_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!betfsm_interfaces__action__Task_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
betfsm_interfaces__action__Task_GetResult_Request__Sequence__copy(
  const betfsm_interfaces__action__Task_GetResult_Request__Sequence * input,
  betfsm_interfaces__action__Task_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(betfsm_interfaces__action__Task_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    betfsm_interfaces__action__Task_GetResult_Request * data =
      (betfsm_interfaces__action__Task_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!betfsm_interfaces__action__Task_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          betfsm_interfaces__action__Task_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!betfsm_interfaces__action__Task_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "betfsm_interfaces/action/detail/task__functions.h"

bool
betfsm_interfaces__action__Task_GetResult_Response__init(betfsm_interfaces__action__Task_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!betfsm_interfaces__action__Task_Result__init(&msg->result)) {
    betfsm_interfaces__action__Task_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
betfsm_interfaces__action__Task_GetResult_Response__fini(betfsm_interfaces__action__Task_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  betfsm_interfaces__action__Task_Result__fini(&msg->result);
}

bool
betfsm_interfaces__action__Task_GetResult_Response__are_equal(const betfsm_interfaces__action__Task_GetResult_Response * lhs, const betfsm_interfaces__action__Task_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!betfsm_interfaces__action__Task_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
betfsm_interfaces__action__Task_GetResult_Response__copy(
  const betfsm_interfaces__action__Task_GetResult_Response * input,
  betfsm_interfaces__action__Task_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!betfsm_interfaces__action__Task_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

betfsm_interfaces__action__Task_GetResult_Response *
betfsm_interfaces__action__Task_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  betfsm_interfaces__action__Task_GetResult_Response * msg = (betfsm_interfaces__action__Task_GetResult_Response *)allocator.allocate(sizeof(betfsm_interfaces__action__Task_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(betfsm_interfaces__action__Task_GetResult_Response));
  bool success = betfsm_interfaces__action__Task_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
betfsm_interfaces__action__Task_GetResult_Response__destroy(betfsm_interfaces__action__Task_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    betfsm_interfaces__action__Task_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
betfsm_interfaces__action__Task_GetResult_Response__Sequence__init(betfsm_interfaces__action__Task_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  betfsm_interfaces__action__Task_GetResult_Response * data = NULL;

  if (size) {
    data = (betfsm_interfaces__action__Task_GetResult_Response *)allocator.zero_allocate(size, sizeof(betfsm_interfaces__action__Task_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = betfsm_interfaces__action__Task_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        betfsm_interfaces__action__Task_GetResult_Response__fini(&data[i - 1]);
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
betfsm_interfaces__action__Task_GetResult_Response__Sequence__fini(betfsm_interfaces__action__Task_GetResult_Response__Sequence * array)
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
      betfsm_interfaces__action__Task_GetResult_Response__fini(&array->data[i]);
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

betfsm_interfaces__action__Task_GetResult_Response__Sequence *
betfsm_interfaces__action__Task_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  betfsm_interfaces__action__Task_GetResult_Response__Sequence * array = (betfsm_interfaces__action__Task_GetResult_Response__Sequence *)allocator.allocate(sizeof(betfsm_interfaces__action__Task_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = betfsm_interfaces__action__Task_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
betfsm_interfaces__action__Task_GetResult_Response__Sequence__destroy(betfsm_interfaces__action__Task_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    betfsm_interfaces__action__Task_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
betfsm_interfaces__action__Task_GetResult_Response__Sequence__are_equal(const betfsm_interfaces__action__Task_GetResult_Response__Sequence * lhs, const betfsm_interfaces__action__Task_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!betfsm_interfaces__action__Task_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
betfsm_interfaces__action__Task_GetResult_Response__Sequence__copy(
  const betfsm_interfaces__action__Task_GetResult_Response__Sequence * input,
  betfsm_interfaces__action__Task_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(betfsm_interfaces__action__Task_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    betfsm_interfaces__action__Task_GetResult_Response * data =
      (betfsm_interfaces__action__Task_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!betfsm_interfaces__action__Task_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          betfsm_interfaces__action__Task_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!betfsm_interfaces__action__Task_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "betfsm_interfaces/action/detail/task__functions.h"

bool
betfsm_interfaces__action__Task_FeedbackMessage__init(betfsm_interfaces__action__Task_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    betfsm_interfaces__action__Task_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!betfsm_interfaces__action__Task_Feedback__init(&msg->feedback)) {
    betfsm_interfaces__action__Task_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
betfsm_interfaces__action__Task_FeedbackMessage__fini(betfsm_interfaces__action__Task_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  betfsm_interfaces__action__Task_Feedback__fini(&msg->feedback);
}

bool
betfsm_interfaces__action__Task_FeedbackMessage__are_equal(const betfsm_interfaces__action__Task_FeedbackMessage * lhs, const betfsm_interfaces__action__Task_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!betfsm_interfaces__action__Task_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
betfsm_interfaces__action__Task_FeedbackMessage__copy(
  const betfsm_interfaces__action__Task_FeedbackMessage * input,
  betfsm_interfaces__action__Task_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!betfsm_interfaces__action__Task_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

betfsm_interfaces__action__Task_FeedbackMessage *
betfsm_interfaces__action__Task_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  betfsm_interfaces__action__Task_FeedbackMessage * msg = (betfsm_interfaces__action__Task_FeedbackMessage *)allocator.allocate(sizeof(betfsm_interfaces__action__Task_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(betfsm_interfaces__action__Task_FeedbackMessage));
  bool success = betfsm_interfaces__action__Task_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
betfsm_interfaces__action__Task_FeedbackMessage__destroy(betfsm_interfaces__action__Task_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    betfsm_interfaces__action__Task_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
betfsm_interfaces__action__Task_FeedbackMessage__Sequence__init(betfsm_interfaces__action__Task_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  betfsm_interfaces__action__Task_FeedbackMessage * data = NULL;

  if (size) {
    data = (betfsm_interfaces__action__Task_FeedbackMessage *)allocator.zero_allocate(size, sizeof(betfsm_interfaces__action__Task_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = betfsm_interfaces__action__Task_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        betfsm_interfaces__action__Task_FeedbackMessage__fini(&data[i - 1]);
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
betfsm_interfaces__action__Task_FeedbackMessage__Sequence__fini(betfsm_interfaces__action__Task_FeedbackMessage__Sequence * array)
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
      betfsm_interfaces__action__Task_FeedbackMessage__fini(&array->data[i]);
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

betfsm_interfaces__action__Task_FeedbackMessage__Sequence *
betfsm_interfaces__action__Task_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  betfsm_interfaces__action__Task_FeedbackMessage__Sequence * array = (betfsm_interfaces__action__Task_FeedbackMessage__Sequence *)allocator.allocate(sizeof(betfsm_interfaces__action__Task_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = betfsm_interfaces__action__Task_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
betfsm_interfaces__action__Task_FeedbackMessage__Sequence__destroy(betfsm_interfaces__action__Task_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    betfsm_interfaces__action__Task_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
betfsm_interfaces__action__Task_FeedbackMessage__Sequence__are_equal(const betfsm_interfaces__action__Task_FeedbackMessage__Sequence * lhs, const betfsm_interfaces__action__Task_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!betfsm_interfaces__action__Task_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
betfsm_interfaces__action__Task_FeedbackMessage__Sequence__copy(
  const betfsm_interfaces__action__Task_FeedbackMessage__Sequence * input,
  betfsm_interfaces__action__Task_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(betfsm_interfaces__action__Task_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    betfsm_interfaces__action__Task_FeedbackMessage * data =
      (betfsm_interfaces__action__Task_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!betfsm_interfaces__action__Task_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          betfsm_interfaces__action__Task_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!betfsm_interfaces__action__Task_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

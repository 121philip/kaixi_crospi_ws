// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from crospi_interfaces:action/RunTask.idl
// generated code does not contain a copyright notice
#include "crospi_interfaces/action/detail/run_task__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `task`
#include "rosidl_runtime_c/string_functions.h"

bool
crospi_interfaces__action__RunTask_Goal__init(crospi_interfaces__action__RunTask_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // task
  if (!rosidl_runtime_c__String__init(&msg->task)) {
    crospi_interfaces__action__RunTask_Goal__fini(msg);
    return false;
  }
  return true;
}

void
crospi_interfaces__action__RunTask_Goal__fini(crospi_interfaces__action__RunTask_Goal * msg)
{
  if (!msg) {
    return;
  }
  // task
  rosidl_runtime_c__String__fini(&msg->task);
}

bool
crospi_interfaces__action__RunTask_Goal__are_equal(const crospi_interfaces__action__RunTask_Goal * lhs, const crospi_interfaces__action__RunTask_Goal * rhs)
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
  return true;
}

bool
crospi_interfaces__action__RunTask_Goal__copy(
  const crospi_interfaces__action__RunTask_Goal * input,
  crospi_interfaces__action__RunTask_Goal * output)
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
  return true;
}

crospi_interfaces__action__RunTask_Goal *
crospi_interfaces__action__RunTask_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crospi_interfaces__action__RunTask_Goal * msg = (crospi_interfaces__action__RunTask_Goal *)allocator.allocate(sizeof(crospi_interfaces__action__RunTask_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crospi_interfaces__action__RunTask_Goal));
  bool success = crospi_interfaces__action__RunTask_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
crospi_interfaces__action__RunTask_Goal__destroy(crospi_interfaces__action__RunTask_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    crospi_interfaces__action__RunTask_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
crospi_interfaces__action__RunTask_Goal__Sequence__init(crospi_interfaces__action__RunTask_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crospi_interfaces__action__RunTask_Goal * data = NULL;

  if (size) {
    data = (crospi_interfaces__action__RunTask_Goal *)allocator.zero_allocate(size, sizeof(crospi_interfaces__action__RunTask_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crospi_interfaces__action__RunTask_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crospi_interfaces__action__RunTask_Goal__fini(&data[i - 1]);
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
crospi_interfaces__action__RunTask_Goal__Sequence__fini(crospi_interfaces__action__RunTask_Goal__Sequence * array)
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
      crospi_interfaces__action__RunTask_Goal__fini(&array->data[i]);
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

crospi_interfaces__action__RunTask_Goal__Sequence *
crospi_interfaces__action__RunTask_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crospi_interfaces__action__RunTask_Goal__Sequence * array = (crospi_interfaces__action__RunTask_Goal__Sequence *)allocator.allocate(sizeof(crospi_interfaces__action__RunTask_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = crospi_interfaces__action__RunTask_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
crospi_interfaces__action__RunTask_Goal__Sequence__destroy(crospi_interfaces__action__RunTask_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    crospi_interfaces__action__RunTask_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
crospi_interfaces__action__RunTask_Goal__Sequence__are_equal(const crospi_interfaces__action__RunTask_Goal__Sequence * lhs, const crospi_interfaces__action__RunTask_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crospi_interfaces__action__RunTask_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crospi_interfaces__action__RunTask_Goal__Sequence__copy(
  const crospi_interfaces__action__RunTask_Goal__Sequence * input,
  crospi_interfaces__action__RunTask_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crospi_interfaces__action__RunTask_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    crospi_interfaces__action__RunTask_Goal * data =
      (crospi_interfaces__action__RunTask_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crospi_interfaces__action__RunTask_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          crospi_interfaces__action__RunTask_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!crospi_interfaces__action__RunTask_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `terminating_event`
// Member `event_argument`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
crospi_interfaces__action__RunTask_Result__init(crospi_interfaces__action__RunTask_Result * msg)
{
  if (!msg) {
    return false;
  }
  // terminating_event
  if (!rosidl_runtime_c__String__init(&msg->terminating_event)) {
    crospi_interfaces__action__RunTask_Result__fini(msg);
    return false;
  }
  // event_argument
  if (!rosidl_runtime_c__String__init(&msg->event_argument)) {
    crospi_interfaces__action__RunTask_Result__fini(msg);
    return false;
  }
  return true;
}

void
crospi_interfaces__action__RunTask_Result__fini(crospi_interfaces__action__RunTask_Result * msg)
{
  if (!msg) {
    return;
  }
  // terminating_event
  rosidl_runtime_c__String__fini(&msg->terminating_event);
  // event_argument
  rosidl_runtime_c__String__fini(&msg->event_argument);
}

bool
crospi_interfaces__action__RunTask_Result__are_equal(const crospi_interfaces__action__RunTask_Result * lhs, const crospi_interfaces__action__RunTask_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // terminating_event
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->terminating_event), &(rhs->terminating_event)))
  {
    return false;
  }
  // event_argument
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->event_argument), &(rhs->event_argument)))
  {
    return false;
  }
  return true;
}

bool
crospi_interfaces__action__RunTask_Result__copy(
  const crospi_interfaces__action__RunTask_Result * input,
  crospi_interfaces__action__RunTask_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // terminating_event
  if (!rosidl_runtime_c__String__copy(
      &(input->terminating_event), &(output->terminating_event)))
  {
    return false;
  }
  // event_argument
  if (!rosidl_runtime_c__String__copy(
      &(input->event_argument), &(output->event_argument)))
  {
    return false;
  }
  return true;
}

crospi_interfaces__action__RunTask_Result *
crospi_interfaces__action__RunTask_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crospi_interfaces__action__RunTask_Result * msg = (crospi_interfaces__action__RunTask_Result *)allocator.allocate(sizeof(crospi_interfaces__action__RunTask_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crospi_interfaces__action__RunTask_Result));
  bool success = crospi_interfaces__action__RunTask_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
crospi_interfaces__action__RunTask_Result__destroy(crospi_interfaces__action__RunTask_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    crospi_interfaces__action__RunTask_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
crospi_interfaces__action__RunTask_Result__Sequence__init(crospi_interfaces__action__RunTask_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crospi_interfaces__action__RunTask_Result * data = NULL;

  if (size) {
    data = (crospi_interfaces__action__RunTask_Result *)allocator.zero_allocate(size, sizeof(crospi_interfaces__action__RunTask_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crospi_interfaces__action__RunTask_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crospi_interfaces__action__RunTask_Result__fini(&data[i - 1]);
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
crospi_interfaces__action__RunTask_Result__Sequence__fini(crospi_interfaces__action__RunTask_Result__Sequence * array)
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
      crospi_interfaces__action__RunTask_Result__fini(&array->data[i]);
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

crospi_interfaces__action__RunTask_Result__Sequence *
crospi_interfaces__action__RunTask_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crospi_interfaces__action__RunTask_Result__Sequence * array = (crospi_interfaces__action__RunTask_Result__Sequence *)allocator.allocate(sizeof(crospi_interfaces__action__RunTask_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = crospi_interfaces__action__RunTask_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
crospi_interfaces__action__RunTask_Result__Sequence__destroy(crospi_interfaces__action__RunTask_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    crospi_interfaces__action__RunTask_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
crospi_interfaces__action__RunTask_Result__Sequence__are_equal(const crospi_interfaces__action__RunTask_Result__Sequence * lhs, const crospi_interfaces__action__RunTask_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crospi_interfaces__action__RunTask_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crospi_interfaces__action__RunTask_Result__Sequence__copy(
  const crospi_interfaces__action__RunTask_Result__Sequence * input,
  crospi_interfaces__action__RunTask_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crospi_interfaces__action__RunTask_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    crospi_interfaces__action__RunTask_Result * data =
      (crospi_interfaces__action__RunTask_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crospi_interfaces__action__RunTask_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          crospi_interfaces__action__RunTask_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!crospi_interfaces__action__RunTask_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `event`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
crospi_interfaces__action__RunTask_Feedback__init(crospi_interfaces__action__RunTask_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // event
  if (!rosidl_runtime_c__String__init(&msg->event)) {
    crospi_interfaces__action__RunTask_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
crospi_interfaces__action__RunTask_Feedback__fini(crospi_interfaces__action__RunTask_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // event
  rosidl_runtime_c__String__fini(&msg->event);
}

bool
crospi_interfaces__action__RunTask_Feedback__are_equal(const crospi_interfaces__action__RunTask_Feedback * lhs, const crospi_interfaces__action__RunTask_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // event
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->event), &(rhs->event)))
  {
    return false;
  }
  return true;
}

bool
crospi_interfaces__action__RunTask_Feedback__copy(
  const crospi_interfaces__action__RunTask_Feedback * input,
  crospi_interfaces__action__RunTask_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // event
  if (!rosidl_runtime_c__String__copy(
      &(input->event), &(output->event)))
  {
    return false;
  }
  return true;
}

crospi_interfaces__action__RunTask_Feedback *
crospi_interfaces__action__RunTask_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crospi_interfaces__action__RunTask_Feedback * msg = (crospi_interfaces__action__RunTask_Feedback *)allocator.allocate(sizeof(crospi_interfaces__action__RunTask_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crospi_interfaces__action__RunTask_Feedback));
  bool success = crospi_interfaces__action__RunTask_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
crospi_interfaces__action__RunTask_Feedback__destroy(crospi_interfaces__action__RunTask_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    crospi_interfaces__action__RunTask_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
crospi_interfaces__action__RunTask_Feedback__Sequence__init(crospi_interfaces__action__RunTask_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crospi_interfaces__action__RunTask_Feedback * data = NULL;

  if (size) {
    data = (crospi_interfaces__action__RunTask_Feedback *)allocator.zero_allocate(size, sizeof(crospi_interfaces__action__RunTask_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crospi_interfaces__action__RunTask_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crospi_interfaces__action__RunTask_Feedback__fini(&data[i - 1]);
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
crospi_interfaces__action__RunTask_Feedback__Sequence__fini(crospi_interfaces__action__RunTask_Feedback__Sequence * array)
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
      crospi_interfaces__action__RunTask_Feedback__fini(&array->data[i]);
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

crospi_interfaces__action__RunTask_Feedback__Sequence *
crospi_interfaces__action__RunTask_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crospi_interfaces__action__RunTask_Feedback__Sequence * array = (crospi_interfaces__action__RunTask_Feedback__Sequence *)allocator.allocate(sizeof(crospi_interfaces__action__RunTask_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = crospi_interfaces__action__RunTask_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
crospi_interfaces__action__RunTask_Feedback__Sequence__destroy(crospi_interfaces__action__RunTask_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    crospi_interfaces__action__RunTask_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
crospi_interfaces__action__RunTask_Feedback__Sequence__are_equal(const crospi_interfaces__action__RunTask_Feedback__Sequence * lhs, const crospi_interfaces__action__RunTask_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crospi_interfaces__action__RunTask_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crospi_interfaces__action__RunTask_Feedback__Sequence__copy(
  const crospi_interfaces__action__RunTask_Feedback__Sequence * input,
  crospi_interfaces__action__RunTask_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crospi_interfaces__action__RunTask_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    crospi_interfaces__action__RunTask_Feedback * data =
      (crospi_interfaces__action__RunTask_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crospi_interfaces__action__RunTask_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          crospi_interfaces__action__RunTask_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!crospi_interfaces__action__RunTask_Feedback__copy(
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
// #include "crospi_interfaces/action/detail/run_task__functions.h"

bool
crospi_interfaces__action__RunTask_SendGoal_Request__init(crospi_interfaces__action__RunTask_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    crospi_interfaces__action__RunTask_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!crospi_interfaces__action__RunTask_Goal__init(&msg->goal)) {
    crospi_interfaces__action__RunTask_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
crospi_interfaces__action__RunTask_SendGoal_Request__fini(crospi_interfaces__action__RunTask_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  crospi_interfaces__action__RunTask_Goal__fini(&msg->goal);
}

bool
crospi_interfaces__action__RunTask_SendGoal_Request__are_equal(const crospi_interfaces__action__RunTask_SendGoal_Request * lhs, const crospi_interfaces__action__RunTask_SendGoal_Request * rhs)
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
  if (!crospi_interfaces__action__RunTask_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
crospi_interfaces__action__RunTask_SendGoal_Request__copy(
  const crospi_interfaces__action__RunTask_SendGoal_Request * input,
  crospi_interfaces__action__RunTask_SendGoal_Request * output)
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
  if (!crospi_interfaces__action__RunTask_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

crospi_interfaces__action__RunTask_SendGoal_Request *
crospi_interfaces__action__RunTask_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crospi_interfaces__action__RunTask_SendGoal_Request * msg = (crospi_interfaces__action__RunTask_SendGoal_Request *)allocator.allocate(sizeof(crospi_interfaces__action__RunTask_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crospi_interfaces__action__RunTask_SendGoal_Request));
  bool success = crospi_interfaces__action__RunTask_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
crospi_interfaces__action__RunTask_SendGoal_Request__destroy(crospi_interfaces__action__RunTask_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    crospi_interfaces__action__RunTask_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
crospi_interfaces__action__RunTask_SendGoal_Request__Sequence__init(crospi_interfaces__action__RunTask_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crospi_interfaces__action__RunTask_SendGoal_Request * data = NULL;

  if (size) {
    data = (crospi_interfaces__action__RunTask_SendGoal_Request *)allocator.zero_allocate(size, sizeof(crospi_interfaces__action__RunTask_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crospi_interfaces__action__RunTask_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crospi_interfaces__action__RunTask_SendGoal_Request__fini(&data[i - 1]);
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
crospi_interfaces__action__RunTask_SendGoal_Request__Sequence__fini(crospi_interfaces__action__RunTask_SendGoal_Request__Sequence * array)
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
      crospi_interfaces__action__RunTask_SendGoal_Request__fini(&array->data[i]);
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

crospi_interfaces__action__RunTask_SendGoal_Request__Sequence *
crospi_interfaces__action__RunTask_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crospi_interfaces__action__RunTask_SendGoal_Request__Sequence * array = (crospi_interfaces__action__RunTask_SendGoal_Request__Sequence *)allocator.allocate(sizeof(crospi_interfaces__action__RunTask_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = crospi_interfaces__action__RunTask_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
crospi_interfaces__action__RunTask_SendGoal_Request__Sequence__destroy(crospi_interfaces__action__RunTask_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    crospi_interfaces__action__RunTask_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
crospi_interfaces__action__RunTask_SendGoal_Request__Sequence__are_equal(const crospi_interfaces__action__RunTask_SendGoal_Request__Sequence * lhs, const crospi_interfaces__action__RunTask_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crospi_interfaces__action__RunTask_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crospi_interfaces__action__RunTask_SendGoal_Request__Sequence__copy(
  const crospi_interfaces__action__RunTask_SendGoal_Request__Sequence * input,
  crospi_interfaces__action__RunTask_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crospi_interfaces__action__RunTask_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    crospi_interfaces__action__RunTask_SendGoal_Request * data =
      (crospi_interfaces__action__RunTask_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crospi_interfaces__action__RunTask_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          crospi_interfaces__action__RunTask_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!crospi_interfaces__action__RunTask_SendGoal_Request__copy(
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
crospi_interfaces__action__RunTask_SendGoal_Response__init(crospi_interfaces__action__RunTask_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    crospi_interfaces__action__RunTask_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
crospi_interfaces__action__RunTask_SendGoal_Response__fini(crospi_interfaces__action__RunTask_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
crospi_interfaces__action__RunTask_SendGoal_Response__are_equal(const crospi_interfaces__action__RunTask_SendGoal_Response * lhs, const crospi_interfaces__action__RunTask_SendGoal_Response * rhs)
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
crospi_interfaces__action__RunTask_SendGoal_Response__copy(
  const crospi_interfaces__action__RunTask_SendGoal_Response * input,
  crospi_interfaces__action__RunTask_SendGoal_Response * output)
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

crospi_interfaces__action__RunTask_SendGoal_Response *
crospi_interfaces__action__RunTask_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crospi_interfaces__action__RunTask_SendGoal_Response * msg = (crospi_interfaces__action__RunTask_SendGoal_Response *)allocator.allocate(sizeof(crospi_interfaces__action__RunTask_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crospi_interfaces__action__RunTask_SendGoal_Response));
  bool success = crospi_interfaces__action__RunTask_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
crospi_interfaces__action__RunTask_SendGoal_Response__destroy(crospi_interfaces__action__RunTask_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    crospi_interfaces__action__RunTask_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
crospi_interfaces__action__RunTask_SendGoal_Response__Sequence__init(crospi_interfaces__action__RunTask_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crospi_interfaces__action__RunTask_SendGoal_Response * data = NULL;

  if (size) {
    data = (crospi_interfaces__action__RunTask_SendGoal_Response *)allocator.zero_allocate(size, sizeof(crospi_interfaces__action__RunTask_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crospi_interfaces__action__RunTask_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crospi_interfaces__action__RunTask_SendGoal_Response__fini(&data[i - 1]);
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
crospi_interfaces__action__RunTask_SendGoal_Response__Sequence__fini(crospi_interfaces__action__RunTask_SendGoal_Response__Sequence * array)
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
      crospi_interfaces__action__RunTask_SendGoal_Response__fini(&array->data[i]);
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

crospi_interfaces__action__RunTask_SendGoal_Response__Sequence *
crospi_interfaces__action__RunTask_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crospi_interfaces__action__RunTask_SendGoal_Response__Sequence * array = (crospi_interfaces__action__RunTask_SendGoal_Response__Sequence *)allocator.allocate(sizeof(crospi_interfaces__action__RunTask_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = crospi_interfaces__action__RunTask_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
crospi_interfaces__action__RunTask_SendGoal_Response__Sequence__destroy(crospi_interfaces__action__RunTask_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    crospi_interfaces__action__RunTask_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
crospi_interfaces__action__RunTask_SendGoal_Response__Sequence__are_equal(const crospi_interfaces__action__RunTask_SendGoal_Response__Sequence * lhs, const crospi_interfaces__action__RunTask_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crospi_interfaces__action__RunTask_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crospi_interfaces__action__RunTask_SendGoal_Response__Sequence__copy(
  const crospi_interfaces__action__RunTask_SendGoal_Response__Sequence * input,
  crospi_interfaces__action__RunTask_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crospi_interfaces__action__RunTask_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    crospi_interfaces__action__RunTask_SendGoal_Response * data =
      (crospi_interfaces__action__RunTask_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crospi_interfaces__action__RunTask_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          crospi_interfaces__action__RunTask_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!crospi_interfaces__action__RunTask_SendGoal_Response__copy(
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
crospi_interfaces__action__RunTask_GetResult_Request__init(crospi_interfaces__action__RunTask_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    crospi_interfaces__action__RunTask_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
crospi_interfaces__action__RunTask_GetResult_Request__fini(crospi_interfaces__action__RunTask_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
crospi_interfaces__action__RunTask_GetResult_Request__are_equal(const crospi_interfaces__action__RunTask_GetResult_Request * lhs, const crospi_interfaces__action__RunTask_GetResult_Request * rhs)
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
crospi_interfaces__action__RunTask_GetResult_Request__copy(
  const crospi_interfaces__action__RunTask_GetResult_Request * input,
  crospi_interfaces__action__RunTask_GetResult_Request * output)
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

crospi_interfaces__action__RunTask_GetResult_Request *
crospi_interfaces__action__RunTask_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crospi_interfaces__action__RunTask_GetResult_Request * msg = (crospi_interfaces__action__RunTask_GetResult_Request *)allocator.allocate(sizeof(crospi_interfaces__action__RunTask_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crospi_interfaces__action__RunTask_GetResult_Request));
  bool success = crospi_interfaces__action__RunTask_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
crospi_interfaces__action__RunTask_GetResult_Request__destroy(crospi_interfaces__action__RunTask_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    crospi_interfaces__action__RunTask_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
crospi_interfaces__action__RunTask_GetResult_Request__Sequence__init(crospi_interfaces__action__RunTask_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crospi_interfaces__action__RunTask_GetResult_Request * data = NULL;

  if (size) {
    data = (crospi_interfaces__action__RunTask_GetResult_Request *)allocator.zero_allocate(size, sizeof(crospi_interfaces__action__RunTask_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crospi_interfaces__action__RunTask_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crospi_interfaces__action__RunTask_GetResult_Request__fini(&data[i - 1]);
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
crospi_interfaces__action__RunTask_GetResult_Request__Sequence__fini(crospi_interfaces__action__RunTask_GetResult_Request__Sequence * array)
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
      crospi_interfaces__action__RunTask_GetResult_Request__fini(&array->data[i]);
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

crospi_interfaces__action__RunTask_GetResult_Request__Sequence *
crospi_interfaces__action__RunTask_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crospi_interfaces__action__RunTask_GetResult_Request__Sequence * array = (crospi_interfaces__action__RunTask_GetResult_Request__Sequence *)allocator.allocate(sizeof(crospi_interfaces__action__RunTask_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = crospi_interfaces__action__RunTask_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
crospi_interfaces__action__RunTask_GetResult_Request__Sequence__destroy(crospi_interfaces__action__RunTask_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    crospi_interfaces__action__RunTask_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
crospi_interfaces__action__RunTask_GetResult_Request__Sequence__are_equal(const crospi_interfaces__action__RunTask_GetResult_Request__Sequence * lhs, const crospi_interfaces__action__RunTask_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crospi_interfaces__action__RunTask_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crospi_interfaces__action__RunTask_GetResult_Request__Sequence__copy(
  const crospi_interfaces__action__RunTask_GetResult_Request__Sequence * input,
  crospi_interfaces__action__RunTask_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crospi_interfaces__action__RunTask_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    crospi_interfaces__action__RunTask_GetResult_Request * data =
      (crospi_interfaces__action__RunTask_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crospi_interfaces__action__RunTask_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          crospi_interfaces__action__RunTask_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!crospi_interfaces__action__RunTask_GetResult_Request__copy(
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
// #include "crospi_interfaces/action/detail/run_task__functions.h"

bool
crospi_interfaces__action__RunTask_GetResult_Response__init(crospi_interfaces__action__RunTask_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!crospi_interfaces__action__RunTask_Result__init(&msg->result)) {
    crospi_interfaces__action__RunTask_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
crospi_interfaces__action__RunTask_GetResult_Response__fini(crospi_interfaces__action__RunTask_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  crospi_interfaces__action__RunTask_Result__fini(&msg->result);
}

bool
crospi_interfaces__action__RunTask_GetResult_Response__are_equal(const crospi_interfaces__action__RunTask_GetResult_Response * lhs, const crospi_interfaces__action__RunTask_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!crospi_interfaces__action__RunTask_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
crospi_interfaces__action__RunTask_GetResult_Response__copy(
  const crospi_interfaces__action__RunTask_GetResult_Response * input,
  crospi_interfaces__action__RunTask_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!crospi_interfaces__action__RunTask_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

crospi_interfaces__action__RunTask_GetResult_Response *
crospi_interfaces__action__RunTask_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crospi_interfaces__action__RunTask_GetResult_Response * msg = (crospi_interfaces__action__RunTask_GetResult_Response *)allocator.allocate(sizeof(crospi_interfaces__action__RunTask_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crospi_interfaces__action__RunTask_GetResult_Response));
  bool success = crospi_interfaces__action__RunTask_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
crospi_interfaces__action__RunTask_GetResult_Response__destroy(crospi_interfaces__action__RunTask_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    crospi_interfaces__action__RunTask_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
crospi_interfaces__action__RunTask_GetResult_Response__Sequence__init(crospi_interfaces__action__RunTask_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crospi_interfaces__action__RunTask_GetResult_Response * data = NULL;

  if (size) {
    data = (crospi_interfaces__action__RunTask_GetResult_Response *)allocator.zero_allocate(size, sizeof(crospi_interfaces__action__RunTask_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crospi_interfaces__action__RunTask_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crospi_interfaces__action__RunTask_GetResult_Response__fini(&data[i - 1]);
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
crospi_interfaces__action__RunTask_GetResult_Response__Sequence__fini(crospi_interfaces__action__RunTask_GetResult_Response__Sequence * array)
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
      crospi_interfaces__action__RunTask_GetResult_Response__fini(&array->data[i]);
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

crospi_interfaces__action__RunTask_GetResult_Response__Sequence *
crospi_interfaces__action__RunTask_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crospi_interfaces__action__RunTask_GetResult_Response__Sequence * array = (crospi_interfaces__action__RunTask_GetResult_Response__Sequence *)allocator.allocate(sizeof(crospi_interfaces__action__RunTask_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = crospi_interfaces__action__RunTask_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
crospi_interfaces__action__RunTask_GetResult_Response__Sequence__destroy(crospi_interfaces__action__RunTask_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    crospi_interfaces__action__RunTask_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
crospi_interfaces__action__RunTask_GetResult_Response__Sequence__are_equal(const crospi_interfaces__action__RunTask_GetResult_Response__Sequence * lhs, const crospi_interfaces__action__RunTask_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crospi_interfaces__action__RunTask_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crospi_interfaces__action__RunTask_GetResult_Response__Sequence__copy(
  const crospi_interfaces__action__RunTask_GetResult_Response__Sequence * input,
  crospi_interfaces__action__RunTask_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crospi_interfaces__action__RunTask_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    crospi_interfaces__action__RunTask_GetResult_Response * data =
      (crospi_interfaces__action__RunTask_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crospi_interfaces__action__RunTask_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          crospi_interfaces__action__RunTask_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!crospi_interfaces__action__RunTask_GetResult_Response__copy(
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
// #include "crospi_interfaces/action/detail/run_task__functions.h"

bool
crospi_interfaces__action__RunTask_FeedbackMessage__init(crospi_interfaces__action__RunTask_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    crospi_interfaces__action__RunTask_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!crospi_interfaces__action__RunTask_Feedback__init(&msg->feedback)) {
    crospi_interfaces__action__RunTask_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
crospi_interfaces__action__RunTask_FeedbackMessage__fini(crospi_interfaces__action__RunTask_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  crospi_interfaces__action__RunTask_Feedback__fini(&msg->feedback);
}

bool
crospi_interfaces__action__RunTask_FeedbackMessage__are_equal(const crospi_interfaces__action__RunTask_FeedbackMessage * lhs, const crospi_interfaces__action__RunTask_FeedbackMessage * rhs)
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
  if (!crospi_interfaces__action__RunTask_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
crospi_interfaces__action__RunTask_FeedbackMessage__copy(
  const crospi_interfaces__action__RunTask_FeedbackMessage * input,
  crospi_interfaces__action__RunTask_FeedbackMessage * output)
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
  if (!crospi_interfaces__action__RunTask_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

crospi_interfaces__action__RunTask_FeedbackMessage *
crospi_interfaces__action__RunTask_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crospi_interfaces__action__RunTask_FeedbackMessage * msg = (crospi_interfaces__action__RunTask_FeedbackMessage *)allocator.allocate(sizeof(crospi_interfaces__action__RunTask_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crospi_interfaces__action__RunTask_FeedbackMessage));
  bool success = crospi_interfaces__action__RunTask_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
crospi_interfaces__action__RunTask_FeedbackMessage__destroy(crospi_interfaces__action__RunTask_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    crospi_interfaces__action__RunTask_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
crospi_interfaces__action__RunTask_FeedbackMessage__Sequence__init(crospi_interfaces__action__RunTask_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crospi_interfaces__action__RunTask_FeedbackMessage * data = NULL;

  if (size) {
    data = (crospi_interfaces__action__RunTask_FeedbackMessage *)allocator.zero_allocate(size, sizeof(crospi_interfaces__action__RunTask_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crospi_interfaces__action__RunTask_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crospi_interfaces__action__RunTask_FeedbackMessage__fini(&data[i - 1]);
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
crospi_interfaces__action__RunTask_FeedbackMessage__Sequence__fini(crospi_interfaces__action__RunTask_FeedbackMessage__Sequence * array)
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
      crospi_interfaces__action__RunTask_FeedbackMessage__fini(&array->data[i]);
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

crospi_interfaces__action__RunTask_FeedbackMessage__Sequence *
crospi_interfaces__action__RunTask_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crospi_interfaces__action__RunTask_FeedbackMessage__Sequence * array = (crospi_interfaces__action__RunTask_FeedbackMessage__Sequence *)allocator.allocate(sizeof(crospi_interfaces__action__RunTask_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = crospi_interfaces__action__RunTask_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
crospi_interfaces__action__RunTask_FeedbackMessage__Sequence__destroy(crospi_interfaces__action__RunTask_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    crospi_interfaces__action__RunTask_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
crospi_interfaces__action__RunTask_FeedbackMessage__Sequence__are_equal(const crospi_interfaces__action__RunTask_FeedbackMessage__Sequence * lhs, const crospi_interfaces__action__RunTask_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crospi_interfaces__action__RunTask_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crospi_interfaces__action__RunTask_FeedbackMessage__Sequence__copy(
  const crospi_interfaces__action__RunTask_FeedbackMessage__Sequence * input,
  crospi_interfaces__action__RunTask_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crospi_interfaces__action__RunTask_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    crospi_interfaces__action__RunTask_FeedbackMessage * data =
      (crospi_interfaces__action__RunTask_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crospi_interfaces__action__RunTask_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          crospi_interfaces__action__RunTask_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!crospi_interfaces__action__RunTask_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

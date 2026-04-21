// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from trossen_widowx_interfaces:srv/JointModes.idl
// generated code does not contain a copyright notice
#include "trossen_widowx_interfaces/srv/detail/joint_modes__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `joint_mode`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
trossen_widowx_interfaces__srv__JointModes_Request__init(trossen_widowx_interfaces__srv__JointModes_Request * msg)
{
  if (!msg) {
    return false;
  }
  // joint_mode
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->joint_mode, 0)) {
    trossen_widowx_interfaces__srv__JointModes_Request__fini(msg);
    return false;
  }
  return true;
}

void
trossen_widowx_interfaces__srv__JointModes_Request__fini(trossen_widowx_interfaces__srv__JointModes_Request * msg)
{
  if (!msg) {
    return;
  }
  // joint_mode
  rosidl_runtime_c__int32__Sequence__fini(&msg->joint_mode);
}

bool
trossen_widowx_interfaces__srv__JointModes_Request__are_equal(const trossen_widowx_interfaces__srv__JointModes_Request * lhs, const trossen_widowx_interfaces__srv__JointModes_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint_mode
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->joint_mode), &(rhs->joint_mode)))
  {
    return false;
  }
  return true;
}

bool
trossen_widowx_interfaces__srv__JointModes_Request__copy(
  const trossen_widowx_interfaces__srv__JointModes_Request * input,
  trossen_widowx_interfaces__srv__JointModes_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // joint_mode
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->joint_mode), &(output->joint_mode)))
  {
    return false;
  }
  return true;
}

trossen_widowx_interfaces__srv__JointModes_Request *
trossen_widowx_interfaces__srv__JointModes_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  trossen_widowx_interfaces__srv__JointModes_Request * msg = (trossen_widowx_interfaces__srv__JointModes_Request *)allocator.allocate(sizeof(trossen_widowx_interfaces__srv__JointModes_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(trossen_widowx_interfaces__srv__JointModes_Request));
  bool success = trossen_widowx_interfaces__srv__JointModes_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
trossen_widowx_interfaces__srv__JointModes_Request__destroy(trossen_widowx_interfaces__srv__JointModes_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    trossen_widowx_interfaces__srv__JointModes_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
trossen_widowx_interfaces__srv__JointModes_Request__Sequence__init(trossen_widowx_interfaces__srv__JointModes_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  trossen_widowx_interfaces__srv__JointModes_Request * data = NULL;

  if (size) {
    data = (trossen_widowx_interfaces__srv__JointModes_Request *)allocator.zero_allocate(size, sizeof(trossen_widowx_interfaces__srv__JointModes_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = trossen_widowx_interfaces__srv__JointModes_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        trossen_widowx_interfaces__srv__JointModes_Request__fini(&data[i - 1]);
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
trossen_widowx_interfaces__srv__JointModes_Request__Sequence__fini(trossen_widowx_interfaces__srv__JointModes_Request__Sequence * array)
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
      trossen_widowx_interfaces__srv__JointModes_Request__fini(&array->data[i]);
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

trossen_widowx_interfaces__srv__JointModes_Request__Sequence *
trossen_widowx_interfaces__srv__JointModes_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  trossen_widowx_interfaces__srv__JointModes_Request__Sequence * array = (trossen_widowx_interfaces__srv__JointModes_Request__Sequence *)allocator.allocate(sizeof(trossen_widowx_interfaces__srv__JointModes_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = trossen_widowx_interfaces__srv__JointModes_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
trossen_widowx_interfaces__srv__JointModes_Request__Sequence__destroy(trossen_widowx_interfaces__srv__JointModes_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    trossen_widowx_interfaces__srv__JointModes_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
trossen_widowx_interfaces__srv__JointModes_Request__Sequence__are_equal(const trossen_widowx_interfaces__srv__JointModes_Request__Sequence * lhs, const trossen_widowx_interfaces__srv__JointModes_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!trossen_widowx_interfaces__srv__JointModes_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
trossen_widowx_interfaces__srv__JointModes_Request__Sequence__copy(
  const trossen_widowx_interfaces__srv__JointModes_Request__Sequence * input,
  trossen_widowx_interfaces__srv__JointModes_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(trossen_widowx_interfaces__srv__JointModes_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    trossen_widowx_interfaces__srv__JointModes_Request * data =
      (trossen_widowx_interfaces__srv__JointModes_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!trossen_widowx_interfaces__srv__JointModes_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          trossen_widowx_interfaces__srv__JointModes_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!trossen_widowx_interfaces__srv__JointModes_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
trossen_widowx_interfaces__srv__JointModes_Response__init(trossen_widowx_interfaces__srv__JointModes_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
trossen_widowx_interfaces__srv__JointModes_Response__fini(trossen_widowx_interfaces__srv__JointModes_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
trossen_widowx_interfaces__srv__JointModes_Response__are_equal(const trossen_widowx_interfaces__srv__JointModes_Response * lhs, const trossen_widowx_interfaces__srv__JointModes_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
trossen_widowx_interfaces__srv__JointModes_Response__copy(
  const trossen_widowx_interfaces__srv__JointModes_Response * input,
  trossen_widowx_interfaces__srv__JointModes_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

trossen_widowx_interfaces__srv__JointModes_Response *
trossen_widowx_interfaces__srv__JointModes_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  trossen_widowx_interfaces__srv__JointModes_Response * msg = (trossen_widowx_interfaces__srv__JointModes_Response *)allocator.allocate(sizeof(trossen_widowx_interfaces__srv__JointModes_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(trossen_widowx_interfaces__srv__JointModes_Response));
  bool success = trossen_widowx_interfaces__srv__JointModes_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
trossen_widowx_interfaces__srv__JointModes_Response__destroy(trossen_widowx_interfaces__srv__JointModes_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    trossen_widowx_interfaces__srv__JointModes_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
trossen_widowx_interfaces__srv__JointModes_Response__Sequence__init(trossen_widowx_interfaces__srv__JointModes_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  trossen_widowx_interfaces__srv__JointModes_Response * data = NULL;

  if (size) {
    data = (trossen_widowx_interfaces__srv__JointModes_Response *)allocator.zero_allocate(size, sizeof(trossen_widowx_interfaces__srv__JointModes_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = trossen_widowx_interfaces__srv__JointModes_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        trossen_widowx_interfaces__srv__JointModes_Response__fini(&data[i - 1]);
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
trossen_widowx_interfaces__srv__JointModes_Response__Sequence__fini(trossen_widowx_interfaces__srv__JointModes_Response__Sequence * array)
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
      trossen_widowx_interfaces__srv__JointModes_Response__fini(&array->data[i]);
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

trossen_widowx_interfaces__srv__JointModes_Response__Sequence *
trossen_widowx_interfaces__srv__JointModes_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  trossen_widowx_interfaces__srv__JointModes_Response__Sequence * array = (trossen_widowx_interfaces__srv__JointModes_Response__Sequence *)allocator.allocate(sizeof(trossen_widowx_interfaces__srv__JointModes_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = trossen_widowx_interfaces__srv__JointModes_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
trossen_widowx_interfaces__srv__JointModes_Response__Sequence__destroy(trossen_widowx_interfaces__srv__JointModes_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    trossen_widowx_interfaces__srv__JointModes_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
trossen_widowx_interfaces__srv__JointModes_Response__Sequence__are_equal(const trossen_widowx_interfaces__srv__JointModes_Response__Sequence * lhs, const trossen_widowx_interfaces__srv__JointModes_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!trossen_widowx_interfaces__srv__JointModes_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
trossen_widowx_interfaces__srv__JointModes_Response__Sequence__copy(
  const trossen_widowx_interfaces__srv__JointModes_Response__Sequence * input,
  trossen_widowx_interfaces__srv__JointModes_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(trossen_widowx_interfaces__srv__JointModes_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    trossen_widowx_interfaces__srv__JointModes_Response * data =
      (trossen_widowx_interfaces__srv__JointModes_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!trossen_widowx_interfaces__srv__JointModes_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          trossen_widowx_interfaces__srv__JointModes_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!trossen_widowx_interfaces__srv__JointModes_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

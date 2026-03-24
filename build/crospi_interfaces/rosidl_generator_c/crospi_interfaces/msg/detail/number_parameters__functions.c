// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from crospi_interfaces:msg/NumberParameters.idl
// generated code does not contain a copyright notice
#include "crospi_interfaces/msg/detail/number_parameters__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
crospi_interfaces__msg__NumberParameters__init(crospi_interfaces__msg__NumberParameters * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    crospi_interfaces__msg__NumberParameters__fini(msg);
    return false;
  }
  // value
  return true;
}

void
crospi_interfaces__msg__NumberParameters__fini(crospi_interfaces__msg__NumberParameters * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // value
}

bool
crospi_interfaces__msg__NumberParameters__are_equal(const crospi_interfaces__msg__NumberParameters * lhs, const crospi_interfaces__msg__NumberParameters * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
crospi_interfaces__msg__NumberParameters__copy(
  const crospi_interfaces__msg__NumberParameters * input,
  crospi_interfaces__msg__NumberParameters * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // value
  output->value = input->value;
  return true;
}

crospi_interfaces__msg__NumberParameters *
crospi_interfaces__msg__NumberParameters__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crospi_interfaces__msg__NumberParameters * msg = (crospi_interfaces__msg__NumberParameters *)allocator.allocate(sizeof(crospi_interfaces__msg__NumberParameters), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crospi_interfaces__msg__NumberParameters));
  bool success = crospi_interfaces__msg__NumberParameters__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
crospi_interfaces__msg__NumberParameters__destroy(crospi_interfaces__msg__NumberParameters * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    crospi_interfaces__msg__NumberParameters__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
crospi_interfaces__msg__NumberParameters__Sequence__init(crospi_interfaces__msg__NumberParameters__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crospi_interfaces__msg__NumberParameters * data = NULL;

  if (size) {
    data = (crospi_interfaces__msg__NumberParameters *)allocator.zero_allocate(size, sizeof(crospi_interfaces__msg__NumberParameters), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crospi_interfaces__msg__NumberParameters__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crospi_interfaces__msg__NumberParameters__fini(&data[i - 1]);
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
crospi_interfaces__msg__NumberParameters__Sequence__fini(crospi_interfaces__msg__NumberParameters__Sequence * array)
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
      crospi_interfaces__msg__NumberParameters__fini(&array->data[i]);
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

crospi_interfaces__msg__NumberParameters__Sequence *
crospi_interfaces__msg__NumberParameters__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crospi_interfaces__msg__NumberParameters__Sequence * array = (crospi_interfaces__msg__NumberParameters__Sequence *)allocator.allocate(sizeof(crospi_interfaces__msg__NumberParameters__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = crospi_interfaces__msg__NumberParameters__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
crospi_interfaces__msg__NumberParameters__Sequence__destroy(crospi_interfaces__msg__NumberParameters__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    crospi_interfaces__msg__NumberParameters__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
crospi_interfaces__msg__NumberParameters__Sequence__are_equal(const crospi_interfaces__msg__NumberParameters__Sequence * lhs, const crospi_interfaces__msg__NumberParameters__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crospi_interfaces__msg__NumberParameters__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crospi_interfaces__msg__NumberParameters__Sequence__copy(
  const crospi_interfaces__msg__NumberParameters__Sequence * input,
  crospi_interfaces__msg__NumberParameters__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crospi_interfaces__msg__NumberParameters);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    crospi_interfaces__msg__NumberParameters * data =
      (crospi_interfaces__msg__NumberParameters *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crospi_interfaces__msg__NumberParameters__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          crospi_interfaces__msg__NumberParameters__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!crospi_interfaces__msg__NumberParameters__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

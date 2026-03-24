// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from crospi_interfaces:msg/Vector3Parameters.idl
// generated code does not contain a copyright notice
#include "crospi_interfaces/msg/detail/vector3_parameters__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `value`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
crospi_interfaces__msg__Vector3Parameters__init(crospi_interfaces__msg__Vector3Parameters * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    crospi_interfaces__msg__Vector3Parameters__fini(msg);
    return false;
  }
  // value
  if (!geometry_msgs__msg__Vector3__init(&msg->value)) {
    crospi_interfaces__msg__Vector3Parameters__fini(msg);
    return false;
  }
  return true;
}

void
crospi_interfaces__msg__Vector3Parameters__fini(crospi_interfaces__msg__Vector3Parameters * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // value
  geometry_msgs__msg__Vector3__fini(&msg->value);
}

bool
crospi_interfaces__msg__Vector3Parameters__are_equal(const crospi_interfaces__msg__Vector3Parameters * lhs, const crospi_interfaces__msg__Vector3Parameters * rhs)
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
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->value), &(rhs->value)))
  {
    return false;
  }
  return true;
}

bool
crospi_interfaces__msg__Vector3Parameters__copy(
  const crospi_interfaces__msg__Vector3Parameters * input,
  crospi_interfaces__msg__Vector3Parameters * output)
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
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->value), &(output->value)))
  {
    return false;
  }
  return true;
}

crospi_interfaces__msg__Vector3Parameters *
crospi_interfaces__msg__Vector3Parameters__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crospi_interfaces__msg__Vector3Parameters * msg = (crospi_interfaces__msg__Vector3Parameters *)allocator.allocate(sizeof(crospi_interfaces__msg__Vector3Parameters), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crospi_interfaces__msg__Vector3Parameters));
  bool success = crospi_interfaces__msg__Vector3Parameters__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
crospi_interfaces__msg__Vector3Parameters__destroy(crospi_interfaces__msg__Vector3Parameters * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    crospi_interfaces__msg__Vector3Parameters__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
crospi_interfaces__msg__Vector3Parameters__Sequence__init(crospi_interfaces__msg__Vector3Parameters__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crospi_interfaces__msg__Vector3Parameters * data = NULL;

  if (size) {
    data = (crospi_interfaces__msg__Vector3Parameters *)allocator.zero_allocate(size, sizeof(crospi_interfaces__msg__Vector3Parameters), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crospi_interfaces__msg__Vector3Parameters__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crospi_interfaces__msg__Vector3Parameters__fini(&data[i - 1]);
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
crospi_interfaces__msg__Vector3Parameters__Sequence__fini(crospi_interfaces__msg__Vector3Parameters__Sequence * array)
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
      crospi_interfaces__msg__Vector3Parameters__fini(&array->data[i]);
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

crospi_interfaces__msg__Vector3Parameters__Sequence *
crospi_interfaces__msg__Vector3Parameters__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crospi_interfaces__msg__Vector3Parameters__Sequence * array = (crospi_interfaces__msg__Vector3Parameters__Sequence *)allocator.allocate(sizeof(crospi_interfaces__msg__Vector3Parameters__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = crospi_interfaces__msg__Vector3Parameters__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
crospi_interfaces__msg__Vector3Parameters__Sequence__destroy(crospi_interfaces__msg__Vector3Parameters__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    crospi_interfaces__msg__Vector3Parameters__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
crospi_interfaces__msg__Vector3Parameters__Sequence__are_equal(const crospi_interfaces__msg__Vector3Parameters__Sequence * lhs, const crospi_interfaces__msg__Vector3Parameters__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crospi_interfaces__msg__Vector3Parameters__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crospi_interfaces__msg__Vector3Parameters__Sequence__copy(
  const crospi_interfaces__msg__Vector3Parameters__Sequence * input,
  crospi_interfaces__msg__Vector3Parameters__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crospi_interfaces__msg__Vector3Parameters);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    crospi_interfaces__msg__Vector3Parameters * data =
      (crospi_interfaces__msg__Vector3Parameters *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crospi_interfaces__msg__Vector3Parameters__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          crospi_interfaces__msg__Vector3Parameters__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!crospi_interfaces__msg__Vector3Parameters__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

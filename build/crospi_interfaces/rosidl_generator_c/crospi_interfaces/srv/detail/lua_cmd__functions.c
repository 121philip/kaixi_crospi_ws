// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from crospi_interfaces:srv/LuaCmd.idl
// generated code does not contain a copyright notice
#include "crospi_interfaces/srv/detail/lua_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `cmd`
#include "rosidl_runtime_c/string_functions.h"

bool
crospi_interfaces__srv__LuaCmd_Request__init(crospi_interfaces__srv__LuaCmd_Request * msg)
{
  if (!msg) {
    return false;
  }
  // cmd
  if (!rosidl_runtime_c__String__init(&msg->cmd)) {
    crospi_interfaces__srv__LuaCmd_Request__fini(msg);
    return false;
  }
  return true;
}

void
crospi_interfaces__srv__LuaCmd_Request__fini(crospi_interfaces__srv__LuaCmd_Request * msg)
{
  if (!msg) {
    return;
  }
  // cmd
  rosidl_runtime_c__String__fini(&msg->cmd);
}

bool
crospi_interfaces__srv__LuaCmd_Request__are_equal(const crospi_interfaces__srv__LuaCmd_Request * lhs, const crospi_interfaces__srv__LuaCmd_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cmd
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->cmd), &(rhs->cmd)))
  {
    return false;
  }
  return true;
}

bool
crospi_interfaces__srv__LuaCmd_Request__copy(
  const crospi_interfaces__srv__LuaCmd_Request * input,
  crospi_interfaces__srv__LuaCmd_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // cmd
  if (!rosidl_runtime_c__String__copy(
      &(input->cmd), &(output->cmd)))
  {
    return false;
  }
  return true;
}

crospi_interfaces__srv__LuaCmd_Request *
crospi_interfaces__srv__LuaCmd_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crospi_interfaces__srv__LuaCmd_Request * msg = (crospi_interfaces__srv__LuaCmd_Request *)allocator.allocate(sizeof(crospi_interfaces__srv__LuaCmd_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crospi_interfaces__srv__LuaCmd_Request));
  bool success = crospi_interfaces__srv__LuaCmd_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
crospi_interfaces__srv__LuaCmd_Request__destroy(crospi_interfaces__srv__LuaCmd_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    crospi_interfaces__srv__LuaCmd_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
crospi_interfaces__srv__LuaCmd_Request__Sequence__init(crospi_interfaces__srv__LuaCmd_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crospi_interfaces__srv__LuaCmd_Request * data = NULL;

  if (size) {
    data = (crospi_interfaces__srv__LuaCmd_Request *)allocator.zero_allocate(size, sizeof(crospi_interfaces__srv__LuaCmd_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crospi_interfaces__srv__LuaCmd_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crospi_interfaces__srv__LuaCmd_Request__fini(&data[i - 1]);
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
crospi_interfaces__srv__LuaCmd_Request__Sequence__fini(crospi_interfaces__srv__LuaCmd_Request__Sequence * array)
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
      crospi_interfaces__srv__LuaCmd_Request__fini(&array->data[i]);
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

crospi_interfaces__srv__LuaCmd_Request__Sequence *
crospi_interfaces__srv__LuaCmd_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crospi_interfaces__srv__LuaCmd_Request__Sequence * array = (crospi_interfaces__srv__LuaCmd_Request__Sequence *)allocator.allocate(sizeof(crospi_interfaces__srv__LuaCmd_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = crospi_interfaces__srv__LuaCmd_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
crospi_interfaces__srv__LuaCmd_Request__Sequence__destroy(crospi_interfaces__srv__LuaCmd_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    crospi_interfaces__srv__LuaCmd_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
crospi_interfaces__srv__LuaCmd_Request__Sequence__are_equal(const crospi_interfaces__srv__LuaCmd_Request__Sequence * lhs, const crospi_interfaces__srv__LuaCmd_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crospi_interfaces__srv__LuaCmd_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crospi_interfaces__srv__LuaCmd_Request__Sequence__copy(
  const crospi_interfaces__srv__LuaCmd_Request__Sequence * input,
  crospi_interfaces__srv__LuaCmd_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crospi_interfaces__srv__LuaCmd_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    crospi_interfaces__srv__LuaCmd_Request * data =
      (crospi_interfaces__srv__LuaCmd_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crospi_interfaces__srv__LuaCmd_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          crospi_interfaces__srv__LuaCmd_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!crospi_interfaces__srv__LuaCmd_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `response`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
crospi_interfaces__srv__LuaCmd_Response__init(crospi_interfaces__srv__LuaCmd_Response * msg)
{
  if (!msg) {
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__init(&msg->response)) {
    crospi_interfaces__srv__LuaCmd_Response__fini(msg);
    return false;
  }
  return true;
}

void
crospi_interfaces__srv__LuaCmd_Response__fini(crospi_interfaces__srv__LuaCmd_Response * msg)
{
  if (!msg) {
    return;
  }
  // response
  rosidl_runtime_c__String__fini(&msg->response);
}

bool
crospi_interfaces__srv__LuaCmd_Response__are_equal(const crospi_interfaces__srv__LuaCmd_Response * lhs, const crospi_interfaces__srv__LuaCmd_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
crospi_interfaces__srv__LuaCmd_Response__copy(
  const crospi_interfaces__srv__LuaCmd_Response * input,
  crospi_interfaces__srv__LuaCmd_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

crospi_interfaces__srv__LuaCmd_Response *
crospi_interfaces__srv__LuaCmd_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crospi_interfaces__srv__LuaCmd_Response * msg = (crospi_interfaces__srv__LuaCmd_Response *)allocator.allocate(sizeof(crospi_interfaces__srv__LuaCmd_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crospi_interfaces__srv__LuaCmd_Response));
  bool success = crospi_interfaces__srv__LuaCmd_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
crospi_interfaces__srv__LuaCmd_Response__destroy(crospi_interfaces__srv__LuaCmd_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    crospi_interfaces__srv__LuaCmd_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
crospi_interfaces__srv__LuaCmd_Response__Sequence__init(crospi_interfaces__srv__LuaCmd_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crospi_interfaces__srv__LuaCmd_Response * data = NULL;

  if (size) {
    data = (crospi_interfaces__srv__LuaCmd_Response *)allocator.zero_allocate(size, sizeof(crospi_interfaces__srv__LuaCmd_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crospi_interfaces__srv__LuaCmd_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crospi_interfaces__srv__LuaCmd_Response__fini(&data[i - 1]);
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
crospi_interfaces__srv__LuaCmd_Response__Sequence__fini(crospi_interfaces__srv__LuaCmd_Response__Sequence * array)
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
      crospi_interfaces__srv__LuaCmd_Response__fini(&array->data[i]);
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

crospi_interfaces__srv__LuaCmd_Response__Sequence *
crospi_interfaces__srv__LuaCmd_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  crospi_interfaces__srv__LuaCmd_Response__Sequence * array = (crospi_interfaces__srv__LuaCmd_Response__Sequence *)allocator.allocate(sizeof(crospi_interfaces__srv__LuaCmd_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = crospi_interfaces__srv__LuaCmd_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
crospi_interfaces__srv__LuaCmd_Response__Sequence__destroy(crospi_interfaces__srv__LuaCmd_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    crospi_interfaces__srv__LuaCmd_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
crospi_interfaces__srv__LuaCmd_Response__Sequence__are_equal(const crospi_interfaces__srv__LuaCmd_Response__Sequence * lhs, const crospi_interfaces__srv__LuaCmd_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!crospi_interfaces__srv__LuaCmd_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
crospi_interfaces__srv__LuaCmd_Response__Sequence__copy(
  const crospi_interfaces__srv__LuaCmd_Response__Sequence * input,
  crospi_interfaces__srv__LuaCmd_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(crospi_interfaces__srv__LuaCmd_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    crospi_interfaces__srv__LuaCmd_Response * data =
      (crospi_interfaces__srv__LuaCmd_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!crospi_interfaces__srv__LuaCmd_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          crospi_interfaces__srv__LuaCmd_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!crospi_interfaces__srv__LuaCmd_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

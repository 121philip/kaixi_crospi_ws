// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from crospi_interfaces:msg/OutputDerivatives.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "crospi_interfaces/msg/detail/output_derivatives__rosidl_typesupport_introspection_c.h"
#include "crospi_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "crospi_interfaces/msg/detail/output_derivatives__functions.h"
#include "crospi_interfaces/msg/detail/output_derivatives__struct.h"


// Include directives for member types
// Member `names`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
// Member `is_declared`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__OutputDerivatives_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  crospi_interfaces__msg__OutputDerivatives__init(message_memory);
}

void crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__OutputDerivatives_fini_function(void * message_memory)
{
  crospi_interfaces__msg__OutputDerivatives__fini(message_memory);
}

size_t crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__size_function__OutputDerivatives__names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__get_const_function__OutputDerivatives__names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__get_function__OutputDerivatives__names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__fetch_function__OutputDerivatives__names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__get_const_function__OutputDerivatives__names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__assign_function__OutputDerivatives__names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__get_function__OutputDerivatives__names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__resize_function__OutputDerivatives__names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__size_function__OutputDerivatives__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__get_const_function__OutputDerivatives__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__get_function__OutputDerivatives__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__fetch_function__OutputDerivatives__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__get_const_function__OutputDerivatives__data(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__assign_function__OutputDerivatives__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__get_function__OutputDerivatives__data(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__resize_function__OutputDerivatives__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__size_function__OutputDerivatives__is_declared(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__get_const_function__OutputDerivatives__is_declared(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__get_function__OutputDerivatives__is_declared(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__fetch_function__OutputDerivatives__is_declared(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__get_const_function__OutputDerivatives__is_declared(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__assign_function__OutputDerivatives__is_declared(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__get_function__OutputDerivatives__is_declared(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__resize_function__OutputDerivatives__is_declared(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__OutputDerivatives_message_member_array[3] = {
  {
    "names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crospi_interfaces__msg__OutputDerivatives, names),  // bytes offset in struct
    NULL,  // default value
    crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__size_function__OutputDerivatives__names,  // size() function pointer
    crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__get_const_function__OutputDerivatives__names,  // get_const(index) function pointer
    crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__get_function__OutputDerivatives__names,  // get(index) function pointer
    crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__fetch_function__OutputDerivatives__names,  // fetch(index, &value) function pointer
    crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__assign_function__OutputDerivatives__names,  // assign(index, value) function pointer
    crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__resize_function__OutputDerivatives__names  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crospi_interfaces__msg__OutputDerivatives, data),  // bytes offset in struct
    NULL,  // default value
    crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__size_function__OutputDerivatives__data,  // size() function pointer
    crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__get_const_function__OutputDerivatives__data,  // get_const(index) function pointer
    crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__get_function__OutputDerivatives__data,  // get(index) function pointer
    crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__fetch_function__OutputDerivatives__data,  // fetch(index, &value) function pointer
    crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__assign_function__OutputDerivatives__data,  // assign(index, value) function pointer
    crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__resize_function__OutputDerivatives__data  // resize(index) function pointer
  },
  {
    "is_declared",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crospi_interfaces__msg__OutputDerivatives, is_declared),  // bytes offset in struct
    NULL,  // default value
    crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__size_function__OutputDerivatives__is_declared,  // size() function pointer
    crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__get_const_function__OutputDerivatives__is_declared,  // get_const(index) function pointer
    crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__get_function__OutputDerivatives__is_declared,  // get(index) function pointer
    crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__fetch_function__OutputDerivatives__is_declared,  // fetch(index, &value) function pointer
    crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__assign_function__OutputDerivatives__is_declared,  // assign(index, value) function pointer
    crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__resize_function__OutputDerivatives__is_declared  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__OutputDerivatives_message_members = {
  "crospi_interfaces__msg",  // message namespace
  "OutputDerivatives",  // message name
  3,  // number of fields
  sizeof(crospi_interfaces__msg__OutputDerivatives),
  crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__OutputDerivatives_message_member_array,  // message members
  crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__OutputDerivatives_init_function,  // function to initialize message memory (memory has to be allocated)
  crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__OutputDerivatives_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__OutputDerivatives_message_type_support_handle = {
  0,
  &crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__OutputDerivatives_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crospi_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crospi_interfaces, msg, OutputDerivatives)() {
  if (!crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__OutputDerivatives_message_type_support_handle.typesupport_identifier) {
    crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__OutputDerivatives_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &crospi_interfaces__msg__OutputDerivatives__rosidl_typesupport_introspection_c__OutputDerivatives_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

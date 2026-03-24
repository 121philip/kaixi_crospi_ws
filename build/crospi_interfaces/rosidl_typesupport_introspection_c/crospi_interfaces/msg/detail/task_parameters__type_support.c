// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from crospi_interfaces:msg/TaskParameters.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "crospi_interfaces/msg/detail/task_parameters__rosidl_typesupport_introspection_c.h"
#include "crospi_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "crospi_interfaces/msg/detail/task_parameters__functions.h"
#include "crospi_interfaces/msg/detail/task_parameters__struct.h"


// Include directives for member types
// Member `numbers`
#include "crospi_interfaces/msg/number_parameters.h"
// Member `numbers`
#include "crospi_interfaces/msg/detail/number_parameters__rosidl_typesupport_introspection_c.h"
// Member `poses`
#include "crospi_interfaces/msg/pose_parameters.h"
// Member `poses`
#include "crospi_interfaces/msg/detail/pose_parameters__rosidl_typesupport_introspection_c.h"
// Member `vector3s`
#include "crospi_interfaces/msg/vector3_parameters.h"
// Member `vector3s`
#include "crospi_interfaces/msg/detail/vector3_parameters__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__TaskParameters_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  crospi_interfaces__msg__TaskParameters__init(message_memory);
}

void crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__TaskParameters_fini_function(void * message_memory)
{
  crospi_interfaces__msg__TaskParameters__fini(message_memory);
}

size_t crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__size_function__TaskParameters__numbers(
  const void * untyped_member)
{
  const crospi_interfaces__msg__NumberParameters__Sequence * member =
    (const crospi_interfaces__msg__NumberParameters__Sequence *)(untyped_member);
  return member->size;
}

const void * crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__get_const_function__TaskParameters__numbers(
  const void * untyped_member, size_t index)
{
  const crospi_interfaces__msg__NumberParameters__Sequence * member =
    (const crospi_interfaces__msg__NumberParameters__Sequence *)(untyped_member);
  return &member->data[index];
}

void * crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__get_function__TaskParameters__numbers(
  void * untyped_member, size_t index)
{
  crospi_interfaces__msg__NumberParameters__Sequence * member =
    (crospi_interfaces__msg__NumberParameters__Sequence *)(untyped_member);
  return &member->data[index];
}

void crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__fetch_function__TaskParameters__numbers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const crospi_interfaces__msg__NumberParameters * item =
    ((const crospi_interfaces__msg__NumberParameters *)
    crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__get_const_function__TaskParameters__numbers(untyped_member, index));
  crospi_interfaces__msg__NumberParameters * value =
    (crospi_interfaces__msg__NumberParameters *)(untyped_value);
  *value = *item;
}

void crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__assign_function__TaskParameters__numbers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  crospi_interfaces__msg__NumberParameters * item =
    ((crospi_interfaces__msg__NumberParameters *)
    crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__get_function__TaskParameters__numbers(untyped_member, index));
  const crospi_interfaces__msg__NumberParameters * value =
    (const crospi_interfaces__msg__NumberParameters *)(untyped_value);
  *item = *value;
}

bool crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__resize_function__TaskParameters__numbers(
  void * untyped_member, size_t size)
{
  crospi_interfaces__msg__NumberParameters__Sequence * member =
    (crospi_interfaces__msg__NumberParameters__Sequence *)(untyped_member);
  crospi_interfaces__msg__NumberParameters__Sequence__fini(member);
  return crospi_interfaces__msg__NumberParameters__Sequence__init(member, size);
}

size_t crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__size_function__TaskParameters__poses(
  const void * untyped_member)
{
  const crospi_interfaces__msg__PoseParameters__Sequence * member =
    (const crospi_interfaces__msg__PoseParameters__Sequence *)(untyped_member);
  return member->size;
}

const void * crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__get_const_function__TaskParameters__poses(
  const void * untyped_member, size_t index)
{
  const crospi_interfaces__msg__PoseParameters__Sequence * member =
    (const crospi_interfaces__msg__PoseParameters__Sequence *)(untyped_member);
  return &member->data[index];
}

void * crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__get_function__TaskParameters__poses(
  void * untyped_member, size_t index)
{
  crospi_interfaces__msg__PoseParameters__Sequence * member =
    (crospi_interfaces__msg__PoseParameters__Sequence *)(untyped_member);
  return &member->data[index];
}

void crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__fetch_function__TaskParameters__poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const crospi_interfaces__msg__PoseParameters * item =
    ((const crospi_interfaces__msg__PoseParameters *)
    crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__get_const_function__TaskParameters__poses(untyped_member, index));
  crospi_interfaces__msg__PoseParameters * value =
    (crospi_interfaces__msg__PoseParameters *)(untyped_value);
  *value = *item;
}

void crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__assign_function__TaskParameters__poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  crospi_interfaces__msg__PoseParameters * item =
    ((crospi_interfaces__msg__PoseParameters *)
    crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__get_function__TaskParameters__poses(untyped_member, index));
  const crospi_interfaces__msg__PoseParameters * value =
    (const crospi_interfaces__msg__PoseParameters *)(untyped_value);
  *item = *value;
}

bool crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__resize_function__TaskParameters__poses(
  void * untyped_member, size_t size)
{
  crospi_interfaces__msg__PoseParameters__Sequence * member =
    (crospi_interfaces__msg__PoseParameters__Sequence *)(untyped_member);
  crospi_interfaces__msg__PoseParameters__Sequence__fini(member);
  return crospi_interfaces__msg__PoseParameters__Sequence__init(member, size);
}

size_t crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__size_function__TaskParameters__vector3s(
  const void * untyped_member)
{
  const crospi_interfaces__msg__Vector3Parameters__Sequence * member =
    (const crospi_interfaces__msg__Vector3Parameters__Sequence *)(untyped_member);
  return member->size;
}

const void * crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__get_const_function__TaskParameters__vector3s(
  const void * untyped_member, size_t index)
{
  const crospi_interfaces__msg__Vector3Parameters__Sequence * member =
    (const crospi_interfaces__msg__Vector3Parameters__Sequence *)(untyped_member);
  return &member->data[index];
}

void * crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__get_function__TaskParameters__vector3s(
  void * untyped_member, size_t index)
{
  crospi_interfaces__msg__Vector3Parameters__Sequence * member =
    (crospi_interfaces__msg__Vector3Parameters__Sequence *)(untyped_member);
  return &member->data[index];
}

void crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__fetch_function__TaskParameters__vector3s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const crospi_interfaces__msg__Vector3Parameters * item =
    ((const crospi_interfaces__msg__Vector3Parameters *)
    crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__get_const_function__TaskParameters__vector3s(untyped_member, index));
  crospi_interfaces__msg__Vector3Parameters * value =
    (crospi_interfaces__msg__Vector3Parameters *)(untyped_value);
  *value = *item;
}

void crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__assign_function__TaskParameters__vector3s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  crospi_interfaces__msg__Vector3Parameters * item =
    ((crospi_interfaces__msg__Vector3Parameters *)
    crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__get_function__TaskParameters__vector3s(untyped_member, index));
  const crospi_interfaces__msg__Vector3Parameters * value =
    (const crospi_interfaces__msg__Vector3Parameters *)(untyped_value);
  *item = *value;
}

bool crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__resize_function__TaskParameters__vector3s(
  void * untyped_member, size_t size)
{
  crospi_interfaces__msg__Vector3Parameters__Sequence * member =
    (crospi_interfaces__msg__Vector3Parameters__Sequence *)(untyped_member);
  crospi_interfaces__msg__Vector3Parameters__Sequence__fini(member);
  return crospi_interfaces__msg__Vector3Parameters__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__TaskParameters_message_member_array[3] = {
  {
    "numbers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crospi_interfaces__msg__TaskParameters, numbers),  // bytes offset in struct
    NULL,  // default value
    crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__size_function__TaskParameters__numbers,  // size() function pointer
    crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__get_const_function__TaskParameters__numbers,  // get_const(index) function pointer
    crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__get_function__TaskParameters__numbers,  // get(index) function pointer
    crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__fetch_function__TaskParameters__numbers,  // fetch(index, &value) function pointer
    crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__assign_function__TaskParameters__numbers,  // assign(index, value) function pointer
    crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__resize_function__TaskParameters__numbers  // resize(index) function pointer
  },
  {
    "poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crospi_interfaces__msg__TaskParameters, poses),  // bytes offset in struct
    NULL,  // default value
    crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__size_function__TaskParameters__poses,  // size() function pointer
    crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__get_const_function__TaskParameters__poses,  // get_const(index) function pointer
    crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__get_function__TaskParameters__poses,  // get(index) function pointer
    crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__fetch_function__TaskParameters__poses,  // fetch(index, &value) function pointer
    crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__assign_function__TaskParameters__poses,  // assign(index, value) function pointer
    crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__resize_function__TaskParameters__poses  // resize(index) function pointer
  },
  {
    "vector3s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(crospi_interfaces__msg__TaskParameters, vector3s),  // bytes offset in struct
    NULL,  // default value
    crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__size_function__TaskParameters__vector3s,  // size() function pointer
    crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__get_const_function__TaskParameters__vector3s,  // get_const(index) function pointer
    crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__get_function__TaskParameters__vector3s,  // get(index) function pointer
    crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__fetch_function__TaskParameters__vector3s,  // fetch(index, &value) function pointer
    crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__assign_function__TaskParameters__vector3s,  // assign(index, value) function pointer
    crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__resize_function__TaskParameters__vector3s  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__TaskParameters_message_members = {
  "crospi_interfaces__msg",  // message namespace
  "TaskParameters",  // message name
  3,  // number of fields
  sizeof(crospi_interfaces__msg__TaskParameters),
  crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__TaskParameters_message_member_array,  // message members
  crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__TaskParameters_init_function,  // function to initialize message memory (memory has to be allocated)
  crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__TaskParameters_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__TaskParameters_message_type_support_handle = {
  0,
  &crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__TaskParameters_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_crospi_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crospi_interfaces, msg, TaskParameters)() {
  crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__TaskParameters_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crospi_interfaces, msg, NumberParameters)();
  crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__TaskParameters_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crospi_interfaces, msg, PoseParameters)();
  crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__TaskParameters_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, crospi_interfaces, msg, Vector3Parameters)();
  if (!crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__TaskParameters_message_type_support_handle.typesupport_identifier) {
    crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__TaskParameters_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &crospi_interfaces__msg__TaskParameters__rosidl_typesupport_introspection_c__TaskParameters_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

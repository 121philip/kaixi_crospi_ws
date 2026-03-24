// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from betfsm_interfaces:msg/Trace.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "betfsm_interfaces/msg/detail/trace__rosidl_typesupport_introspection_c.h"
#include "betfsm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "betfsm_interfaces/msg/detail/trace__functions.h"
#include "betfsm_interfaces/msg/detail/trace__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `active_states`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void betfsm_interfaces__msg__Trace__rosidl_typesupport_introspection_c__Trace_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  betfsm_interfaces__msg__Trace__init(message_memory);
}

void betfsm_interfaces__msg__Trace__rosidl_typesupport_introspection_c__Trace_fini_function(void * message_memory)
{
  betfsm_interfaces__msg__Trace__fini(message_memory);
}

size_t betfsm_interfaces__msg__Trace__rosidl_typesupport_introspection_c__size_function__Trace__active_states(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * betfsm_interfaces__msg__Trace__rosidl_typesupport_introspection_c__get_const_function__Trace__active_states(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * betfsm_interfaces__msg__Trace__rosidl_typesupport_introspection_c__get_function__Trace__active_states(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void betfsm_interfaces__msg__Trace__rosidl_typesupport_introspection_c__fetch_function__Trace__active_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    betfsm_interfaces__msg__Trace__rosidl_typesupport_introspection_c__get_const_function__Trace__active_states(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void betfsm_interfaces__msg__Trace__rosidl_typesupport_introspection_c__assign_function__Trace__active_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    betfsm_interfaces__msg__Trace__rosidl_typesupport_introspection_c__get_function__Trace__active_states(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool betfsm_interfaces__msg__Trace__rosidl_typesupport_introspection_c__resize_function__Trace__active_states(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember betfsm_interfaces__msg__Trace__rosidl_typesupport_introspection_c__Trace_message_member_array[2] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(betfsm_interfaces__msg__Trace, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "active_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(betfsm_interfaces__msg__Trace, active_states),  // bytes offset in struct
    NULL,  // default value
    betfsm_interfaces__msg__Trace__rosidl_typesupport_introspection_c__size_function__Trace__active_states,  // size() function pointer
    betfsm_interfaces__msg__Trace__rosidl_typesupport_introspection_c__get_const_function__Trace__active_states,  // get_const(index) function pointer
    betfsm_interfaces__msg__Trace__rosidl_typesupport_introspection_c__get_function__Trace__active_states,  // get(index) function pointer
    betfsm_interfaces__msg__Trace__rosidl_typesupport_introspection_c__fetch_function__Trace__active_states,  // fetch(index, &value) function pointer
    betfsm_interfaces__msg__Trace__rosidl_typesupport_introspection_c__assign_function__Trace__active_states,  // assign(index, value) function pointer
    betfsm_interfaces__msg__Trace__rosidl_typesupport_introspection_c__resize_function__Trace__active_states  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers betfsm_interfaces__msg__Trace__rosidl_typesupport_introspection_c__Trace_message_members = {
  "betfsm_interfaces__msg",  // message namespace
  "Trace",  // message name
  2,  // number of fields
  sizeof(betfsm_interfaces__msg__Trace),
  betfsm_interfaces__msg__Trace__rosidl_typesupport_introspection_c__Trace_message_member_array,  // message members
  betfsm_interfaces__msg__Trace__rosidl_typesupport_introspection_c__Trace_init_function,  // function to initialize message memory (memory has to be allocated)
  betfsm_interfaces__msg__Trace__rosidl_typesupport_introspection_c__Trace_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t betfsm_interfaces__msg__Trace__rosidl_typesupport_introspection_c__Trace_message_type_support_handle = {
  0,
  &betfsm_interfaces__msg__Trace__rosidl_typesupport_introspection_c__Trace_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_betfsm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, betfsm_interfaces, msg, Trace)() {
  betfsm_interfaces__msg__Trace__rosidl_typesupport_introspection_c__Trace_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!betfsm_interfaces__msg__Trace__rosidl_typesupport_introspection_c__Trace_message_type_support_handle.typesupport_identifier) {
    betfsm_interfaces__msg__Trace__rosidl_typesupport_introspection_c__Trace_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &betfsm_interfaces__msg__Trace__rosidl_typesupport_introspection_c__Trace_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

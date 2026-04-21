// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from trossen_widowx_interfaces:srv/JointModes.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "trossen_widowx_interfaces/srv/detail/joint_modes__rosidl_typesupport_introspection_c.h"
#include "trossen_widowx_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "trossen_widowx_interfaces/srv/detail/joint_modes__functions.h"
#include "trossen_widowx_interfaces/srv/detail/joint_modes__struct.h"


// Include directives for member types
// Member `joint_mode`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void trossen_widowx_interfaces__srv__JointModes_Request__rosidl_typesupport_introspection_c__JointModes_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  trossen_widowx_interfaces__srv__JointModes_Request__init(message_memory);
}

void trossen_widowx_interfaces__srv__JointModes_Request__rosidl_typesupport_introspection_c__JointModes_Request_fini_function(void * message_memory)
{
  trossen_widowx_interfaces__srv__JointModes_Request__fini(message_memory);
}

size_t trossen_widowx_interfaces__srv__JointModes_Request__rosidl_typesupport_introspection_c__size_function__JointModes_Request__joint_mode(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * trossen_widowx_interfaces__srv__JointModes_Request__rosidl_typesupport_introspection_c__get_const_function__JointModes_Request__joint_mode(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * trossen_widowx_interfaces__srv__JointModes_Request__rosidl_typesupport_introspection_c__get_function__JointModes_Request__joint_mode(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void trossen_widowx_interfaces__srv__JointModes_Request__rosidl_typesupport_introspection_c__fetch_function__JointModes_Request__joint_mode(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    trossen_widowx_interfaces__srv__JointModes_Request__rosidl_typesupport_introspection_c__get_const_function__JointModes_Request__joint_mode(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void trossen_widowx_interfaces__srv__JointModes_Request__rosidl_typesupport_introspection_c__assign_function__JointModes_Request__joint_mode(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    trossen_widowx_interfaces__srv__JointModes_Request__rosidl_typesupport_introspection_c__get_function__JointModes_Request__joint_mode(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool trossen_widowx_interfaces__srv__JointModes_Request__rosidl_typesupport_introspection_c__resize_function__JointModes_Request__joint_mode(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember trossen_widowx_interfaces__srv__JointModes_Request__rosidl_typesupport_introspection_c__JointModes_Request_message_member_array[1] = {
  {
    "joint_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(trossen_widowx_interfaces__srv__JointModes_Request, joint_mode),  // bytes offset in struct
    NULL,  // default value
    trossen_widowx_interfaces__srv__JointModes_Request__rosidl_typesupport_introspection_c__size_function__JointModes_Request__joint_mode,  // size() function pointer
    trossen_widowx_interfaces__srv__JointModes_Request__rosidl_typesupport_introspection_c__get_const_function__JointModes_Request__joint_mode,  // get_const(index) function pointer
    trossen_widowx_interfaces__srv__JointModes_Request__rosidl_typesupport_introspection_c__get_function__JointModes_Request__joint_mode,  // get(index) function pointer
    trossen_widowx_interfaces__srv__JointModes_Request__rosidl_typesupport_introspection_c__fetch_function__JointModes_Request__joint_mode,  // fetch(index, &value) function pointer
    trossen_widowx_interfaces__srv__JointModes_Request__rosidl_typesupport_introspection_c__assign_function__JointModes_Request__joint_mode,  // assign(index, value) function pointer
    trossen_widowx_interfaces__srv__JointModes_Request__rosidl_typesupport_introspection_c__resize_function__JointModes_Request__joint_mode  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers trossen_widowx_interfaces__srv__JointModes_Request__rosidl_typesupport_introspection_c__JointModes_Request_message_members = {
  "trossen_widowx_interfaces__srv",  // message namespace
  "JointModes_Request",  // message name
  1,  // number of fields
  sizeof(trossen_widowx_interfaces__srv__JointModes_Request),
  trossen_widowx_interfaces__srv__JointModes_Request__rosidl_typesupport_introspection_c__JointModes_Request_message_member_array,  // message members
  trossen_widowx_interfaces__srv__JointModes_Request__rosidl_typesupport_introspection_c__JointModes_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  trossen_widowx_interfaces__srv__JointModes_Request__rosidl_typesupport_introspection_c__JointModes_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t trossen_widowx_interfaces__srv__JointModes_Request__rosidl_typesupport_introspection_c__JointModes_Request_message_type_support_handle = {
  0,
  &trossen_widowx_interfaces__srv__JointModes_Request__rosidl_typesupport_introspection_c__JointModes_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_trossen_widowx_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trossen_widowx_interfaces, srv, JointModes_Request)() {
  if (!trossen_widowx_interfaces__srv__JointModes_Request__rosidl_typesupport_introspection_c__JointModes_Request_message_type_support_handle.typesupport_identifier) {
    trossen_widowx_interfaces__srv__JointModes_Request__rosidl_typesupport_introspection_c__JointModes_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &trossen_widowx_interfaces__srv__JointModes_Request__rosidl_typesupport_introspection_c__JointModes_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "trossen_widowx_interfaces/srv/detail/joint_modes__rosidl_typesupport_introspection_c.h"
// already included above
// #include "trossen_widowx_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "trossen_widowx_interfaces/srv/detail/joint_modes__functions.h"
// already included above
// #include "trossen_widowx_interfaces/srv/detail/joint_modes__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void trossen_widowx_interfaces__srv__JointModes_Response__rosidl_typesupport_introspection_c__JointModes_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  trossen_widowx_interfaces__srv__JointModes_Response__init(message_memory);
}

void trossen_widowx_interfaces__srv__JointModes_Response__rosidl_typesupport_introspection_c__JointModes_Response_fini_function(void * message_memory)
{
  trossen_widowx_interfaces__srv__JointModes_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember trossen_widowx_interfaces__srv__JointModes_Response__rosidl_typesupport_introspection_c__JointModes_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(trossen_widowx_interfaces__srv__JointModes_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers trossen_widowx_interfaces__srv__JointModes_Response__rosidl_typesupport_introspection_c__JointModes_Response_message_members = {
  "trossen_widowx_interfaces__srv",  // message namespace
  "JointModes_Response",  // message name
  1,  // number of fields
  sizeof(trossen_widowx_interfaces__srv__JointModes_Response),
  trossen_widowx_interfaces__srv__JointModes_Response__rosidl_typesupport_introspection_c__JointModes_Response_message_member_array,  // message members
  trossen_widowx_interfaces__srv__JointModes_Response__rosidl_typesupport_introspection_c__JointModes_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  trossen_widowx_interfaces__srv__JointModes_Response__rosidl_typesupport_introspection_c__JointModes_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t trossen_widowx_interfaces__srv__JointModes_Response__rosidl_typesupport_introspection_c__JointModes_Response_message_type_support_handle = {
  0,
  &trossen_widowx_interfaces__srv__JointModes_Response__rosidl_typesupport_introspection_c__JointModes_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_trossen_widowx_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trossen_widowx_interfaces, srv, JointModes_Response)() {
  if (!trossen_widowx_interfaces__srv__JointModes_Response__rosidl_typesupport_introspection_c__JointModes_Response_message_type_support_handle.typesupport_identifier) {
    trossen_widowx_interfaces__srv__JointModes_Response__rosidl_typesupport_introspection_c__JointModes_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &trossen_widowx_interfaces__srv__JointModes_Response__rosidl_typesupport_introspection_c__JointModes_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "trossen_widowx_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "trossen_widowx_interfaces/srv/detail/joint_modes__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers trossen_widowx_interfaces__srv__detail__joint_modes__rosidl_typesupport_introspection_c__JointModes_service_members = {
  "trossen_widowx_interfaces__srv",  // service namespace
  "JointModes",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // trossen_widowx_interfaces__srv__detail__joint_modes__rosidl_typesupport_introspection_c__JointModes_Request_message_type_support_handle,
  NULL  // response message
  // trossen_widowx_interfaces__srv__detail__joint_modes__rosidl_typesupport_introspection_c__JointModes_Response_message_type_support_handle
};

static rosidl_service_type_support_t trossen_widowx_interfaces__srv__detail__joint_modes__rosidl_typesupport_introspection_c__JointModes_service_type_support_handle = {
  0,
  &trossen_widowx_interfaces__srv__detail__joint_modes__rosidl_typesupport_introspection_c__JointModes_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trossen_widowx_interfaces, srv, JointModes_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trossen_widowx_interfaces, srv, JointModes_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_trossen_widowx_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trossen_widowx_interfaces, srv, JointModes)() {
  if (!trossen_widowx_interfaces__srv__detail__joint_modes__rosidl_typesupport_introspection_c__JointModes_service_type_support_handle.typesupport_identifier) {
    trossen_widowx_interfaces__srv__detail__joint_modes__rosidl_typesupport_introspection_c__JointModes_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)trossen_widowx_interfaces__srv__detail__joint_modes__rosidl_typesupport_introspection_c__JointModes_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trossen_widowx_interfaces, srv, JointModes_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trossen_widowx_interfaces, srv, JointModes_Response)()->data;
  }

  return &trossen_widowx_interfaces__srv__detail__joint_modes__rosidl_typesupport_introspection_c__JointModes_service_type_support_handle;
}

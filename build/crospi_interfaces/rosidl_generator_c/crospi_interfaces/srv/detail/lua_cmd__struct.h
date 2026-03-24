// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crospi_interfaces:srv/LuaCmd.idl
// generated code does not contain a copyright notice

#ifndef CROSPI_INTERFACES__SRV__DETAIL__LUA_CMD__STRUCT_H_
#define CROSPI_INTERFACES__SRV__DETAIL__LUA_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cmd'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LuaCmd in the package crospi_interfaces.
typedef struct crospi_interfaces__srv__LuaCmd_Request
{
  rosidl_runtime_c__String cmd;
} crospi_interfaces__srv__LuaCmd_Request;

// Struct for a sequence of crospi_interfaces__srv__LuaCmd_Request.
typedef struct crospi_interfaces__srv__LuaCmd_Request__Sequence
{
  crospi_interfaces__srv__LuaCmd_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crospi_interfaces__srv__LuaCmd_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LuaCmd in the package crospi_interfaces.
typedef struct crospi_interfaces__srv__LuaCmd_Response
{
  rosidl_runtime_c__String response;
} crospi_interfaces__srv__LuaCmd_Response;

// Struct for a sequence of crospi_interfaces__srv__LuaCmd_Response.
typedef struct crospi_interfaces__srv__LuaCmd_Response__Sequence
{
  crospi_interfaces__srv__LuaCmd_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} crospi_interfaces__srv__LuaCmd_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CROSPI_INTERFACES__SRV__DETAIL__LUA_CMD__STRUCT_H_

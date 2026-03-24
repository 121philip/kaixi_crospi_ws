// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from crospi_interfaces:srv/LuaCmd.idl
// generated code does not contain a copyright notice

#ifndef CROSPI_INTERFACES__SRV__DETAIL__LUA_CMD__STRUCT_HPP_
#define CROSPI_INTERFACES__SRV__DETAIL__LUA_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__crospi_interfaces__srv__LuaCmd_Request __attribute__((deprecated))
#else
# define DEPRECATED__crospi_interfaces__srv__LuaCmd_Request __declspec(deprecated)
#endif

namespace crospi_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LuaCmd_Request_
{
  using Type = LuaCmd_Request_<ContainerAllocator>;

  explicit LuaCmd_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd = "";
    }
  }

  explicit LuaCmd_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cmd(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd = "";
    }
  }

  // field types and members
  using _cmd_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cmd_type cmd;

  // setters for named parameter idiom
  Type & set__cmd(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->cmd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crospi_interfaces::srv::LuaCmd_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const crospi_interfaces::srv::LuaCmd_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crospi_interfaces::srv::LuaCmd_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crospi_interfaces::srv::LuaCmd_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crospi_interfaces::srv::LuaCmd_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crospi_interfaces::srv::LuaCmd_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crospi_interfaces::srv::LuaCmd_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crospi_interfaces::srv::LuaCmd_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crospi_interfaces::srv::LuaCmd_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crospi_interfaces::srv::LuaCmd_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crospi_interfaces__srv__LuaCmd_Request
    std::shared_ptr<crospi_interfaces::srv::LuaCmd_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crospi_interfaces__srv__LuaCmd_Request
    std::shared_ptr<crospi_interfaces::srv::LuaCmd_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LuaCmd_Request_ & other) const
  {
    if (this->cmd != other.cmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const LuaCmd_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LuaCmd_Request_

// alias to use template instance with default allocator
using LuaCmd_Request =
  crospi_interfaces::srv::LuaCmd_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace crospi_interfaces


#ifndef _WIN32
# define DEPRECATED__crospi_interfaces__srv__LuaCmd_Response __attribute__((deprecated))
#else
# define DEPRECATED__crospi_interfaces__srv__LuaCmd_Response __declspec(deprecated)
#endif

namespace crospi_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LuaCmd_Response_
{
  using Type = LuaCmd_Response_<ContainerAllocator>;

  explicit LuaCmd_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = "";
    }
  }

  explicit LuaCmd_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = "";
    }
  }

  // field types and members
  using _response_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__response(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crospi_interfaces::srv::LuaCmd_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const crospi_interfaces::srv::LuaCmd_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crospi_interfaces::srv::LuaCmd_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crospi_interfaces::srv::LuaCmd_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crospi_interfaces::srv::LuaCmd_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crospi_interfaces::srv::LuaCmd_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crospi_interfaces::srv::LuaCmd_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crospi_interfaces::srv::LuaCmd_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crospi_interfaces::srv::LuaCmd_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crospi_interfaces::srv::LuaCmd_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crospi_interfaces__srv__LuaCmd_Response
    std::shared_ptr<crospi_interfaces::srv::LuaCmd_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crospi_interfaces__srv__LuaCmd_Response
    std::shared_ptr<crospi_interfaces::srv::LuaCmd_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LuaCmd_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const LuaCmd_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LuaCmd_Response_

// alias to use template instance with default allocator
using LuaCmd_Response =
  crospi_interfaces::srv::LuaCmd_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace crospi_interfaces

namespace crospi_interfaces
{

namespace srv
{

struct LuaCmd
{
  using Request = crospi_interfaces::srv::LuaCmd_Request;
  using Response = crospi_interfaces::srv::LuaCmd_Response;
};

}  // namespace srv

}  // namespace crospi_interfaces

#endif  // CROSPI_INTERFACES__SRV__DETAIL__LUA_CMD__STRUCT_HPP_

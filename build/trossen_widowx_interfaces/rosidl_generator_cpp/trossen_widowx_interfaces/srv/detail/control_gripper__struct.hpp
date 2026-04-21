// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from trossen_widowx_interfaces:srv/ControlGripper.idl
// generated code does not contain a copyright notice

#ifndef TROSSEN_WIDOWX_INTERFACES__SRV__DETAIL__CONTROL_GRIPPER__STRUCT_HPP_
#define TROSSEN_WIDOWX_INTERFACES__SRV__DETAIL__CONTROL_GRIPPER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__trossen_widowx_interfaces__srv__ControlGripper_Request __attribute__((deprecated))
#else
# define DEPRECATED__trossen_widowx_interfaces__srv__ControlGripper_Request __declspec(deprecated)
#endif

namespace trossen_widowx_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ControlGripper_Request_
{
  using Type = ControlGripper_Request_<ContainerAllocator>;

  explicit ControlGripper_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position = 0.0;
      this->time = 0.0;
    }
  }

  explicit ControlGripper_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position = 0.0;
      this->time = 0.0;
    }
  }

  // field types and members
  using _position_type =
    double;
  _position_type position;
  using _time_type =
    double;
  _time_type time;

  // setters for named parameter idiom
  Type & set__position(
    const double & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__time(
    const double & _arg)
  {
    this->time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    trossen_widowx_interfaces::srv::ControlGripper_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const trossen_widowx_interfaces::srv::ControlGripper_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<trossen_widowx_interfaces::srv::ControlGripper_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<trossen_widowx_interfaces::srv::ControlGripper_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      trossen_widowx_interfaces::srv::ControlGripper_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<trossen_widowx_interfaces::srv::ControlGripper_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      trossen_widowx_interfaces::srv::ControlGripper_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<trossen_widowx_interfaces::srv::ControlGripper_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<trossen_widowx_interfaces::srv::ControlGripper_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<trossen_widowx_interfaces::srv::ControlGripper_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__trossen_widowx_interfaces__srv__ControlGripper_Request
    std::shared_ptr<trossen_widowx_interfaces::srv::ControlGripper_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__trossen_widowx_interfaces__srv__ControlGripper_Request
    std::shared_ptr<trossen_widowx_interfaces::srv::ControlGripper_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlGripper_Request_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlGripper_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlGripper_Request_

// alias to use template instance with default allocator
using ControlGripper_Request =
  trossen_widowx_interfaces::srv::ControlGripper_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace trossen_widowx_interfaces


#ifndef _WIN32
# define DEPRECATED__trossen_widowx_interfaces__srv__ControlGripper_Response __attribute__((deprecated))
#else
# define DEPRECATED__trossen_widowx_interfaces__srv__ControlGripper_Response __declspec(deprecated)
#endif

namespace trossen_widowx_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ControlGripper_Response_
{
  using Type = ControlGripper_Response_<ContainerAllocator>;

  explicit ControlGripper_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit ControlGripper_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    trossen_widowx_interfaces::srv::ControlGripper_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const trossen_widowx_interfaces::srv::ControlGripper_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<trossen_widowx_interfaces::srv::ControlGripper_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<trossen_widowx_interfaces::srv::ControlGripper_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      trossen_widowx_interfaces::srv::ControlGripper_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<trossen_widowx_interfaces::srv::ControlGripper_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      trossen_widowx_interfaces::srv::ControlGripper_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<trossen_widowx_interfaces::srv::ControlGripper_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<trossen_widowx_interfaces::srv::ControlGripper_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<trossen_widowx_interfaces::srv::ControlGripper_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__trossen_widowx_interfaces__srv__ControlGripper_Response
    std::shared_ptr<trossen_widowx_interfaces::srv::ControlGripper_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__trossen_widowx_interfaces__srv__ControlGripper_Response
    std::shared_ptr<trossen_widowx_interfaces::srv::ControlGripper_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlGripper_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlGripper_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlGripper_Response_

// alias to use template instance with default allocator
using ControlGripper_Response =
  trossen_widowx_interfaces::srv::ControlGripper_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace trossen_widowx_interfaces

namespace trossen_widowx_interfaces
{

namespace srv
{

struct ControlGripper
{
  using Request = trossen_widowx_interfaces::srv::ControlGripper_Request;
  using Response = trossen_widowx_interfaces::srv::ControlGripper_Response;
};

}  // namespace srv

}  // namespace trossen_widowx_interfaces

#endif  // TROSSEN_WIDOWX_INTERFACES__SRV__DETAIL__CONTROL_GRIPPER__STRUCT_HPP_

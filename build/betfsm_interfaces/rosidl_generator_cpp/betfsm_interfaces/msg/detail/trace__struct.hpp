// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from betfsm_interfaces:msg/Trace.idl
// generated code does not contain a copyright notice

#ifndef BETFSM_INTERFACES__MSG__DETAIL__TRACE__STRUCT_HPP_
#define BETFSM_INTERFACES__MSG__DETAIL__TRACE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__betfsm_interfaces__msg__Trace __attribute__((deprecated))
#else
# define DEPRECATED__betfsm_interfaces__msg__Trace __declspec(deprecated)
#endif

namespace betfsm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Trace_
{
  using Type = Trace_<ContainerAllocator>;

  explicit Trace_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    (void)_init;
  }

  explicit Trace_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _active_states_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _active_states_type active_states;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__active_states(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->active_states = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    betfsm_interfaces::msg::Trace_<ContainerAllocator> *;
  using ConstRawPtr =
    const betfsm_interfaces::msg::Trace_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<betfsm_interfaces::msg::Trace_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<betfsm_interfaces::msg::Trace_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      betfsm_interfaces::msg::Trace_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<betfsm_interfaces::msg::Trace_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      betfsm_interfaces::msg::Trace_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<betfsm_interfaces::msg::Trace_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<betfsm_interfaces::msg::Trace_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<betfsm_interfaces::msg::Trace_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__betfsm_interfaces__msg__Trace
    std::shared_ptr<betfsm_interfaces::msg::Trace_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__betfsm_interfaces__msg__Trace
    std::shared_ptr<betfsm_interfaces::msg::Trace_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Trace_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->active_states != other.active_states) {
      return false;
    }
    return true;
  }
  bool operator!=(const Trace_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Trace_

// alias to use template instance with default allocator
using Trace =
  betfsm_interfaces::msg::Trace_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace betfsm_interfaces

#endif  // BETFSM_INTERFACES__MSG__DETAIL__TRACE__STRUCT_HPP_

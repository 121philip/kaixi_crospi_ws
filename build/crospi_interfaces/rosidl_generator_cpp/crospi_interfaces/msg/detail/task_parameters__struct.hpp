// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from crospi_interfaces:msg/TaskParameters.idl
// generated code does not contain a copyright notice

#ifndef CROSPI_INTERFACES__MSG__DETAIL__TASK_PARAMETERS__STRUCT_HPP_
#define CROSPI_INTERFACES__MSG__DETAIL__TASK_PARAMETERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'numbers'
#include "crospi_interfaces/msg/detail/number_parameters__struct.hpp"
// Member 'poses'
#include "crospi_interfaces/msg/detail/pose_parameters__struct.hpp"
// Member 'vector3s'
#include "crospi_interfaces/msg/detail/vector3_parameters__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__crospi_interfaces__msg__TaskParameters __attribute__((deprecated))
#else
# define DEPRECATED__crospi_interfaces__msg__TaskParameters __declspec(deprecated)
#endif

namespace crospi_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TaskParameters_
{
  using Type = TaskParameters_<ContainerAllocator>;

  explicit TaskParameters_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit TaskParameters_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _numbers_type =
    std::vector<crospi_interfaces::msg::NumberParameters_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<crospi_interfaces::msg::NumberParameters_<ContainerAllocator>>>;
  _numbers_type numbers;
  using _poses_type =
    std::vector<crospi_interfaces::msg::PoseParameters_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<crospi_interfaces::msg::PoseParameters_<ContainerAllocator>>>;
  _poses_type poses;
  using _vector3s_type =
    std::vector<crospi_interfaces::msg::Vector3Parameters_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<crospi_interfaces::msg::Vector3Parameters_<ContainerAllocator>>>;
  _vector3s_type vector3s;

  // setters for named parameter idiom
  Type & set__numbers(
    const std::vector<crospi_interfaces::msg::NumberParameters_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<crospi_interfaces::msg::NumberParameters_<ContainerAllocator>>> & _arg)
  {
    this->numbers = _arg;
    return *this;
  }
  Type & set__poses(
    const std::vector<crospi_interfaces::msg::PoseParameters_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<crospi_interfaces::msg::PoseParameters_<ContainerAllocator>>> & _arg)
  {
    this->poses = _arg;
    return *this;
  }
  Type & set__vector3s(
    const std::vector<crospi_interfaces::msg::Vector3Parameters_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<crospi_interfaces::msg::Vector3Parameters_<ContainerAllocator>>> & _arg)
  {
    this->vector3s = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crospi_interfaces::msg::TaskParameters_<ContainerAllocator> *;
  using ConstRawPtr =
    const crospi_interfaces::msg::TaskParameters_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crospi_interfaces::msg::TaskParameters_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crospi_interfaces::msg::TaskParameters_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crospi_interfaces::msg::TaskParameters_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crospi_interfaces::msg::TaskParameters_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crospi_interfaces::msg::TaskParameters_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crospi_interfaces::msg::TaskParameters_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crospi_interfaces::msg::TaskParameters_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crospi_interfaces::msg::TaskParameters_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crospi_interfaces__msg__TaskParameters
    std::shared_ptr<crospi_interfaces::msg::TaskParameters_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crospi_interfaces__msg__TaskParameters
    std::shared_ptr<crospi_interfaces::msg::TaskParameters_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskParameters_ & other) const
  {
    if (this->numbers != other.numbers) {
      return false;
    }
    if (this->poses != other.poses) {
      return false;
    }
    if (this->vector3s != other.vector3s) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskParameters_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskParameters_

// alias to use template instance with default allocator
using TaskParameters =
  crospi_interfaces::msg::TaskParameters_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace crospi_interfaces

#endif  // CROSPI_INTERFACES__MSG__DETAIL__TASK_PARAMETERS__STRUCT_HPP_

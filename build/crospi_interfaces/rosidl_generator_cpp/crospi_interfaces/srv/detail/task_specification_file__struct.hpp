// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from crospi_interfaces:srv/TaskSpecificationFile.idl
// generated code does not contain a copyright notice

#ifndef CROSPI_INTERFACES__SRV__DETAIL__TASK_SPECIFICATION_FILE__STRUCT_HPP_
#define CROSPI_INTERFACES__SRV__DETAIL__TASK_SPECIFICATION_FILE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__crospi_interfaces__srv__TaskSpecificationFile_Request __attribute__((deprecated))
#else
# define DEPRECATED__crospi_interfaces__srv__TaskSpecificationFile_Request __declspec(deprecated)
#endif

namespace crospi_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TaskSpecificationFile_Request_
{
  using Type = TaskSpecificationFile_Request_<ContainerAllocator>;

  explicit TaskSpecificationFile_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->file_path = "";
    }
  }

  explicit TaskSpecificationFile_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : file_path(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->file_path = "";
    }
  }

  // field types and members
  using _file_path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _file_path_type file_path;

  // setters for named parameter idiom
  Type & set__file_path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->file_path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crospi_interfaces::srv::TaskSpecificationFile_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const crospi_interfaces::srv::TaskSpecificationFile_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crospi_interfaces::srv::TaskSpecificationFile_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crospi_interfaces::srv::TaskSpecificationFile_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crospi_interfaces::srv::TaskSpecificationFile_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crospi_interfaces::srv::TaskSpecificationFile_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crospi_interfaces::srv::TaskSpecificationFile_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crospi_interfaces::srv::TaskSpecificationFile_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crospi_interfaces::srv::TaskSpecificationFile_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crospi_interfaces::srv::TaskSpecificationFile_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crospi_interfaces__srv__TaskSpecificationFile_Request
    std::shared_ptr<crospi_interfaces::srv::TaskSpecificationFile_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crospi_interfaces__srv__TaskSpecificationFile_Request
    std::shared_ptr<crospi_interfaces::srv::TaskSpecificationFile_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskSpecificationFile_Request_ & other) const
  {
    if (this->file_path != other.file_path) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskSpecificationFile_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskSpecificationFile_Request_

// alias to use template instance with default allocator
using TaskSpecificationFile_Request =
  crospi_interfaces::srv::TaskSpecificationFile_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace crospi_interfaces


#ifndef _WIN32
# define DEPRECATED__crospi_interfaces__srv__TaskSpecificationFile_Response __attribute__((deprecated))
#else
# define DEPRECATED__crospi_interfaces__srv__TaskSpecificationFile_Response __declspec(deprecated)
#endif

namespace crospi_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TaskSpecificationFile_Response_
{
  using Type = TaskSpecificationFile_Response_<ContainerAllocator>;

  explicit TaskSpecificationFile_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit TaskSpecificationFile_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    crospi_interfaces::srv::TaskSpecificationFile_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const crospi_interfaces::srv::TaskSpecificationFile_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crospi_interfaces::srv::TaskSpecificationFile_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crospi_interfaces::srv::TaskSpecificationFile_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crospi_interfaces::srv::TaskSpecificationFile_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crospi_interfaces::srv::TaskSpecificationFile_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crospi_interfaces::srv::TaskSpecificationFile_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crospi_interfaces::srv::TaskSpecificationFile_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crospi_interfaces::srv::TaskSpecificationFile_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crospi_interfaces::srv::TaskSpecificationFile_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crospi_interfaces__srv__TaskSpecificationFile_Response
    std::shared_ptr<crospi_interfaces::srv::TaskSpecificationFile_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crospi_interfaces__srv__TaskSpecificationFile_Response
    std::shared_ptr<crospi_interfaces::srv::TaskSpecificationFile_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskSpecificationFile_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskSpecificationFile_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskSpecificationFile_Response_

// alias to use template instance with default allocator
using TaskSpecificationFile_Response =
  crospi_interfaces::srv::TaskSpecificationFile_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace crospi_interfaces

namespace crospi_interfaces
{

namespace srv
{

struct TaskSpecificationFile
{
  using Request = crospi_interfaces::srv::TaskSpecificationFile_Request;
  using Response = crospi_interfaces::srv::TaskSpecificationFile_Response;
};

}  // namespace srv

}  // namespace crospi_interfaces

#endif  // CROSPI_INTERFACES__SRV__DETAIL__TASK_SPECIFICATION_FILE__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg/MultiArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/multi_array.hpp"


#ifndef INTERFACES__MSG__DETAIL__MULTI_ARRAY__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__MULTI_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__MultiArray __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__MultiArray __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MultiArray_
{
  using Type = MultiArray_<ContainerAllocator>;

  explicit MultiArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rows = 0.0f;
      this->cols = 0.0f;
    }
  }

  explicit MultiArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rows = 0.0f;
      this->cols = 0.0f;
    }
  }

  // field types and members
  using _rows_type =
    float;
  _rows_type rows;
  using _cols_type =
    float;
  _cols_type cols;
  using _data_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__rows(
    const float & _arg)
  {
    this->rows = _arg;
    return *this;
  }
  Type & set__cols(
    const float & _arg)
  {
    this->cols = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::MultiArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::MultiArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::MultiArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::MultiArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::MultiArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::MultiArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::MultiArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::MultiArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::MultiArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::MultiArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__MultiArray
    std::shared_ptr<interfaces::msg::MultiArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__MultiArray
    std::shared_ptr<interfaces::msg::MultiArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MultiArray_ & other) const
  {
    if (this->rows != other.rows) {
      return false;
    }
    if (this->cols != other.cols) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const MultiArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MultiArray_

// alias to use template instance with default allocator
using MultiArray =
  interfaces::msg::MultiArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__MULTI_ARRAY__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from candle_ros2:msg/Pid.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/msg/pid.hpp"


#ifndef CANDLE_ROS2__MSG__DETAIL__PID__STRUCT_HPP_
#define CANDLE_ROS2__MSG__DETAIL__PID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__candle_ros2__msg__Pid __attribute__((deprecated))
#else
# define DEPRECATED__candle_ros2__msg__Pid __declspec(deprecated)
#endif

namespace candle_ros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Pid_
{
  using Type = Pid_<ContainerAllocator>;

  explicit Pid_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kp = 0.0f;
      this->ki = 0.0f;
      this->kd = 0.0f;
      this->i_windup = 0.0f;
      this->max_output = 0.0f;
    }
  }

  explicit Pid_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kp = 0.0f;
      this->ki = 0.0f;
      this->kd = 0.0f;
      this->i_windup = 0.0f;
      this->max_output = 0.0f;
    }
  }

  // field types and members
  using _kp_type =
    float;
  _kp_type kp;
  using _ki_type =
    float;
  _ki_type ki;
  using _kd_type =
    float;
  _kd_type kd;
  using _i_windup_type =
    float;
  _i_windup_type i_windup;
  using _max_output_type =
    float;
  _max_output_type max_output;

  // setters for named parameter idiom
  Type & set__kp(
    const float & _arg)
  {
    this->kp = _arg;
    return *this;
  }
  Type & set__ki(
    const float & _arg)
  {
    this->ki = _arg;
    return *this;
  }
  Type & set__kd(
    const float & _arg)
  {
    this->kd = _arg;
    return *this;
  }
  Type & set__i_windup(
    const float & _arg)
  {
    this->i_windup = _arg;
    return *this;
  }
  Type & set__max_output(
    const float & _arg)
  {
    this->max_output = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    candle_ros2::msg::Pid_<ContainerAllocator> *;
  using ConstRawPtr =
    const candle_ros2::msg::Pid_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<candle_ros2::msg::Pid_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<candle_ros2::msg::Pid_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      candle_ros2::msg::Pid_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<candle_ros2::msg::Pid_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      candle_ros2::msg::Pid_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<candle_ros2::msg::Pid_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<candle_ros2::msg::Pid_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<candle_ros2::msg::Pid_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__candle_ros2__msg__Pid
    std::shared_ptr<candle_ros2::msg::Pid_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__candle_ros2__msg__Pid
    std::shared_ptr<candle_ros2::msg::Pid_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pid_ & other) const
  {
    if (this->kp != other.kp) {
      return false;
    }
    if (this->ki != other.ki) {
      return false;
    }
    if (this->kd != other.kd) {
      return false;
    }
    if (this->i_windup != other.i_windup) {
      return false;
    }
    if (this->max_output != other.max_output) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pid_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pid_

// alias to use template instance with default allocator
using Pid =
  candle_ros2::msg::Pid_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace candle_ros2

#endif  // CANDLE_ROS2__MSG__DETAIL__PID__STRUCT_HPP_

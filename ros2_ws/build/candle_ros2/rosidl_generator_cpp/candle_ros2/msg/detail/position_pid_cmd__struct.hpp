// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from candle_ros2:msg/PositionPidCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/msg/position_pid_cmd.hpp"


#ifndef CANDLE_ROS2__MSG__DETAIL__POSITION_PID_CMD__STRUCT_HPP_
#define CANDLE_ROS2__MSG__DETAIL__POSITION_PID_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position_pid'
// Member 'velocity_pid'
#include "candle_ros2/msg/detail/pid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__candle_ros2__msg__PositionPidCmd __attribute__((deprecated))
#else
# define DEPRECATED__candle_ros2__msg__PositionPidCmd __declspec(deprecated)
#endif

namespace candle_ros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PositionPidCmd_
{
  using Type = PositionPidCmd_<ContainerAllocator>;

  explicit PositionPidCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit PositionPidCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _device_ids_type =
    std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>>;
  _device_ids_type device_ids;
  using _position_pid_type =
    std::vector<candle_ros2::msg::Pid_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<candle_ros2::msg::Pid_<ContainerAllocator>>>;
  _position_pid_type position_pid;
  using _velocity_pid_type =
    std::vector<candle_ros2::msg::Pid_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<candle_ros2::msg::Pid_<ContainerAllocator>>>;
  _velocity_pid_type velocity_pid;

  // setters for named parameter idiom
  Type & set__device_ids(
    const std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>> & _arg)
  {
    this->device_ids = _arg;
    return *this;
  }
  Type & set__position_pid(
    const std::vector<candle_ros2::msg::Pid_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<candle_ros2::msg::Pid_<ContainerAllocator>>> & _arg)
  {
    this->position_pid = _arg;
    return *this;
  }
  Type & set__velocity_pid(
    const std::vector<candle_ros2::msg::Pid_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<candle_ros2::msg::Pid_<ContainerAllocator>>> & _arg)
  {
    this->velocity_pid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    candle_ros2::msg::PositionPidCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const candle_ros2::msg::PositionPidCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<candle_ros2::msg::PositionPidCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<candle_ros2::msg::PositionPidCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      candle_ros2::msg::PositionPidCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<candle_ros2::msg::PositionPidCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      candle_ros2::msg::PositionPidCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<candle_ros2::msg::PositionPidCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<candle_ros2::msg::PositionPidCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<candle_ros2::msg::PositionPidCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__candle_ros2__msg__PositionPidCmd
    std::shared_ptr<candle_ros2::msg::PositionPidCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__candle_ros2__msg__PositionPidCmd
    std::shared_ptr<candle_ros2::msg::PositionPidCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionPidCmd_ & other) const
  {
    if (this->device_ids != other.device_ids) {
      return false;
    }
    if (this->position_pid != other.position_pid) {
      return false;
    }
    if (this->velocity_pid != other.velocity_pid) {
      return false;
    }
    return true;
  }
  bool operator!=(const PositionPidCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionPidCmd_

// alias to use template instance with default allocator
using PositionPidCmd =
  candle_ros2::msg::PositionPidCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace candle_ros2

#endif  // CANDLE_ROS2__MSG__DETAIL__POSITION_PID_CMD__STRUCT_HPP_

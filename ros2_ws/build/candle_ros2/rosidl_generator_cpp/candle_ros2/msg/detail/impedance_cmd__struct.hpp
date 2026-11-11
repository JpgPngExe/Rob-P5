// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from candle_ros2:msg/ImpedanceCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/msg/impedance_cmd.hpp"


#ifndef CANDLE_ROS2__MSG__DETAIL__IMPEDANCE_CMD__STRUCT_HPP_
#define CANDLE_ROS2__MSG__DETAIL__IMPEDANCE_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__candle_ros2__msg__ImpedanceCmd __attribute__((deprecated))
#else
# define DEPRECATED__candle_ros2__msg__ImpedanceCmd __declspec(deprecated)
#endif

namespace candle_ros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImpedanceCmd_
{
  using Type = ImpedanceCmd_<ContainerAllocator>;

  explicit ImpedanceCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ImpedanceCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _device_ids_type =
    std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>>;
  _device_ids_type device_ids;
  using _kp_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _kp_type kp;
  using _kd_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _kd_type kd;
  using _max_output_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _max_output_type max_output;

  // setters for named parameter idiom
  Type & set__device_ids(
    const std::vector<uint16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint16_t>> & _arg)
  {
    this->device_ids = _arg;
    return *this;
  }
  Type & set__kp(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->kp = _arg;
    return *this;
  }
  Type & set__kd(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->kd = _arg;
    return *this;
  }
  Type & set__max_output(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->max_output = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    candle_ros2::msg::ImpedanceCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const candle_ros2::msg::ImpedanceCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<candle_ros2::msg::ImpedanceCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<candle_ros2::msg::ImpedanceCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      candle_ros2::msg::ImpedanceCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<candle_ros2::msg::ImpedanceCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      candle_ros2::msg::ImpedanceCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<candle_ros2::msg::ImpedanceCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<candle_ros2::msg::ImpedanceCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<candle_ros2::msg::ImpedanceCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__candle_ros2__msg__ImpedanceCmd
    std::shared_ptr<candle_ros2::msg::ImpedanceCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__candle_ros2__msg__ImpedanceCmd
    std::shared_ptr<candle_ros2::msg::ImpedanceCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImpedanceCmd_ & other) const
  {
    if (this->device_ids != other.device_ids) {
      return false;
    }
    if (this->kp != other.kp) {
      return false;
    }
    if (this->kd != other.kd) {
      return false;
    }
    if (this->max_output != other.max_output) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImpedanceCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImpedanceCmd_

// alias to use template instance with default allocator
using ImpedanceCmd =
  candle_ros2::msg::ImpedanceCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace candle_ros2

#endif  // CANDLE_ROS2__MSG__DETAIL__IMPEDANCE_CMD__STRUCT_HPP_

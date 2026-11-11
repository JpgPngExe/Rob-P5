// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from candle_ros2:msg/ControlModuleData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/msg/control_module_data.hpp"


#ifndef CANDLE_ROS2__MSG__DETAIL__CONTROL_MODULE_DATA__STRUCT_HPP_
#define CANDLE_ROS2__MSG__DETAIL__CONTROL_MODULE_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__candle_ros2__msg__ControlModuleData __attribute__((deprecated))
#else
# define DEPRECATED__candle_ros2__msg__ControlModuleData __declspec(deprecated)
#endif

namespace candle_ros2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControlModuleData_
{
  using Type = ControlModuleData_<ContainerAllocator>;

  explicit ControlModuleData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bus_voltage = 0ul;
      this->battery_voltage_level_1 = 0ul;
      this->battery_voltage_level_2 = 0ul;
      this->brake_trigger_voltage = 0ul;
      this->temperature = 0.0f;
      this->temperature_limit = 0.0f;
    }
  }

  explicit ControlModuleData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bus_voltage = 0ul;
      this->battery_voltage_level_1 = 0ul;
      this->battery_voltage_level_2 = 0ul;
      this->brake_trigger_voltage = 0ul;
      this->temperature = 0.0f;
      this->temperature_limit = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _bus_voltage_type =
    uint32_t;
  _bus_voltage_type bus_voltage;
  using _battery_voltage_level_1_type =
    uint32_t;
  _battery_voltage_level_1_type battery_voltage_level_1;
  using _battery_voltage_level_2_type =
    uint32_t;
  _battery_voltage_level_2_type battery_voltage_level_2;
  using _brake_trigger_voltage_type =
    uint32_t;
  _brake_trigger_voltage_type brake_trigger_voltage;
  using _temperature_type =
    float;
  _temperature_type temperature;
  using _temperature_limit_type =
    float;
  _temperature_limit_type temperature_limit;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__bus_voltage(
    const uint32_t & _arg)
  {
    this->bus_voltage = _arg;
    return *this;
  }
  Type & set__battery_voltage_level_1(
    const uint32_t & _arg)
  {
    this->battery_voltage_level_1 = _arg;
    return *this;
  }
  Type & set__battery_voltage_level_2(
    const uint32_t & _arg)
  {
    this->battery_voltage_level_2 = _arg;
    return *this;
  }
  Type & set__brake_trigger_voltage(
    const uint32_t & _arg)
  {
    this->brake_trigger_voltage = _arg;
    return *this;
  }
  Type & set__temperature(
    const float & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__temperature_limit(
    const float & _arg)
  {
    this->temperature_limit = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    candle_ros2::msg::ControlModuleData_<ContainerAllocator> *;
  using ConstRawPtr =
    const candle_ros2::msg::ControlModuleData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<candle_ros2::msg::ControlModuleData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<candle_ros2::msg::ControlModuleData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      candle_ros2::msg::ControlModuleData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<candle_ros2::msg::ControlModuleData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      candle_ros2::msg::ControlModuleData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<candle_ros2::msg::ControlModuleData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<candle_ros2::msg::ControlModuleData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<candle_ros2::msg::ControlModuleData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__candle_ros2__msg__ControlModuleData
    std::shared_ptr<candle_ros2::msg::ControlModuleData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__candle_ros2__msg__ControlModuleData
    std::shared_ptr<candle_ros2::msg::ControlModuleData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlModuleData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->bus_voltage != other.bus_voltage) {
      return false;
    }
    if (this->battery_voltage_level_1 != other.battery_voltage_level_1) {
      return false;
    }
    if (this->battery_voltage_level_2 != other.battery_voltage_level_2) {
      return false;
    }
    if (this->brake_trigger_voltage != other.brake_trigger_voltage) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->temperature_limit != other.temperature_limit) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlModuleData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlModuleData_

// alias to use template instance with default allocator
using ControlModuleData =
  candle_ros2::msg::ControlModuleData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace candle_ros2

#endif  // CANDLE_ROS2__MSG__DETAIL__CONTROL_MODULE_DATA__STRUCT_HPP_

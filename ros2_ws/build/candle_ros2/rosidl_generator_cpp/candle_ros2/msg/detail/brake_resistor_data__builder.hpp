// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from candle_ros2:msg/BrakeResistorData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/msg/brake_resistor_data.hpp"


#ifndef CANDLE_ROS2__MSG__DETAIL__BRAKE_RESISTOR_DATA__BUILDER_HPP_
#define CANDLE_ROS2__MSG__DETAIL__BRAKE_RESISTOR_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "candle_ros2/msg/detail/brake_resistor_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace candle_ros2
{

namespace msg
{

namespace builder
{

class Init_BrakeResistorData_temperature_limit
{
public:
  explicit Init_BrakeResistorData_temperature_limit(::candle_ros2::msg::BrakeResistorData & msg)
  : msg_(msg)
  {}
  ::candle_ros2::msg::BrakeResistorData temperature_limit(::candle_ros2::msg::BrakeResistorData::_temperature_limit_type arg)
  {
    msg_.temperature_limit = std::move(arg);
    return std::move(msg_);
  }

private:
  ::candle_ros2::msg::BrakeResistorData msg_;
};

class Init_BrakeResistorData_temperature
{
public:
  explicit Init_BrakeResistorData_temperature(::candle_ros2::msg::BrakeResistorData & msg)
  : msg_(msg)
  {}
  Init_BrakeResistorData_temperature_limit temperature(::candle_ros2::msg::BrakeResistorData::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_BrakeResistorData_temperature_limit(msg_);
  }

private:
  ::candle_ros2::msg::BrakeResistorData msg_;
};

class Init_BrakeResistorData_enabled
{
public:
  explicit Init_BrakeResistorData_enabled(::candle_ros2::msg::BrakeResistorData & msg)
  : msg_(msg)
  {}
  Init_BrakeResistorData_temperature enabled(::candle_ros2::msg::BrakeResistorData::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return Init_BrakeResistorData_temperature(msg_);
  }

private:
  ::candle_ros2::msg::BrakeResistorData msg_;
};

class Init_BrakeResistorData_header
{
public:
  Init_BrakeResistorData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BrakeResistorData_enabled header(::candle_ros2::msg::BrakeResistorData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BrakeResistorData_enabled(msg_);
  }

private:
  ::candle_ros2::msg::BrakeResistorData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::candle_ros2::msg::BrakeResistorData>()
{
  return candle_ros2::msg::builder::Init_BrakeResistorData_header();
}

}  // namespace candle_ros2

#endif  // CANDLE_ROS2__MSG__DETAIL__BRAKE_RESISTOR_DATA__BUILDER_HPP_

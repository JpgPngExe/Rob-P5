// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from candle_ros2:msg/ControlModuleData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/msg/control_module_data.hpp"


#ifndef CANDLE_ROS2__MSG__DETAIL__CONTROL_MODULE_DATA__BUILDER_HPP_
#define CANDLE_ROS2__MSG__DETAIL__CONTROL_MODULE_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "candle_ros2/msg/detail/control_module_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace candle_ros2
{

namespace msg
{

namespace builder
{

class Init_ControlModuleData_temperature_limit
{
public:
  explicit Init_ControlModuleData_temperature_limit(::candle_ros2::msg::ControlModuleData & msg)
  : msg_(msg)
  {}
  ::candle_ros2::msg::ControlModuleData temperature_limit(::candle_ros2::msg::ControlModuleData::_temperature_limit_type arg)
  {
    msg_.temperature_limit = std::move(arg);
    return std::move(msg_);
  }

private:
  ::candle_ros2::msg::ControlModuleData msg_;
};

class Init_ControlModuleData_temperature
{
public:
  explicit Init_ControlModuleData_temperature(::candle_ros2::msg::ControlModuleData & msg)
  : msg_(msg)
  {}
  Init_ControlModuleData_temperature_limit temperature(::candle_ros2::msg::ControlModuleData::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_ControlModuleData_temperature_limit(msg_);
  }

private:
  ::candle_ros2::msg::ControlModuleData msg_;
};

class Init_ControlModuleData_brake_trigger_voltage
{
public:
  explicit Init_ControlModuleData_brake_trigger_voltage(::candle_ros2::msg::ControlModuleData & msg)
  : msg_(msg)
  {}
  Init_ControlModuleData_temperature brake_trigger_voltage(::candle_ros2::msg::ControlModuleData::_brake_trigger_voltage_type arg)
  {
    msg_.brake_trigger_voltage = std::move(arg);
    return Init_ControlModuleData_temperature(msg_);
  }

private:
  ::candle_ros2::msg::ControlModuleData msg_;
};

class Init_ControlModuleData_battery_voltage_level_2
{
public:
  explicit Init_ControlModuleData_battery_voltage_level_2(::candle_ros2::msg::ControlModuleData & msg)
  : msg_(msg)
  {}
  Init_ControlModuleData_brake_trigger_voltage battery_voltage_level_2(::candle_ros2::msg::ControlModuleData::_battery_voltage_level_2_type arg)
  {
    msg_.battery_voltage_level_2 = std::move(arg);
    return Init_ControlModuleData_brake_trigger_voltage(msg_);
  }

private:
  ::candle_ros2::msg::ControlModuleData msg_;
};

class Init_ControlModuleData_battery_voltage_level_1
{
public:
  explicit Init_ControlModuleData_battery_voltage_level_1(::candle_ros2::msg::ControlModuleData & msg)
  : msg_(msg)
  {}
  Init_ControlModuleData_battery_voltage_level_2 battery_voltage_level_1(::candle_ros2::msg::ControlModuleData::_battery_voltage_level_1_type arg)
  {
    msg_.battery_voltage_level_1 = std::move(arg);
    return Init_ControlModuleData_battery_voltage_level_2(msg_);
  }

private:
  ::candle_ros2::msg::ControlModuleData msg_;
};

class Init_ControlModuleData_bus_voltage
{
public:
  explicit Init_ControlModuleData_bus_voltage(::candle_ros2::msg::ControlModuleData & msg)
  : msg_(msg)
  {}
  Init_ControlModuleData_battery_voltage_level_1 bus_voltage(::candle_ros2::msg::ControlModuleData::_bus_voltage_type arg)
  {
    msg_.bus_voltage = std::move(arg);
    return Init_ControlModuleData_battery_voltage_level_1(msg_);
  }

private:
  ::candle_ros2::msg::ControlModuleData msg_;
};

class Init_ControlModuleData_header
{
public:
  Init_ControlModuleData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlModuleData_bus_voltage header(::candle_ros2::msg::ControlModuleData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ControlModuleData_bus_voltage(msg_);
  }

private:
  ::candle_ros2::msg::ControlModuleData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::candle_ros2::msg::ControlModuleData>()
{
  return candle_ros2::msg::builder::Init_ControlModuleData_header();
}

}  // namespace candle_ros2

#endif  // CANDLE_ROS2__MSG__DETAIL__CONTROL_MODULE_DATA__BUILDER_HPP_

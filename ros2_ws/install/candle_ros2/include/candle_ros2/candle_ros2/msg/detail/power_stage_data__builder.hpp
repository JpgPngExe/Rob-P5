// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from candle_ros2:msg/PowerStageData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/msg/power_stage_data.hpp"


#ifndef CANDLE_ROS2__MSG__DETAIL__POWER_STAGE_DATA__BUILDER_HPP_
#define CANDLE_ROS2__MSG__DETAIL__POWER_STAGE_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "candle_ros2/msg/detail/power_stage_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace candle_ros2
{

namespace msg
{

namespace builder
{

class Init_PowerStageData_temperature_limit
{
public:
  explicit Init_PowerStageData_temperature_limit(::candle_ros2::msg::PowerStageData & msg)
  : msg_(msg)
  {}
  ::candle_ros2::msg::PowerStageData temperature_limit(::candle_ros2::msg::PowerStageData::_temperature_limit_type arg)
  {
    msg_.temperature_limit = std::move(arg);
    return std::move(msg_);
  }

private:
  ::candle_ros2::msg::PowerStageData msg_;
};

class Init_PowerStageData_temperature
{
public:
  explicit Init_PowerStageData_temperature(::candle_ros2::msg::PowerStageData & msg)
  : msg_(msg)
  {}
  Init_PowerStageData_temperature_limit temperature(::candle_ros2::msg::PowerStageData::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_PowerStageData_temperature_limit(msg_);
  }

private:
  ::candle_ros2::msg::PowerStageData msg_;
};

class Init_PowerStageData_ocd_delay
{
public:
  explicit Init_PowerStageData_ocd_delay(::candle_ros2::msg::PowerStageData & msg)
  : msg_(msg)
  {}
  Init_PowerStageData_temperature ocd_delay(::candle_ros2::msg::PowerStageData::_ocd_delay_type arg)
  {
    msg_.ocd_delay = std::move(arg);
    return Init_PowerStageData_temperature(msg_);
  }

private:
  ::candle_ros2::msg::PowerStageData msg_;
};

class Init_PowerStageData_ocd_level
{
public:
  explicit Init_PowerStageData_ocd_level(::candle_ros2::msg::PowerStageData & msg)
  : msg_(msg)
  {}
  Init_PowerStageData_ocd_delay ocd_level(::candle_ros2::msg::PowerStageData::_ocd_level_type arg)
  {
    msg_.ocd_level = std::move(arg);
    return Init_PowerStageData_ocd_delay(msg_);
  }

private:
  ::candle_ros2::msg::PowerStageData msg_;
};

class Init_PowerStageData_energy
{
public:
  explicit Init_PowerStageData_energy(::candle_ros2::msg::PowerStageData & msg)
  : msg_(msg)
  {}
  Init_PowerStageData_ocd_level energy(::candle_ros2::msg::PowerStageData::_energy_type arg)
  {
    msg_.energy = std::move(arg);
    return Init_PowerStageData_ocd_level(msg_);
  }

private:
  ::candle_ros2::msg::PowerStageData msg_;
};

class Init_PowerStageData_power
{
public:
  explicit Init_PowerStageData_power(::candle_ros2::msg::PowerStageData & msg)
  : msg_(msg)
  {}
  Init_PowerStageData_energy power(::candle_ros2::msg::PowerStageData::_power_type arg)
  {
    msg_.power = std::move(arg);
    return Init_PowerStageData_energy(msg_);
  }

private:
  ::candle_ros2::msg::PowerStageData msg_;
};

class Init_PowerStageData_load_current
{
public:
  explicit Init_PowerStageData_load_current(::candle_ros2::msg::PowerStageData & msg)
  : msg_(msg)
  {}
  Init_PowerStageData_power load_current(::candle_ros2::msg::PowerStageData::_load_current_type arg)
  {
    msg_.load_current = std::move(arg);
    return Init_PowerStageData_power(msg_);
  }

private:
  ::candle_ros2::msg::PowerStageData msg_;
};

class Init_PowerStageData_autostart
{
public:
  explicit Init_PowerStageData_autostart(::candle_ros2::msg::PowerStageData & msg)
  : msg_(msg)
  {}
  Init_PowerStageData_load_current autostart(::candle_ros2::msg::PowerStageData::_autostart_type arg)
  {
    msg_.autostart = std::move(arg);
    return Init_PowerStageData_load_current(msg_);
  }

private:
  ::candle_ros2::msg::PowerStageData msg_;
};

class Init_PowerStageData_output_voltage
{
public:
  explicit Init_PowerStageData_output_voltage(::candle_ros2::msg::PowerStageData & msg)
  : msg_(msg)
  {}
  Init_PowerStageData_autostart output_voltage(::candle_ros2::msg::PowerStageData::_output_voltage_type arg)
  {
    msg_.output_voltage = std::move(arg);
    return Init_PowerStageData_autostart(msg_);
  }

private:
  ::candle_ros2::msg::PowerStageData msg_;
};

class Init_PowerStageData_trigger_voltage
{
public:
  explicit Init_PowerStageData_trigger_voltage(::candle_ros2::msg::PowerStageData & msg)
  : msg_(msg)
  {}
  Init_PowerStageData_output_voltage trigger_voltage(::candle_ros2::msg::PowerStageData::_trigger_voltage_type arg)
  {
    msg_.trigger_voltage = std::move(arg);
    return Init_PowerStageData_output_voltage(msg_);
  }

private:
  ::candle_ros2::msg::PowerStageData msg_;
};

class Init_PowerStageData_brake_resistor_socket
{
public:
  explicit Init_PowerStageData_brake_resistor_socket(::candle_ros2::msg::PowerStageData & msg)
  : msg_(msg)
  {}
  Init_PowerStageData_trigger_voltage brake_resistor_socket(::candle_ros2::msg::PowerStageData::_brake_resistor_socket_type arg)
  {
    msg_.brake_resistor_socket = std::move(arg);
    return Init_PowerStageData_trigger_voltage(msg_);
  }

private:
  ::candle_ros2::msg::PowerStageData msg_;
};

class Init_PowerStageData_enabled
{
public:
  explicit Init_PowerStageData_enabled(::candle_ros2::msg::PowerStageData & msg)
  : msg_(msg)
  {}
  Init_PowerStageData_brake_resistor_socket enabled(::candle_ros2::msg::PowerStageData::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return Init_PowerStageData_brake_resistor_socket(msg_);
  }

private:
  ::candle_ros2::msg::PowerStageData msg_;
};

class Init_PowerStageData_header
{
public:
  Init_PowerStageData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PowerStageData_enabled header(::candle_ros2::msg::PowerStageData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PowerStageData_enabled(msg_);
  }

private:
  ::candle_ros2::msg::PowerStageData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::candle_ros2::msg::PowerStageData>()
{
  return candle_ros2::msg::builder::Init_PowerStageData_header();
}

}  // namespace candle_ros2

#endif  // CANDLE_ROS2__MSG__DETAIL__POWER_STAGE_DATA__BUILDER_HPP_

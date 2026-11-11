// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from candle_ros2:msg/IsolatedConverterData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/msg/isolated_converter_data.hpp"


#ifndef CANDLE_ROS2__MSG__DETAIL__ISOLATED_CONVERTER_DATA__BUILDER_HPP_
#define CANDLE_ROS2__MSG__DETAIL__ISOLATED_CONVERTER_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "candle_ros2/msg/detail/isolated_converter_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace candle_ros2
{

namespace msg
{

namespace builder
{

class Init_IsolatedConverterData_temperature_limit
{
public:
  explicit Init_IsolatedConverterData_temperature_limit(::candle_ros2::msg::IsolatedConverterData & msg)
  : msg_(msg)
  {}
  ::candle_ros2::msg::IsolatedConverterData temperature_limit(::candle_ros2::msg::IsolatedConverterData::_temperature_limit_type arg)
  {
    msg_.temperature_limit = std::move(arg);
    return std::move(msg_);
  }

private:
  ::candle_ros2::msg::IsolatedConverterData msg_;
};

class Init_IsolatedConverterData_temperature
{
public:
  explicit Init_IsolatedConverterData_temperature(::candle_ros2::msg::IsolatedConverterData & msg)
  : msg_(msg)
  {}
  Init_IsolatedConverterData_temperature_limit temperature(::candle_ros2::msg::IsolatedConverterData::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_IsolatedConverterData_temperature_limit(msg_);
  }

private:
  ::candle_ros2::msg::IsolatedConverterData msg_;
};

class Init_IsolatedConverterData_ocd_delay
{
public:
  explicit Init_IsolatedConverterData_ocd_delay(::candle_ros2::msg::IsolatedConverterData & msg)
  : msg_(msg)
  {}
  Init_IsolatedConverterData_temperature ocd_delay(::candle_ros2::msg::IsolatedConverterData::_ocd_delay_type arg)
  {
    msg_.ocd_delay = std::move(arg);
    return Init_IsolatedConverterData_temperature(msg_);
  }

private:
  ::candle_ros2::msg::IsolatedConverterData msg_;
};

class Init_IsolatedConverterData_ocd_level
{
public:
  explicit Init_IsolatedConverterData_ocd_level(::candle_ros2::msg::IsolatedConverterData & msg)
  : msg_(msg)
  {}
  Init_IsolatedConverterData_ocd_delay ocd_level(::candle_ros2::msg::IsolatedConverterData::_ocd_level_type arg)
  {
    msg_.ocd_level = std::move(arg);
    return Init_IsolatedConverterData_ocd_delay(msg_);
  }

private:
  ::candle_ros2::msg::IsolatedConverterData msg_;
};

class Init_IsolatedConverterData_energy
{
public:
  explicit Init_IsolatedConverterData_energy(::candle_ros2::msg::IsolatedConverterData & msg)
  : msg_(msg)
  {}
  Init_IsolatedConverterData_ocd_level energy(::candle_ros2::msg::IsolatedConverterData::_energy_type arg)
  {
    msg_.energy = std::move(arg);
    return Init_IsolatedConverterData_ocd_level(msg_);
  }

private:
  ::candle_ros2::msg::IsolatedConverterData msg_;
};

class Init_IsolatedConverterData_power
{
public:
  explicit Init_IsolatedConverterData_power(::candle_ros2::msg::IsolatedConverterData & msg)
  : msg_(msg)
  {}
  Init_IsolatedConverterData_energy power(::candle_ros2::msg::IsolatedConverterData::_power_type arg)
  {
    msg_.power = std::move(arg);
    return Init_IsolatedConverterData_energy(msg_);
  }

private:
  ::candle_ros2::msg::IsolatedConverterData msg_;
};

class Init_IsolatedConverterData_load_current
{
public:
  explicit Init_IsolatedConverterData_load_current(::candle_ros2::msg::IsolatedConverterData & msg)
  : msg_(msg)
  {}
  Init_IsolatedConverterData_power load_current(::candle_ros2::msg::IsolatedConverterData::_load_current_type arg)
  {
    msg_.load_current = std::move(arg);
    return Init_IsolatedConverterData_power(msg_);
  }

private:
  ::candle_ros2::msg::IsolatedConverterData msg_;
};

class Init_IsolatedConverterData_output_voltage
{
public:
  explicit Init_IsolatedConverterData_output_voltage(::candle_ros2::msg::IsolatedConverterData & msg)
  : msg_(msg)
  {}
  Init_IsolatedConverterData_load_current output_voltage(::candle_ros2::msg::IsolatedConverterData::_output_voltage_type arg)
  {
    msg_.output_voltage = std::move(arg);
    return Init_IsolatedConverterData_load_current(msg_);
  }

private:
  ::candle_ros2::msg::IsolatedConverterData msg_;
};

class Init_IsolatedConverterData_enabled
{
public:
  explicit Init_IsolatedConverterData_enabled(::candle_ros2::msg::IsolatedConverterData & msg)
  : msg_(msg)
  {}
  Init_IsolatedConverterData_output_voltage enabled(::candle_ros2::msg::IsolatedConverterData::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return Init_IsolatedConverterData_output_voltage(msg_);
  }

private:
  ::candle_ros2::msg::IsolatedConverterData msg_;
};

class Init_IsolatedConverterData_header
{
public:
  Init_IsolatedConverterData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IsolatedConverterData_enabled header(::candle_ros2::msg::IsolatedConverterData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_IsolatedConverterData_enabled(msg_);
  }

private:
  ::candle_ros2::msg::IsolatedConverterData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::candle_ros2::msg::IsolatedConverterData>()
{
  return candle_ros2::msg::builder::Init_IsolatedConverterData_header();
}

}  // namespace candle_ros2

#endif  // CANDLE_ROS2__MSG__DETAIL__ISOLATED_CONVERTER_DATA__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from candle_ros2:msg/ControlModuleData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/msg/control_module_data.hpp"


#ifndef CANDLE_ROS2__MSG__DETAIL__CONTROL_MODULE_DATA__TRAITS_HPP_
#define CANDLE_ROS2__MSG__DETAIL__CONTROL_MODULE_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "candle_ros2/msg/detail/control_module_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace candle_ros2
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControlModuleData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: bus_voltage
  {
    out << "bus_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.bus_voltage, out);
    out << ", ";
  }

  // member: battery_voltage_level_1
  {
    out << "battery_voltage_level_1: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage_level_1, out);
    out << ", ";
  }

  // member: battery_voltage_level_2
  {
    out << "battery_voltage_level_2: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage_level_2, out);
    out << ", ";
  }

  // member: brake_trigger_voltage
  {
    out << "brake_trigger_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_trigger_voltage, out);
    out << ", ";
  }

  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: temperature_limit
  {
    out << "temperature_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_limit, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlModuleData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: bus_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bus_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.bus_voltage, out);
    out << "\n";
  }

  // member: battery_voltage_level_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_voltage_level_1: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage_level_1, out);
    out << "\n";
  }

  // member: battery_voltage_level_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_voltage_level_2: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage_level_2, out);
    out << "\n";
  }

  // member: brake_trigger_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_trigger_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_trigger_voltage, out);
    out << "\n";
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: temperature_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_limit, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlModuleData & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace candle_ros2

namespace rosidl_generator_traits
{

[[deprecated("use candle_ros2::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const candle_ros2::msg::ControlModuleData & msg,
  std::ostream & out, size_t indentation = 0)
{
  candle_ros2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use candle_ros2::msg::to_yaml() instead")]]
inline std::string to_yaml(const candle_ros2::msg::ControlModuleData & msg)
{
  return candle_ros2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<candle_ros2::msg::ControlModuleData>()
{
  return "candle_ros2::msg::ControlModuleData";
}

template<>
inline const char * name<candle_ros2::msg::ControlModuleData>()
{
  return "candle_ros2/msg/ControlModuleData";
}

template<>
struct has_fixed_size<candle_ros2::msg::ControlModuleData>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<candle_ros2::msg::ControlModuleData>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<candle_ros2::msg::ControlModuleData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CANDLE_ROS2__MSG__DETAIL__CONTROL_MODULE_DATA__TRAITS_HPP_

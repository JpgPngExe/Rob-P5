// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from candle_ros2:msg/PowerStageData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/msg/power_stage_data.hpp"


#ifndef CANDLE_ROS2__MSG__DETAIL__POWER_STAGE_DATA__TRAITS_HPP_
#define CANDLE_ROS2__MSG__DETAIL__POWER_STAGE_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "candle_ros2/msg/detail/power_stage_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace candle_ros2
{

namespace msg
{

inline void to_flow_style_yaml(
  const PowerStageData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: enabled
  {
    out << "enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled, out);
    out << ", ";
  }

  // member: brake_resistor_socket
  {
    out << "brake_resistor_socket: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_resistor_socket, out);
    out << ", ";
  }

  // member: trigger_voltage
  {
    out << "trigger_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.trigger_voltage, out);
    out << ", ";
  }

  // member: output_voltage
  {
    out << "output_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.output_voltage, out);
    out << ", ";
  }

  // member: autostart
  {
    out << "autostart: ";
    rosidl_generator_traits::value_to_yaml(msg.autostart, out);
    out << ", ";
  }

  // member: load_current
  {
    out << "load_current: ";
    rosidl_generator_traits::value_to_yaml(msg.load_current, out);
    out << ", ";
  }

  // member: power
  {
    out << "power: ";
    rosidl_generator_traits::value_to_yaml(msg.power, out);
    out << ", ";
  }

  // member: energy
  {
    out << "energy: ";
    rosidl_generator_traits::value_to_yaml(msg.energy, out);
    out << ", ";
  }

  // member: ocd_level
  {
    out << "ocd_level: ";
    rosidl_generator_traits::value_to_yaml(msg.ocd_level, out);
    out << ", ";
  }

  // member: ocd_delay
  {
    out << "ocd_delay: ";
    rosidl_generator_traits::value_to_yaml(msg.ocd_delay, out);
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
  const PowerStageData & msg,
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

  // member: enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled, out);
    out << "\n";
  }

  // member: brake_resistor_socket
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_resistor_socket: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_resistor_socket, out);
    out << "\n";
  }

  // member: trigger_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trigger_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.trigger_voltage, out);
    out << "\n";
  }

  // member: output_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.output_voltage, out);
    out << "\n";
  }

  // member: autostart
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "autostart: ";
    rosidl_generator_traits::value_to_yaml(msg.autostart, out);
    out << "\n";
  }

  // member: load_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "load_current: ";
    rosidl_generator_traits::value_to_yaml(msg.load_current, out);
    out << "\n";
  }

  // member: power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power: ";
    rosidl_generator_traits::value_to_yaml(msg.power, out);
    out << "\n";
  }

  // member: energy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "energy: ";
    rosidl_generator_traits::value_to_yaml(msg.energy, out);
    out << "\n";
  }

  // member: ocd_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ocd_level: ";
    rosidl_generator_traits::value_to_yaml(msg.ocd_level, out);
    out << "\n";
  }

  // member: ocd_delay
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ocd_delay: ";
    rosidl_generator_traits::value_to_yaml(msg.ocd_delay, out);
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

inline std::string to_yaml(const PowerStageData & msg, bool use_flow_style = false)
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
  const candle_ros2::msg::PowerStageData & msg,
  std::ostream & out, size_t indentation = 0)
{
  candle_ros2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use candle_ros2::msg::to_yaml() instead")]]
inline std::string to_yaml(const candle_ros2::msg::PowerStageData & msg)
{
  return candle_ros2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<candle_ros2::msg::PowerStageData>()
{
  return "candle_ros2::msg::PowerStageData";
}

template<>
inline const char * name<candle_ros2::msg::PowerStageData>()
{
  return "candle_ros2/msg/PowerStageData";
}

template<>
struct has_fixed_size<candle_ros2::msg::PowerStageData>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<candle_ros2::msg::PowerStageData>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<candle_ros2::msg::PowerStageData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CANDLE_ROS2__MSG__DETAIL__POWER_STAGE_DATA__TRAITS_HPP_

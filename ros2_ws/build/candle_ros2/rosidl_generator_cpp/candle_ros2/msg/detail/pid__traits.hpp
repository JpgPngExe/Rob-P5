// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from candle_ros2:msg/Pid.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/msg/pid.hpp"


#ifndef CANDLE_ROS2__MSG__DETAIL__PID__TRAITS_HPP_
#define CANDLE_ROS2__MSG__DETAIL__PID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "candle_ros2/msg/detail/pid__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace candle_ros2
{

namespace msg
{

inline void to_flow_style_yaml(
  const Pid & msg,
  std::ostream & out)
{
  out << "{";
  // member: kp
  {
    out << "kp: ";
    rosidl_generator_traits::value_to_yaml(msg.kp, out);
    out << ", ";
  }

  // member: ki
  {
    out << "ki: ";
    rosidl_generator_traits::value_to_yaml(msg.ki, out);
    out << ", ";
  }

  // member: kd
  {
    out << "kd: ";
    rosidl_generator_traits::value_to_yaml(msg.kd, out);
    out << ", ";
  }

  // member: i_windup
  {
    out << "i_windup: ";
    rosidl_generator_traits::value_to_yaml(msg.i_windup, out);
    out << ", ";
  }

  // member: max_output
  {
    out << "max_output: ";
    rosidl_generator_traits::value_to_yaml(msg.max_output, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Pid & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: kp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kp: ";
    rosidl_generator_traits::value_to_yaml(msg.kp, out);
    out << "\n";
  }

  // member: ki
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ki: ";
    rosidl_generator_traits::value_to_yaml(msg.ki, out);
    out << "\n";
  }

  // member: kd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kd: ";
    rosidl_generator_traits::value_to_yaml(msg.kd, out);
    out << "\n";
  }

  // member: i_windup
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "i_windup: ";
    rosidl_generator_traits::value_to_yaml(msg.i_windup, out);
    out << "\n";
  }

  // member: max_output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_output: ";
    rosidl_generator_traits::value_to_yaml(msg.max_output, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Pid & msg, bool use_flow_style = false)
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
  const candle_ros2::msg::Pid & msg,
  std::ostream & out, size_t indentation = 0)
{
  candle_ros2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use candle_ros2::msg::to_yaml() instead")]]
inline std::string to_yaml(const candle_ros2::msg::Pid & msg)
{
  return candle_ros2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<candle_ros2::msg::Pid>()
{
  return "candle_ros2::msg::Pid";
}

template<>
inline const char * name<candle_ros2::msg::Pid>()
{
  return "candle_ros2/msg/Pid";
}

template<>
struct has_fixed_size<candle_ros2::msg::Pid>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<candle_ros2::msg::Pid>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<candle_ros2::msg::Pid>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CANDLE_ROS2__MSG__DETAIL__PID__TRAITS_HPP_

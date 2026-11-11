// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from candle_ros2:msg/VelocityPidCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/msg/velocity_pid_cmd.hpp"


#ifndef CANDLE_ROS2__MSG__DETAIL__VELOCITY_PID_CMD__TRAITS_HPP_
#define CANDLE_ROS2__MSG__DETAIL__VELOCITY_PID_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "candle_ros2/msg/detail/velocity_pid_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'velocity_pid'
#include "candle_ros2/msg/detail/pid__traits.hpp"

namespace candle_ros2
{

namespace msg
{

inline void to_flow_style_yaml(
  const VelocityPidCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: device_ids
  {
    if (msg.device_ids.size() == 0) {
      out << "device_ids: []";
    } else {
      out << "device_ids: [";
      size_t pending_items = msg.device_ids.size();
      for (auto item : msg.device_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: velocity_pid
  {
    if (msg.velocity_pid.size() == 0) {
      out << "velocity_pid: []";
    } else {
      out << "velocity_pid: [";
      size_t pending_items = msg.velocity_pid.size();
      for (auto item : msg.velocity_pid) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VelocityPidCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: device_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.device_ids.size() == 0) {
      out << "device_ids: []\n";
    } else {
      out << "device_ids:\n";
      for (auto item : msg.device_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: velocity_pid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocity_pid.size() == 0) {
      out << "velocity_pid: []\n";
    } else {
      out << "velocity_pid:\n";
      for (auto item : msg.velocity_pid) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VelocityPidCmd & msg, bool use_flow_style = false)
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
  const candle_ros2::msg::VelocityPidCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  candle_ros2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use candle_ros2::msg::to_yaml() instead")]]
inline std::string to_yaml(const candle_ros2::msg::VelocityPidCmd & msg)
{
  return candle_ros2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<candle_ros2::msg::VelocityPidCmd>()
{
  return "candle_ros2::msg::VelocityPidCmd";
}

template<>
inline const char * name<candle_ros2::msg::VelocityPidCmd>()
{
  return "candle_ros2/msg/VelocityPidCmd";
}

template<>
struct has_fixed_size<candle_ros2::msg::VelocityPidCmd>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<candle_ros2::msg::VelocityPidCmd>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<candle_ros2::msg::VelocityPidCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CANDLE_ROS2__MSG__DETAIL__VELOCITY_PID_CMD__TRAITS_HPP_

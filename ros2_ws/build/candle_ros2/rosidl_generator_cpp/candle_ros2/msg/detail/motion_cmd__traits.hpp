// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from candle_ros2:msg/MotionCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/msg/motion_cmd.hpp"


#ifndef CANDLE_ROS2__MSG__DETAIL__MOTION_CMD__TRAITS_HPP_
#define CANDLE_ROS2__MSG__DETAIL__MOTION_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "candle_ros2/msg/detail/motion_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace candle_ros2
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotionCmd & msg,
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

  // member: target_position
  {
    if (msg.target_position.size() == 0) {
      out << "target_position: []";
    } else {
      out << "target_position: [";
      size_t pending_items = msg.target_position.size();
      for (auto item : msg.target_position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: target_velocity
  {
    if (msg.target_velocity.size() == 0) {
      out << "target_velocity: []";
    } else {
      out << "target_velocity: [";
      size_t pending_items = msg.target_velocity.size();
      for (auto item : msg.target_velocity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: target_torque
  {
    if (msg.target_torque.size() == 0) {
      out << "target_torque: []";
    } else {
      out << "target_torque: [";
      size_t pending_items = msg.target_torque.size();
      for (auto item : msg.target_torque) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const MotionCmd & msg,
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

  // member: target_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_position.size() == 0) {
      out << "target_position: []\n";
    } else {
      out << "target_position:\n";
      for (auto item : msg.target_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: target_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_velocity.size() == 0) {
      out << "target_velocity: []\n";
    } else {
      out << "target_velocity:\n";
      for (auto item : msg.target_velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: target_torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_torque.size() == 0) {
      out << "target_torque: []\n";
    } else {
      out << "target_torque:\n";
      for (auto item : msg.target_torque) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotionCmd & msg, bool use_flow_style = false)
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
  const candle_ros2::msg::MotionCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  candle_ros2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use candle_ros2::msg::to_yaml() instead")]]
inline std::string to_yaml(const candle_ros2::msg::MotionCmd & msg)
{
  return candle_ros2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<candle_ros2::msg::MotionCmd>()
{
  return "candle_ros2::msg::MotionCmd";
}

template<>
inline const char * name<candle_ros2::msg::MotionCmd>()
{
  return "candle_ros2/msg/MotionCmd";
}

template<>
struct has_fixed_size<candle_ros2::msg::MotionCmd>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<candle_ros2::msg::MotionCmd>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<candle_ros2::msg::MotionCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CANDLE_ROS2__MSG__DETAIL__MOTION_CMD__TRAITS_HPP_

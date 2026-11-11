// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg/MultiArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/multi_array.hpp"


#ifndef INTERFACES__MSG__DETAIL__MULTI_ARRAY__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__MULTI_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces/msg/detail/multi_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MultiArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: rows
  {
    out << "rows: ";
    rosidl_generator_traits::value_to_yaml(msg.rows, out);
    out << ", ";
  }

  // member: cols
  {
    out << "cols: ";
    rosidl_generator_traits::value_to_yaml(msg.cols, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
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
  const MultiArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rows
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rows: ";
    rosidl_generator_traits::value_to_yaml(msg.rows, out);
    out << "\n";
  }

  // member: cols
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cols: ";
    rosidl_generator_traits::value_to_yaml(msg.cols, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
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

inline std::string to_yaml(const MultiArray & msg, bool use_flow_style = false)
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

}  // namespace interfaces

namespace rosidl_generator_traits
{

[[deprecated("use interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces::msg::MultiArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaces::msg::MultiArray & msg)
{
  return interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces::msg::MultiArray>()
{
  return "interfaces::msg::MultiArray";
}

template<>
inline const char * name<interfaces::msg::MultiArray>()
{
  return "interfaces/msg/MultiArray";
}

template<>
struct has_fixed_size<interfaces::msg::MultiArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::msg::MultiArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::msg::MultiArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__MULTI_ARRAY__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from candle_ros2:msg/ImpedanceCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/msg/impedance_cmd.hpp"


#ifndef CANDLE_ROS2__MSG__DETAIL__IMPEDANCE_CMD__BUILDER_HPP_
#define CANDLE_ROS2__MSG__DETAIL__IMPEDANCE_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "candle_ros2/msg/detail/impedance_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace candle_ros2
{

namespace msg
{

namespace builder
{

class Init_ImpedanceCmd_max_output
{
public:
  explicit Init_ImpedanceCmd_max_output(::candle_ros2::msg::ImpedanceCmd & msg)
  : msg_(msg)
  {}
  ::candle_ros2::msg::ImpedanceCmd max_output(::candle_ros2::msg::ImpedanceCmd::_max_output_type arg)
  {
    msg_.max_output = std::move(arg);
    return std::move(msg_);
  }

private:
  ::candle_ros2::msg::ImpedanceCmd msg_;
};

class Init_ImpedanceCmd_kd
{
public:
  explicit Init_ImpedanceCmd_kd(::candle_ros2::msg::ImpedanceCmd & msg)
  : msg_(msg)
  {}
  Init_ImpedanceCmd_max_output kd(::candle_ros2::msg::ImpedanceCmd::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return Init_ImpedanceCmd_max_output(msg_);
  }

private:
  ::candle_ros2::msg::ImpedanceCmd msg_;
};

class Init_ImpedanceCmd_kp
{
public:
  explicit Init_ImpedanceCmd_kp(::candle_ros2::msg::ImpedanceCmd & msg)
  : msg_(msg)
  {}
  Init_ImpedanceCmd_kd kp(::candle_ros2::msg::ImpedanceCmd::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_ImpedanceCmd_kd(msg_);
  }

private:
  ::candle_ros2::msg::ImpedanceCmd msg_;
};

class Init_ImpedanceCmd_device_ids
{
public:
  Init_ImpedanceCmd_device_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImpedanceCmd_kp device_ids(::candle_ros2::msg::ImpedanceCmd::_device_ids_type arg)
  {
    msg_.device_ids = std::move(arg);
    return Init_ImpedanceCmd_kp(msg_);
  }

private:
  ::candle_ros2::msg::ImpedanceCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::candle_ros2::msg::ImpedanceCmd>()
{
  return candle_ros2::msg::builder::Init_ImpedanceCmd_device_ids();
}

}  // namespace candle_ros2

#endif  // CANDLE_ROS2__MSG__DETAIL__IMPEDANCE_CMD__BUILDER_HPP_

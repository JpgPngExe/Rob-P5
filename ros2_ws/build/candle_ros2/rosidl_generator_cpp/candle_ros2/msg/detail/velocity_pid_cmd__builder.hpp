// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from candle_ros2:msg/VelocityPidCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/msg/velocity_pid_cmd.hpp"


#ifndef CANDLE_ROS2__MSG__DETAIL__VELOCITY_PID_CMD__BUILDER_HPP_
#define CANDLE_ROS2__MSG__DETAIL__VELOCITY_PID_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "candle_ros2/msg/detail/velocity_pid_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace candle_ros2
{

namespace msg
{

namespace builder
{

class Init_VelocityPidCmd_velocity_pid
{
public:
  explicit Init_VelocityPidCmd_velocity_pid(::candle_ros2::msg::VelocityPidCmd & msg)
  : msg_(msg)
  {}
  ::candle_ros2::msg::VelocityPidCmd velocity_pid(::candle_ros2::msg::VelocityPidCmd::_velocity_pid_type arg)
  {
    msg_.velocity_pid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::candle_ros2::msg::VelocityPidCmd msg_;
};

class Init_VelocityPidCmd_device_ids
{
public:
  Init_VelocityPidCmd_device_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VelocityPidCmd_velocity_pid device_ids(::candle_ros2::msg::VelocityPidCmd::_device_ids_type arg)
  {
    msg_.device_ids = std::move(arg);
    return Init_VelocityPidCmd_velocity_pid(msg_);
  }

private:
  ::candle_ros2::msg::VelocityPidCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::candle_ros2::msg::VelocityPidCmd>()
{
  return candle_ros2::msg::builder::Init_VelocityPidCmd_device_ids();
}

}  // namespace candle_ros2

#endif  // CANDLE_ROS2__MSG__DETAIL__VELOCITY_PID_CMD__BUILDER_HPP_

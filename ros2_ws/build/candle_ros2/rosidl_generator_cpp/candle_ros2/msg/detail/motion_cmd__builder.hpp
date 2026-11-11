// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from candle_ros2:msg/MotionCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/msg/motion_cmd.hpp"


#ifndef CANDLE_ROS2__MSG__DETAIL__MOTION_CMD__BUILDER_HPP_
#define CANDLE_ROS2__MSG__DETAIL__MOTION_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "candle_ros2/msg/detail/motion_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace candle_ros2
{

namespace msg
{

namespace builder
{

class Init_MotionCmd_target_torque
{
public:
  explicit Init_MotionCmd_target_torque(::candle_ros2::msg::MotionCmd & msg)
  : msg_(msg)
  {}
  ::candle_ros2::msg::MotionCmd target_torque(::candle_ros2::msg::MotionCmd::_target_torque_type arg)
  {
    msg_.target_torque = std::move(arg);
    return std::move(msg_);
  }

private:
  ::candle_ros2::msg::MotionCmd msg_;
};

class Init_MotionCmd_target_velocity
{
public:
  explicit Init_MotionCmd_target_velocity(::candle_ros2::msg::MotionCmd & msg)
  : msg_(msg)
  {}
  Init_MotionCmd_target_torque target_velocity(::candle_ros2::msg::MotionCmd::_target_velocity_type arg)
  {
    msg_.target_velocity = std::move(arg);
    return Init_MotionCmd_target_torque(msg_);
  }

private:
  ::candle_ros2::msg::MotionCmd msg_;
};

class Init_MotionCmd_target_position
{
public:
  explicit Init_MotionCmd_target_position(::candle_ros2::msg::MotionCmd & msg)
  : msg_(msg)
  {}
  Init_MotionCmd_target_velocity target_position(::candle_ros2::msg::MotionCmd::_target_position_type arg)
  {
    msg_.target_position = std::move(arg);
    return Init_MotionCmd_target_velocity(msg_);
  }

private:
  ::candle_ros2::msg::MotionCmd msg_;
};

class Init_MotionCmd_device_ids
{
public:
  Init_MotionCmd_device_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotionCmd_target_position device_ids(::candle_ros2::msg::MotionCmd::_device_ids_type arg)
  {
    msg_.device_ids = std::move(arg);
    return Init_MotionCmd_target_position(msg_);
  }

private:
  ::candle_ros2::msg::MotionCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::candle_ros2::msg::MotionCmd>()
{
  return candle_ros2::msg::builder::Init_MotionCmd_device_ids();
}

}  // namespace candle_ros2

#endif  // CANDLE_ROS2__MSG__DETAIL__MOTION_CMD__BUILDER_HPP_

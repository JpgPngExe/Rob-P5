// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from candle_ros2:msg/Pid.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/msg/pid.hpp"


#ifndef CANDLE_ROS2__MSG__DETAIL__PID__BUILDER_HPP_
#define CANDLE_ROS2__MSG__DETAIL__PID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "candle_ros2/msg/detail/pid__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace candle_ros2
{

namespace msg
{

namespace builder
{

class Init_Pid_max_output
{
public:
  explicit Init_Pid_max_output(::candle_ros2::msg::Pid & msg)
  : msg_(msg)
  {}
  ::candle_ros2::msg::Pid max_output(::candle_ros2::msg::Pid::_max_output_type arg)
  {
    msg_.max_output = std::move(arg);
    return std::move(msg_);
  }

private:
  ::candle_ros2::msg::Pid msg_;
};

class Init_Pid_i_windup
{
public:
  explicit Init_Pid_i_windup(::candle_ros2::msg::Pid & msg)
  : msg_(msg)
  {}
  Init_Pid_max_output i_windup(::candle_ros2::msg::Pid::_i_windup_type arg)
  {
    msg_.i_windup = std::move(arg);
    return Init_Pid_max_output(msg_);
  }

private:
  ::candle_ros2::msg::Pid msg_;
};

class Init_Pid_kd
{
public:
  explicit Init_Pid_kd(::candle_ros2::msg::Pid & msg)
  : msg_(msg)
  {}
  Init_Pid_i_windup kd(::candle_ros2::msg::Pid::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return Init_Pid_i_windup(msg_);
  }

private:
  ::candle_ros2::msg::Pid msg_;
};

class Init_Pid_ki
{
public:
  explicit Init_Pid_ki(::candle_ros2::msg::Pid & msg)
  : msg_(msg)
  {}
  Init_Pid_kd ki(::candle_ros2::msg::Pid::_ki_type arg)
  {
    msg_.ki = std::move(arg);
    return Init_Pid_kd(msg_);
  }

private:
  ::candle_ros2::msg::Pid msg_;
};

class Init_Pid_kp
{
public:
  Init_Pid_kp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pid_ki kp(::candle_ros2::msg::Pid::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_Pid_ki(msg_);
  }

private:
  ::candle_ros2::msg::Pid msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::candle_ros2::msg::Pid>()
{
  return candle_ros2::msg::builder::Init_Pid_kp();
}

}  // namespace candle_ros2

#endif  // CANDLE_ROS2__MSG__DETAIL__PID__BUILDER_HPP_

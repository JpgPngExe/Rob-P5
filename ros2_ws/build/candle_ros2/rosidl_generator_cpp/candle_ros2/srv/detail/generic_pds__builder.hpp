// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from candle_ros2:srv/GenericPds.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "candle_ros2/srv/generic_pds.hpp"


#ifndef CANDLE_ROS2__SRV__DETAIL__GENERIC_PDS__BUILDER_HPP_
#define CANDLE_ROS2__SRV__DETAIL__GENERIC_PDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "candle_ros2/srv/detail/generic_pds__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace candle_ros2
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::candle_ros2::srv::GenericPds_Request>()
{
  return ::candle_ros2::srv::GenericPds_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace candle_ros2


namespace candle_ros2
{

namespace srv
{

namespace builder
{

class Init_GenericPds_Response_success
{
public:
  Init_GenericPds_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::candle_ros2::srv::GenericPds_Response success(::candle_ros2::srv::GenericPds_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::candle_ros2::srv::GenericPds_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::candle_ros2::srv::GenericPds_Response>()
{
  return candle_ros2::srv::builder::Init_GenericPds_Response_success();
}

}  // namespace candle_ros2


namespace candle_ros2
{

namespace srv
{

namespace builder
{

class Init_GenericPds_Event_response
{
public:
  explicit Init_GenericPds_Event_response(::candle_ros2::srv::GenericPds_Event & msg)
  : msg_(msg)
  {}
  ::candle_ros2::srv::GenericPds_Event response(::candle_ros2::srv::GenericPds_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::candle_ros2::srv::GenericPds_Event msg_;
};

class Init_GenericPds_Event_request
{
public:
  explicit Init_GenericPds_Event_request(::candle_ros2::srv::GenericPds_Event & msg)
  : msg_(msg)
  {}
  Init_GenericPds_Event_response request(::candle_ros2::srv::GenericPds_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GenericPds_Event_response(msg_);
  }

private:
  ::candle_ros2::srv::GenericPds_Event msg_;
};

class Init_GenericPds_Event_info
{
public:
  Init_GenericPds_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GenericPds_Event_request info(::candle_ros2::srv::GenericPds_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GenericPds_Event_request(msg_);
  }

private:
  ::candle_ros2::srv::GenericPds_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::candle_ros2::srv::GenericPds_Event>()
{
  return candle_ros2::srv::builder::Init_GenericPds_Event_info();
}

}  // namespace candle_ros2

#endif  // CANDLE_ROS2__SRV__DETAIL__GENERIC_PDS__BUILDER_HPP_

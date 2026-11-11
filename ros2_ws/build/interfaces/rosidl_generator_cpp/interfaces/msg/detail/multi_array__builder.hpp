// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/MultiArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/msg/multi_array.hpp"


#ifndef INTERFACES__MSG__DETAIL__MULTI_ARRAY__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__MULTI_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/multi_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_MultiArray_data
{
public:
  explicit Init_MultiArray_data(::interfaces::msg::MultiArray & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::MultiArray data(::interfaces::msg::MultiArray::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::MultiArray msg_;
};

class Init_MultiArray_cols
{
public:
  explicit Init_MultiArray_cols(::interfaces::msg::MultiArray & msg)
  : msg_(msg)
  {}
  Init_MultiArray_data cols(::interfaces::msg::MultiArray::_cols_type arg)
  {
    msg_.cols = std::move(arg);
    return Init_MultiArray_data(msg_);
  }

private:
  ::interfaces::msg::MultiArray msg_;
};

class Init_MultiArray_rows
{
public:
  Init_MultiArray_rows()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MultiArray_cols rows(::interfaces::msg::MultiArray::_rows_type arg)
  {
    msg_.rows = std::move(arg);
    return Init_MultiArray_cols(msg_);
  }

private:
  ::interfaces::msg::MultiArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::MultiArray>()
{
  return interfaces::msg::builder::Init_MultiArray_rows();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__MULTI_ARRAY__BUILDER_HPP_

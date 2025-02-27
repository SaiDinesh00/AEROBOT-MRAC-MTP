// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from aerobot_interfaces:msg\EscMsg.idl
// generated code does not contain a copyright notice

#ifndef AEROBOT_INTERFACES__MSG__DETAIL__ESC_MSG__BUILDER_HPP_
#define AEROBOT_INTERFACES__MSG__DETAIL__ESC_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "aerobot_interfaces/msg/detail/esc_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace aerobot_interfaces
{

namespace msg
{

namespace builder
{

class Init_EscMsg_pulse_width
{
public:
  Init_EscMsg_pulse_width()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::aerobot_interfaces::msg::EscMsg pulse_width(::aerobot_interfaces::msg::EscMsg::_pulse_width_type arg)
  {
    msg_.pulse_width = std::move(arg);
    return std::move(msg_);
  }

private:
  ::aerobot_interfaces::msg::EscMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::aerobot_interfaces::msg::EscMsg>()
{
  return aerobot_interfaces::msg::builder::Init_EscMsg_pulse_width();
}

}  // namespace aerobot_interfaces

#endif  // AEROBOT_INTERFACES__MSG__DETAIL__ESC_MSG__BUILDER_HPP_

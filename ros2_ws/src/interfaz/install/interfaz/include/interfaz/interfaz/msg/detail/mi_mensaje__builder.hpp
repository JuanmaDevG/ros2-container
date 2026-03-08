// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaz:msg/MiMensaje.idl
// generated code does not contain a copyright notice

#ifndef INTERFAZ__MSG__DETAIL__MI_MENSAJE__BUILDER_HPP_
#define INTERFAZ__MSG__DETAIL__MI_MENSAJE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaz/msg/detail/mi_mensaje__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaz
{

namespace msg
{

namespace builder
{

class Init_MiMensaje_y
{
public:
  explicit Init_MiMensaje_y(::interfaz::msg::MiMensaje & msg)
  : msg_(msg)
  {}
  ::interfaz::msg::MiMensaje y(::interfaz::msg::MiMensaje::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaz::msg::MiMensaje msg_;
};

class Init_MiMensaje_x
{
public:
  Init_MiMensaje_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MiMensaje_y x(::interfaz::msg::MiMensaje::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_MiMensaje_y(msg_);
  }

private:
  ::interfaz::msg::MiMensaje msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaz::msg::MiMensaje>()
{
  return interfaz::msg::builder::Init_MiMensaje_x();
}

}  // namespace interfaz

#endif  // INTERFAZ__MSG__DETAIL__MI_MENSAJE__BUILDER_HPP_

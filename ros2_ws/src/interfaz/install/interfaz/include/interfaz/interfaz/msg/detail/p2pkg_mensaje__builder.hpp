// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaz:msg/P2pkgMensaje.idl
// generated code does not contain a copyright notice

#ifndef INTERFAZ__MSG__DETAIL__P2PKG_MENSAJE__BUILDER_HPP_
#define INTERFAZ__MSG__DETAIL__P2PKG_MENSAJE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaz/msg/detail/p2pkg_mensaje__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaz
{

namespace msg
{

namespace builder
{

class Init_P2pkgMensaje_fecha
{
public:
  explicit Init_P2pkgMensaje_fecha(::interfaz::msg::P2pkgMensaje & msg)
  : msg_(msg)
  {}
  ::interfaz::msg::P2pkgMensaje fecha(::interfaz::msg::P2pkgMensaje::_fecha_type arg)
  {
    msg_.fecha = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaz::msg::P2pkgMensaje msg_;
};

class Init_P2pkgMensaje_posicion
{
public:
  explicit Init_P2pkgMensaje_posicion(::interfaz::msg::P2pkgMensaje & msg)
  : msg_(msg)
  {}
  Init_P2pkgMensaje_fecha posicion(::interfaz::msg::P2pkgMensaje::_posicion_type arg)
  {
    msg_.posicion = std::move(arg);
    return Init_P2pkgMensaje_fecha(msg_);
  }

private:
  ::interfaz::msg::P2pkgMensaje msg_;
};

class Init_P2pkgMensaje_numero
{
public:
  Init_P2pkgMensaje_numero()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_P2pkgMensaje_posicion numero(::interfaz::msg::P2pkgMensaje::_numero_type arg)
  {
    msg_.numero = std::move(arg);
    return Init_P2pkgMensaje_posicion(msg_);
  }

private:
  ::interfaz::msg::P2pkgMensaje msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaz::msg::P2pkgMensaje>()
{
  return interfaz::msg::builder::Init_P2pkgMensaje_numero();
}

}  // namespace interfaz

#endif  // INTERFAZ__MSG__DETAIL__P2PKG_MENSAJE__BUILDER_HPP_

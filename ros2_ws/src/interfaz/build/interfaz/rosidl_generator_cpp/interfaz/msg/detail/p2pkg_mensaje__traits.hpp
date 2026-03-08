// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaz:msg/P2pkgMensaje.idl
// generated code does not contain a copyright notice

#ifndef INTERFAZ__MSG__DETAIL__P2PKG_MENSAJE__TRAITS_HPP_
#define INTERFAZ__MSG__DETAIL__P2PKG_MENSAJE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaz/msg/detail/p2pkg_mensaje__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'posicion'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace interfaz
{

namespace msg
{

inline void to_flow_style_yaml(
  const P2pkgMensaje & msg,
  std::ostream & out)
{
  out << "{";
  // member: numero
  {
    out << "numero: ";
    rosidl_generator_traits::value_to_yaml(msg.numero, out);
    out << ", ";
  }

  // member: posicion
  {
    out << "posicion: ";
    to_flow_style_yaml(msg.posicion, out);
    out << ", ";
  }

  // member: fecha
  {
    out << "fecha: ";
    rosidl_generator_traits::value_to_yaml(msg.fecha, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const P2pkgMensaje & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: numero
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "numero: ";
    rosidl_generator_traits::value_to_yaml(msg.numero, out);
    out << "\n";
  }

  // member: posicion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posicion:\n";
    to_block_style_yaml(msg.posicion, out, indentation + 2);
  }

  // member: fecha
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fecha: ";
    rosidl_generator_traits::value_to_yaml(msg.fecha, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const P2pkgMensaje & msg, bool use_flow_style = false)
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

}  // namespace interfaz

namespace rosidl_generator_traits
{

[[deprecated("use interfaz::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaz::msg::P2pkgMensaje & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaz::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaz::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaz::msg::P2pkgMensaje & msg)
{
  return interfaz::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaz::msg::P2pkgMensaje>()
{
  return "interfaz::msg::P2pkgMensaje";
}

template<>
inline const char * name<interfaz::msg::P2pkgMensaje>()
{
  return "interfaz/msg/P2pkgMensaje";
}

template<>
struct has_fixed_size<interfaz::msg::P2pkgMensaje>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaz::msg::P2pkgMensaje>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaz::msg::P2pkgMensaje>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFAZ__MSG__DETAIL__P2PKG_MENSAJE__TRAITS_HPP_

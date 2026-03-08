// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaz:msg/MiMensaje.idl
// generated code does not contain a copyright notice

#ifndef INTERFAZ__MSG__DETAIL__MI_MENSAJE__TRAITS_HPP_
#define INTERFAZ__MSG__DETAIL__MI_MENSAJE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaz/msg/detail/mi_mensaje__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaz
{

namespace msg
{

inline void to_flow_style_yaml(
  const MiMensaje & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MiMensaje & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MiMensaje & msg, bool use_flow_style = false)
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
  const interfaz::msg::MiMensaje & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaz::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaz::msg::to_yaml() instead")]]
inline std::string to_yaml(const interfaz::msg::MiMensaje & msg)
{
  return interfaz::msg::to_yaml(msg);
}

template<>
inline const char * data_type<interfaz::msg::MiMensaje>()
{
  return "interfaz::msg::MiMensaje";
}

template<>
inline const char * name<interfaz::msg::MiMensaje>()
{
  return "interfaz/msg/MiMensaje";
}

template<>
struct has_fixed_size<interfaz::msg::MiMensaje>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaz::msg::MiMensaje>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaz::msg::MiMensaje>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFAZ__MSG__DETAIL__MI_MENSAJE__TRAITS_HPP_

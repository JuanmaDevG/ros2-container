// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaz:msg/P2pkgMensaje.idl
// generated code does not contain a copyright notice

#ifndef INTERFAZ__MSG__DETAIL__P2PKG_MENSAJE__STRUCT_HPP_
#define INTERFAZ__MSG__DETAIL__P2PKG_MENSAJE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'posicion'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaz__msg__P2pkgMensaje __attribute__((deprecated))
#else
# define DEPRECATED__interfaz__msg__P2pkgMensaje __declspec(deprecated)
#endif

namespace interfaz
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct P2pkgMensaje_
{
  using Type = P2pkgMensaje_<ContainerAllocator>;

  explicit P2pkgMensaje_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : posicion(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->numero = 0l;
      this->fecha = "";
    }
  }

  explicit P2pkgMensaje_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : posicion(_alloc, _init),
    fecha(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->numero = 0l;
      this->fecha = "";
    }
  }

  // field types and members
  using _numero_type =
    int32_t;
  _numero_type numero;
  using _posicion_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _posicion_type posicion;
  using _fecha_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _fecha_type fecha;

  // setters for named parameter idiom
  Type & set__numero(
    const int32_t & _arg)
  {
    this->numero = _arg;
    return *this;
  }
  Type & set__posicion(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->posicion = _arg;
    return *this;
  }
  Type & set__fecha(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->fecha = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaz::msg::P2pkgMensaje_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaz::msg::P2pkgMensaje_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaz::msg::P2pkgMensaje_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaz::msg::P2pkgMensaje_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaz::msg::P2pkgMensaje_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaz::msg::P2pkgMensaje_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaz::msg::P2pkgMensaje_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaz::msg::P2pkgMensaje_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaz::msg::P2pkgMensaje_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaz::msg::P2pkgMensaje_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaz__msg__P2pkgMensaje
    std::shared_ptr<interfaz::msg::P2pkgMensaje_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaz__msg__P2pkgMensaje
    std::shared_ptr<interfaz::msg::P2pkgMensaje_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const P2pkgMensaje_ & other) const
  {
    if (this->numero != other.numero) {
      return false;
    }
    if (this->posicion != other.posicion) {
      return false;
    }
    if (this->fecha != other.fecha) {
      return false;
    }
    return true;
  }
  bool operator!=(const P2pkgMensaje_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct P2pkgMensaje_

// alias to use template instance with default allocator
using P2pkgMensaje =
  interfaz::msg::P2pkgMensaje_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaz

#endif  // INTERFAZ__MSG__DETAIL__P2PKG_MENSAJE__STRUCT_HPP_

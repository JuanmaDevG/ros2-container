// generated from rosidl_generator_cpp/resource/rosidl_generator_cpp__visibility_control.hpp.in
// generated code does not contain a copyright notice

#ifndef INTERFAZ__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_
#define INTERFAZ__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_CPP_EXPORT_interfaz __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_CPP_IMPORT_interfaz __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_CPP_EXPORT_interfaz __declspec(dllexport)
    #define ROSIDL_GENERATOR_CPP_IMPORT_interfaz __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_CPP_BUILDING_DLL_interfaz
    #define ROSIDL_GENERATOR_CPP_PUBLIC_interfaz ROSIDL_GENERATOR_CPP_EXPORT_interfaz
  #else
    #define ROSIDL_GENERATOR_CPP_PUBLIC_interfaz ROSIDL_GENERATOR_CPP_IMPORT_interfaz
  #endif
#else
  #define ROSIDL_GENERATOR_CPP_EXPORT_interfaz __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_CPP_IMPORT_interfaz
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_CPP_PUBLIC_interfaz __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_CPP_PUBLIC_interfaz
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // INTERFAZ__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_

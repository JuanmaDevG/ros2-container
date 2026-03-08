#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "interfaz::interfaz__rosidl_generator_py" for configuration ""
set_property(TARGET interfaz::interfaz__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(interfaz::interfaz__rosidl_generator_py PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libinterfaz__rosidl_generator_py.so"
  IMPORTED_SONAME_NOCONFIG "libinterfaz__rosidl_generator_py.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS interfaz::interfaz__rosidl_generator_py )
list(APPEND _IMPORT_CHECK_FILES_FOR_interfaz::interfaz__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libinterfaz__rosidl_generator_py.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)

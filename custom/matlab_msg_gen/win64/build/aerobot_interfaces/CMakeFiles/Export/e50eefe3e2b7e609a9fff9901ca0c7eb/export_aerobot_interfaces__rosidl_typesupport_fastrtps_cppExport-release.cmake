#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "aerobot_interfaces::aerobot_interfaces__rosidl_typesupport_fastrtps_cpp" for configuration "Release"
set_property(TARGET aerobot_interfaces::aerobot_interfaces__rosidl_typesupport_fastrtps_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(aerobot_interfaces::aerobot_interfaces__rosidl_typesupport_fastrtps_cpp PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/aerobot_interfaces__rosidl_typesupport_fastrtps_cpp.lib"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/aerobot_interfaces__rosidl_typesupport_fastrtps_cpp.dll"
  )

list(APPEND _cmake_import_check_targets aerobot_interfaces::aerobot_interfaces__rosidl_typesupport_fastrtps_cpp )
list(APPEND _cmake_import_check_files_for_aerobot_interfaces::aerobot_interfaces__rosidl_typesupport_fastrtps_cpp "${_IMPORT_PREFIX}/lib/aerobot_interfaces__rosidl_typesupport_fastrtps_cpp.lib" "${_IMPORT_PREFIX}/bin/aerobot_interfaces__rosidl_typesupport_fastrtps_cpp.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)

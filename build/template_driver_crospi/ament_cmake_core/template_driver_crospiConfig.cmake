# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_template_driver_crospi_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED template_driver_crospi_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(template_driver_crospi_FOUND FALSE)
  elseif(NOT template_driver_crospi_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(template_driver_crospi_FOUND FALSE)
  endif()
  return()
endif()
set(_template_driver_crospi_CONFIG_INCLUDED TRUE)

# output package information
if(NOT template_driver_crospi_FIND_QUIETLY)
  message(STATUS "Found template_driver_crospi: 0.0.0 (${template_driver_crospi_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'template_driver_crospi' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${template_driver_crospi_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(template_driver_crospi_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${template_driver_crospi_DIR}/${_extra}")
endforeach()

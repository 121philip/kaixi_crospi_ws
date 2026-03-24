# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_crospi_application_template_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED crospi_application_template_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(crospi_application_template_FOUND FALSE)
  elseif(NOT crospi_application_template_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(crospi_application_template_FOUND FALSE)
  endif()
  return()
endif()
set(_crospi_application_template_CONFIG_INCLUDED TRUE)

# output package information
if(NOT crospi_application_template_FIND_QUIETLY)
  message(STATUS "Found crospi_application_template: 0.0.0 (${crospi_application_template_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'crospi_application_template' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${crospi_application_template_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(crospi_application_template_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${crospi_application_template_DIR}/${_extra}")
endforeach()

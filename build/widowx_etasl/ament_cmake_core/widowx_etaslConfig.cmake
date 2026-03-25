# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_widowx_etasl_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED widowx_etasl_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(widowx_etasl_FOUND FALSE)
  elseif(NOT widowx_etasl_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(widowx_etasl_FOUND FALSE)
  endif()
  return()
endif()
set(_widowx_etasl_CONFIG_INCLUDED TRUE)

# output package information
if(NOT widowx_etasl_FIND_QUIETLY)
  message(STATUS "Found widowx_etasl: 0.0.1 (${widowx_etasl_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'widowx_etasl' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${widowx_etasl_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(widowx_etasl_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${widowx_etasl_DIR}/${_extra}")
endforeach()

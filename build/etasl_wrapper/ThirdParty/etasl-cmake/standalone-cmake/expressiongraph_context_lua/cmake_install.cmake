# Install script for directory: /home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph_context_lua

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/masterthesis/kaixi_crospi_ws/install/etasl_wrapper")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexpressiongraph_context_lua.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexpressiongraph_context_lua.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexpressiongraph_context_lua.so"
         RPATH "/home/masterthesis/kaixi_crospi_ws/install/etasl_wrapper/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph_context_lua/libexpressiongraph_context_lua.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexpressiongraph_context_lua.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexpressiongraph_context_lua.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexpressiongraph_context_lua.so"
         OLD_RPATH "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph_lua:/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph_context:/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph:"
         NEW_RPATH "/home/masterthesis/kaixi_crospi_ws/install/etasl_wrapper/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libexpressiongraph_context_lua.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/" TYPE DIRECTORY FILES "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph_context_lua/../../etasl/expressiongraph_context_lua/include/" FILES_MATCHING REGEX "/[^/]*\\.hpp$")
endif()


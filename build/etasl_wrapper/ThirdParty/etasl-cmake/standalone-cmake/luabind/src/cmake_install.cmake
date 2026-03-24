# Install script for directory: /home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xsdkx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/luabind" TYPE FILE FILES
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/adopt_policy.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/back_reference_fwd.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/back_reference.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/class.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/class_info.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/config.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/container_policy.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/copy_policy.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/dependency_policy.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/discard_result_policy.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/error_callback_fun.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/error.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/exception_handler.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/from_stack.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/function_converter.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/function.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/function_introspection.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/get_main_thread.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/get_pointer.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/handle.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/intrusive_ptr_converter.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/iterator_policy.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/luabind.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/lua_include.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/lua_state_fwd.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/make_function.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/nil.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/no_dependency.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/object_fwd.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/object.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/open.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/operator.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/out_value_policy.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/prefix.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/raw_policy.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/return_reference_to_policy.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/scope.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/set_package_preload.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/shared_ptr_converter.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/stack.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/std_shared_ptr_converter.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/tag_function.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/typeid.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/value_wrapper.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/version.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/weak_ref.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/wrapper_base.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/yield_policy.hpp"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xsdkx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/luabind/detail" TYPE FILE FILES
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/detail/call_function.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/detail/call.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/detail/call_member.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/detail/call_operator_iterate.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/detail/class_registry.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/detail/class_rep.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/detail/constructor.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/detail/convert_to_lua.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/detail/debug.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/detail/decorate_type.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/detail/deduce_signature.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/detail/enum_maker.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/detail/format_signature.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/detail/garbage_collector.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/detail/has_get_pointer.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/detail/inheritance.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/detail/instance_holder.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/detail/link_compatibility.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/detail/make_instance.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/detail/most_derived.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/detail/object_call.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/detail/object.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/detail/object_rep.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/detail/operator_id.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/detail/other.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/detail/pcall.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/detail/pointee_sizeof.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/detail/policy.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/detail/primitives.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/detail/property.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/detail/signature_match.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/detail/stack_utils.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/detail/typetraits.hpp"
    "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind/src/../luabind/detail/yes_no.hpp"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xsdkx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/luabind/src/libluabind09.a")
endif()


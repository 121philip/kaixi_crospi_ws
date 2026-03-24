# generated from
# ament_cmake_core/cmake/symlink_install/ament_cmake_symlink_install.cmake.in

# create empty symlink install manifest before starting install step
file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/symlink_install_manifest.txt")

#
# Reimplement CMake install(DIRECTORY) command to use symlinks instead of
# copying resources.
#
# :param cmake_current_source_dir: The CMAKE_CURRENT_SOURCE_DIR when install
#   was invoked
# :type cmake_current_source_dir: string
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_directory cmake_current_source_dir)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION" "DIRECTORY;PATTERN;PATTERN_EXCLUDE" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_directory() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/home/masterthesis/kaixi_crospi_ws/install/etasl_wrapper/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  # default pattern to include
  if(NOT ARG_PATTERN)
    set(ARG_PATTERN "*")
  endif()

  # iterate over directories
  foreach(dir ${ARG_DIRECTORY})
    # make dir an absolute path
    if(NOT IS_ABSOLUTE "${dir}")
      set(dir "${cmake_current_source_dir}/${dir}")
    endif()

    if(EXISTS "${dir}")
      # if directory has no trailing slash
      # append folder name to destination
      set(destination "${ARG_DESTINATION}")
      string(LENGTH "${dir}" length)
      math(EXPR offset "${length} - 1")
      string(SUBSTRING "${dir}" ${offset} 1 dir_last_char)
      if(NOT dir_last_char STREQUAL "/")
        get_filename_component(destination_name "${dir}" NAME)
        set(destination "${destination}/${destination_name}")
      else()
        # remove trailing slash
        string(SUBSTRING "${dir}" 0 ${offset} dir)
      endif()
      
      # Create destination directory.
      # This does *not* solve the problem of empty directories WITHIN the install tree,
      # but does make sure that the top-level directory specified by the caller gets created.
      file(MAKE_DIRECTORY "${destination}")

      # glob recursive files
      set(relative_files "")
      foreach(pattern ${ARG_PATTERN})
        file(
          GLOB_RECURSE
          include_files
          RELATIVE "${dir}"
          "${dir}/${pattern}"
        )
        if(NOT include_files STREQUAL "")
          list(APPEND relative_files ${include_files})
        endif()
      endforeach()
      foreach(pattern ${ARG_PATTERN_EXCLUDE})
        file(
          GLOB_RECURSE
          exclude_files
          RELATIVE "${dir}"
          "${dir}/${pattern}"
        )
        if(NOT exclude_files STREQUAL "")
          list(REMOVE_ITEM relative_files ${exclude_files})
        endif()
      endforeach()
      list(SORT relative_files)

      foreach(relative_file ${relative_files})
        set(absolute_file "${dir}/${relative_file}")
        # determine link name for file including destination path
        set(symlink "${destination}/${relative_file}")

        # ensure that destination exists
        get_filename_component(symlink_dir "${symlink}" PATH)
        if(NOT EXISTS "${symlink_dir}")
          file(MAKE_DIRECTORY "${symlink_dir}")
        endif()

        _ament_cmake_symlink_install_create_symlink("${absolute_file}" "${symlink}")
      endforeach()
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_directory() can't find '${dir}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(FILES) command to use symlinks instead of copying
# resources.
#
# :param cmake_current_source_dir: The CMAKE_CURRENT_SOURCE_DIR when install
#   was invoked
# :type cmake_current_source_dir: string
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_files cmake_current_source_dir)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION;RENAME" "FILES" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_files() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination an absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/home/masterthesis/kaixi_crospi_ws/install/etasl_wrapper/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  if(ARG_RENAME)
    list(LENGTH ARG_FILES file_count)
    if(NOT file_count EQUAL 1)
    message(FATAL_ERROR "ament_cmake_symlink_install_files() called with "
      "RENAME argument but not with a single file")
    endif()
  endif()

  # iterate over files
  foreach(file ${ARG_FILES})
    # make file an absolute path
    if(NOT IS_ABSOLUTE "${file}")
      set(file "${cmake_current_source_dir}/${file}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      if(NOT ARG_RENAME)
        set(symlink "${ARG_DESTINATION}/${filename}")
      else()
        set(symlink "${ARG_DESTINATION}/${ARG_RENAME}")
      endif()
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_files() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(PROGRAMS) command to use symlinks instead of copying
# resources.
#
# :param cmake_current_source_dir: The CMAKE_CURRENT_SOURCE_DIR when install
#   was invoked
# :type cmake_current_source_dir: string
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_programs cmake_current_source_dir)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION" "PROGRAMS" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_programs() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination an absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/home/masterthesis/kaixi_crospi_ws/install/etasl_wrapper/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  # iterate over programs
  foreach(file ${ARG_PROGRAMS})
    # make file an absolute path
    if(NOT IS_ABSOLUTE "${file}")
      set(file "${cmake_current_source_dir}/${file}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      set(symlink "${ARG_DESTINATION}/${filename}")
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_programs() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(TARGETS) command to use symlinks instead of copying
# resources.
#
# :param TARGET_FILES: the absolute files, replacing the name of targets passed
#   in as TARGETS
# :type TARGET_FILES: list of files
# :param ARGN: the same arguments as the CMake install command except that
#   keywords identifying the kind of type and the DESTINATION keyword must be
#   joined with an underscore, e.g. ARCHIVE_DESTINATION.
# :type ARGN: various
#
function(ament_cmake_symlink_install_targets)
  cmake_parse_arguments(ARG "OPTIONAL" "ARCHIVE_DESTINATION;DESTINATION;LIBRARY_DESTINATION;RUNTIME_DESTINATION"
    "TARGETS;TARGET_FILES" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_targets() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # iterate over target files
  foreach(file ${ARG_TARGET_FILES})
    if(NOT IS_ABSOLUTE "${file}")
      message(FATAL_ERROR "ament_cmake_symlink_install_targets() target file "
        "'${file}' must be an absolute path")
    endif()

    # determine destination of file based on extension
    set(destination "")
    get_filename_component(fileext "${file}" EXT)
    if(fileext STREQUAL ".a" OR fileext STREQUAL ".lib")
      set(destination "${ARG_ARCHIVE_DESTINATION}")
    elseif(fileext STREQUAL ".dylib" OR fileext MATCHES "\\.so(\\.[0-9]+)?(\\.[0-9]+)?(\\.[0-9]+)?$")
      set(destination "${ARG_LIBRARY_DESTINATION}")
    elseif(fileext STREQUAL "" OR fileext STREQUAL ".dll" OR fileext STREQUAL ".exe")
      set(destination "${ARG_RUNTIME_DESTINATION}")
    endif()
    if(destination STREQUAL "")
      set(destination "${ARG_DESTINATION}")
    endif()

    # make destination an absolute path and ensure that it exists
    if(NOT IS_ABSOLUTE "${destination}")
      set(destination "/home/masterthesis/kaixi_crospi_ws/install/etasl_wrapper/${destination}")
    endif()
    if(NOT EXISTS "${destination}")
      file(MAKE_DIRECTORY "${destination}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      set(symlink "${destination}/${filename}")
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_targets() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

function(_ament_cmake_symlink_install_create_symlink absolute_file symlink)
  # register symlink for being removed during install step
  file(APPEND "${CMAKE_CURRENT_BINARY_DIR}/symlink_install_manifest.txt"
    "${symlink}\n")

  # avoid any work if correct symlink is already in place
  if(EXISTS "${symlink}" AND IS_SYMLINK "${symlink}")
    get_filename_component(destination "${symlink}" REALPATH)
    get_filename_component(real_absolute_file "${absolute_file}" REALPATH)
    if(destination STREQUAL real_absolute_file)
      message(STATUS "Up-to-date symlink: ${symlink}")
      return()
    endif()
  endif()

  message(STATUS "Symlinking: ${symlink}")
  if(EXISTS "${symlink}" OR IS_SYMLINK "${symlink}")
    file(REMOVE "${symlink}")
  endif()

  execute_process(
    COMMAND "/usr/bin/cmake" "-E" "create_symlink"
      "${absolute_file}"
      "${symlink}"
  )
  # the CMake command does not provide a return code so check manually
  if(NOT EXISTS "${symlink}" OR NOT IS_SYMLINK "${symlink}")
    get_filename_component(destination "${symlink}" REALPATH)
    message(FATAL_ERROR
      "Could not create symlink '${symlink}' pointing to '${absolute_file}'")
  endif()
endfunction()

# end of template

message(STATUS "Execute custom install script")

# begin of custom install code

# install(FILES "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ament_cmake_environment_hooks/etasl_wrapper.sh" "DESTINATION" "share/etasl_wrapper/environment")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper" FILES "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ament_cmake_environment_hooks/etasl_wrapper.sh" "DESTINATION" "share/etasl_wrapper/environment")

# install(FILES "cmake/Modules/FindLuabind.cmake" "DESTINATION" "lib/cmake/Luabind")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind" FILES "cmake/Modules/FindLuabind.cmake" "DESTINATION" "lib/cmake/Luabind")

# install(FILES "cmake/Modules/FindLua52.cmake" "DESTINATION" "lib/cmake/Lua52")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind" FILES "cmake/Modules/FindLua52.cmake" "DESTINATION" "lib/cmake/Lua52")

# install(FILES "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/luabind/luabind/build_information.hpp" "DESTINATION" "include/luabind")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/etasl/luabind" FILES "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/luabind/luabind/build_information.hpp" "DESTINATION" "include/luabind")

# install(FILES "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph/expressiongraph.pc" "DESTINATION" "lib/pkgconfig")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph" FILES "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph/expressiongraph.pc" "DESTINATION" "lib/pkgconfig")

# install("TARGETS" "conversions_example" "debug1" "expressiontree_cached_named" "expressiontree_conditional" "expressiontree_distance_to_line" "expressiontree_example" "expressiontree_example10" "expressiontree_example11" "expressiontree_example12" "expressiontree_example2" "expressiontree_example3" "expressiontree_example4" "expressiontree_example5" "expressiontree_example6" "expressiontree_example7" "expressiontree_example8" "expressiontree_example9" "expressiontree_mimo_ex" "expressiontree_motion_profile" "expressiontree_motion_profile2" "expressiontree_optimizer" "expressiontree_perpendicular" "expressiontree_sensor" "expressiontree_trait" "expressiontree_function1" "expressiontree_function2" "expressiontree_variabletype" "geometry" "initial_value" "matrix_traits" "mptrap_tst" "resolved_motion_rate_control" "saturate" "solving_and_cloning" "tutorial1" "tutorial2" "tutorial3" "quat" "DESTINATION" "share/doc/etasl/expressiongraph/examples")
include("/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph/ament_cmake_symlink_install_targets_0_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install(FILES "../../etasl/expressiongraph/LICENSE" "../../etasl/expressiongraph/license_EUPL_v1_1_en.pdf" "../../etasl/expressiongraph/COPYING" "../../etasl/expressiongraph/README.md" "DESTINATION" "share/doc/etasl/expressiongraph")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph" FILES "../../etasl/expressiongraph/LICENSE" "../../etasl/expressiongraph/license_EUPL_v1_1_en.pdf" "../../etasl/expressiongraph/COPYING" "../../etasl/expressiongraph/README.md" "DESTINATION" "share/doc/etasl/expressiongraph")

# install(FILES "expressiongraphConfig.cmake" "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph/expressiongraphConfigVersion.cmake" "DESTINATION" "lib/cmake/expressiongraph")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph" FILES "expressiongraphConfig.cmake" "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph/expressiongraphConfigVersion.cmake" "DESTINATION" "lib/cmake/expressiongraph")

# install(FILES "../../etasl/expressiongraph_context/LICENSE" "../../etasl/expressiongraph_context/readme.md" "DESTINATION" "share/doc/etasl/expressiongraph_context")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph_context" FILES "../../etasl/expressiongraph_context/LICENSE" "../../etasl/expressiongraph_context/readme.md" "DESTINATION" "share/doc/etasl/expressiongraph_context")

# install(DIRECTORY "../../etasl/expressiongraph_context/examples/" "DESTINATION" "share/doc/etasl/expressiongraph_context/examples")
ament_cmake_symlink_install_directory("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph_context" DIRECTORY "../../etasl/expressiongraph_context/examples/" "DESTINATION" "share/doc/etasl/expressiongraph_context/examples")

# install(FILES "../../etasl/expressiongraph_lua/readme.md" "../../etasl/expressiongraph_lua/doc_ilua.md" "../../etasl/expressiongraph_lua/LICENSE" "DESTINATION" "share/doc/etasl/expressiongraph_lua")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph_lua" FILES "../../etasl/expressiongraph_lua/readme.md" "../../etasl/expressiongraph_lua/doc_ilua.md" "../../etasl/expressiongraph_lua/LICENSE" "DESTINATION" "share/doc/etasl/expressiongraph_lua")

# install(FILES "../../etasl/expressiongraph_lua/scripts/binding_ex1.lua" "../../etasl/expressiongraph_lua/scripts/binding_ex2.lua" "../../etasl/expressiongraph_lua/scripts/binding_ex3.lua" "../../etasl/expressiongraph_lua/scripts/binding_ex4.lua" "../../etasl/expressiongraph_lua/scripts/motionprofile_ex.lua" "../../etasl/expressiongraph_lua/scripts/rpy_ex.lua" "DESTINATION" "share/doc/etasl/expressiongraph_lua/examples")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph_lua" FILES "../../etasl/expressiongraph_lua/scripts/binding_ex1.lua" "../../etasl/expressiongraph_lua/scripts/binding_ex2.lua" "../../etasl/expressiongraph_lua/scripts/binding_ex3.lua" "../../etasl/expressiongraph_lua/scripts/binding_ex4.lua" "../../etasl/expressiongraph_lua/scripts/motionprofile_ex.lua" "../../etasl/expressiongraph_lua/scripts/rpy_ex.lua" "DESTINATION" "share/doc/etasl/expressiongraph_lua/examples")

# install(PROGRAMS "../../etasl/expressiongraph_lua/scripts/ilua.lua" "DESTINATION" "bin")
ament_cmake_symlink_install_programs("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph_lua" PROGRAMS "../../etasl/expressiongraph_lua/scripts/ilua.lua" "DESTINATION" "bin")

# install(FILES "../../etasl/expressiongraph_lua/scripts/rlcompleter.lua" "../../etasl/expressiongraph_lua/scripts/expressiongraph_lua.lua" "../../etasl/expressiongraph_lua/scripts/ilua.lua" "DESTINATION" "lib/etasl1.5")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph_lua" FILES "../../etasl/expressiongraph_lua/scripts/rlcompleter.lua" "../../etasl/expressiongraph_lua/scripts/expressiongraph_lua.lua" "../../etasl/expressiongraph_lua/scripts/ilua.lua" "DESTINATION" "lib/etasl1.5")

# install(DIRECTORY "../../etasl/expressiongraph_context_lua/scripts/lib/" "DESTINATION" "lib/etasl1.5")
ament_cmake_symlink_install_directory("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph_context_lua" DIRECTORY "../../etasl/expressiongraph_context_lua/scripts/lib/" "DESTINATION" "lib/etasl1.5")

# install(FILES "../../etasl/expressiongraph_context_lua/readme.md" "../../etasl/expressiongraph_context_lua/LICENSE" "DESTINATION" "share/doc/etasl/expressiongraph_context_lua")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph_context_lua" FILES "../../etasl/expressiongraph_context_lua/readme.md" "../../etasl/expressiongraph_context_lua/LICENSE" "DESTINATION" "share/doc/etasl/expressiongraph_context_lua")

# install(DIRECTORY "../../etasl/expressiongraph_solver_qpoases/external/qpOASES/qpOASES-3.2.1/include/" "DESTINATION" "include/")
ament_cmake_symlink_install_directory("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph_solver_qpoases" DIRECTORY "../../etasl/expressiongraph_solver_qpoases/external/qpOASES/qpOASES-3.2.1/include/" "DESTINATION" "include/")

# install("TARGETS" "expressiongraph_spline" "DESTINATION" "lib")
include("/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph_spline/ament_cmake_symlink_install_targets_1_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install("TARGETS" "expressiongraph_bspline" "DESTINATION" "lib")
include("/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph_bspline/ament_cmake_symlink_install_targets_2_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install("TARGETS" "bspline_test" "DESTINATION" "share/doc/etasl/expressiongraph_bspline/examples")
include("/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph_bspline/ament_cmake_symlink_install_targets_3_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install(FILES "../../etasl/expressiongraph_bspline/src/bspline_test.cpp" "DESTINATION" "share/doc/etasl/expressiongraph_bspline/examples")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph_bspline" FILES "../../etasl/expressiongraph_bspline/src/bspline_test.cpp" "DESTINATION" "share/doc/etasl/expressiongraph_bspline/examples")

# install(DIRECTORY "../../etasl/expressiongraph_bspline/scripts/lib/" "DESTINATION" "lib/etasl1.5")
ament_cmake_symlink_install_directory("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph_bspline" DIRECTORY "../../etasl/expressiongraph_bspline/scripts/lib/" "DESTINATION" "lib/etasl1.5")

# install(DIRECTORY "../../etasl/expressiongraph_bspline/include/" "DESTINATION" "include")
ament_cmake_symlink_install_directory("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph_bspline" DIRECTORY "../../etasl/expressiongraph_bspline/include/" "DESTINATION" "include")

# install(FILES "../../etasl/expressiongraph_bspline/readme.rst" "../../etasl/expressiongraph_bspline/LICENSE" "DESTINATION" "share/doc/etasl/expressiongraph_bspline")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph_bspline" FILES "../../etasl/expressiongraph_bspline/readme.rst" "../../etasl/expressiongraph_bspline/LICENSE" "DESTINATION" "share/doc/etasl/expressiongraph_bspline")

# install("TARGETS" "expressiongraph_velocities" "DESTINATION" "lib")
include("/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph_velocities/ament_cmake_symlink_install_targets_4_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install(FILES "../../etasl/expressiongraph_velocities/readme.rst" "../../etasl/expressiongraph_velocities/LICENSE" "DESTINATION" "share/doc/etasl/expressiongraph_velocities")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph_velocities" FILES "../../etasl/expressiongraph_velocities/readme.rst" "../../etasl/expressiongraph_velocities/LICENSE" "DESTINATION" "share/doc/etasl/expressiongraph_velocities")

# install(FILES "../../etasl/expressiongraph_velocities/scripts/example_velocities.lua" "DESTINATION" "share/doc/etasl/expressiongraph_velocities/examples")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph_velocities" FILES "../../etasl/expressiongraph_velocities/scripts/example_velocities.lua" "DESTINATION" "share/doc/etasl/expressiongraph_velocities/examples")

# install(DIRECTORY "../../etasl/expressiongraph_velocities/scripts/lib/" "DESTINATION" "lib/etasl1.5")
ament_cmake_symlink_install_directory("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph_velocities" DIRECTORY "../../etasl/expressiongraph_velocities/scripts/lib/" "DESTINATION" "lib/etasl1.5")

# install(FILES "../../etasl/worldmodel/worldmodel.rst" "../../etasl/worldmodel/taskframe_formalism.rst" "../../etasl/worldmodel/LICENSE.txt" "../../etasl/worldmodel/graphviz.md" "DESTINATION" "share/doc/etasl/worldmodel")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/worldmodel" FILES "../../etasl/worldmodel/worldmodel.rst" "../../etasl/worldmodel/taskframe_formalism.rst" "../../etasl/worldmodel/LICENSE.txt" "../../etasl/worldmodel/graphviz.md" "DESTINATION" "share/doc/etasl/worldmodel")

# install(FILES "../../etasl/worldmodel/figs/plainsvg_fixed.svg" "../../etasl/worldmodel/figs/plainsvg_revolute.svg" "../../etasl/worldmodel/figs/plainsvg_prismatic.svg" "../../etasl/worldmodel/figs/plainsvg_trajectory.svg" "DESTINATION" "share/doc/etasl/worldmodel/figures")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/worldmodel" FILES "../../etasl/worldmodel/figs/plainsvg_fixed.svg" "../../etasl/worldmodel/figs/plainsvg_revolute.svg" "../../etasl/worldmodel/figs/plainsvg_prismatic.svg" "../../etasl/worldmodel/figs/plainsvg_trajectory.svg" "DESTINATION" "share/doc/etasl/worldmodel/figures")

# install(FILES "../../etasl/worldmodel/robots/pr2.urdf" "../../etasl/worldmodel/robots/ur10_robot.urdf" "DESTINATION" "share/doc/etasl/worldmodel/robots")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/worldmodel" FILES "../../etasl/worldmodel/robots/pr2.urdf" "../../etasl/worldmodel/robots/ur10_robot.urdf" "DESTINATION" "share/doc/etasl/worldmodel/robots")

# install(FILES "../../etasl/worldmodel/examples/basic_usage.lua" "../../etasl/worldmodel/examples/basic_usage2.lua" "../../etasl/worldmodel/examples/dependencies.lua" "../../etasl/worldmodel/examples/generate_graph.lua" "../../etasl/worldmodel/examples/generate_expr.lua" "../../etasl/worldmodel/examples/manipulation.lua" "../../etasl/worldmodel/examples/saving_loading.lua" "DESTINATION" "share/doc/etasl/worldmodel/examples")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/worldmodel" FILES "../../etasl/worldmodel/examples/basic_usage.lua" "../../etasl/worldmodel/examples/basic_usage2.lua" "../../etasl/worldmodel/examples/dependencies.lua" "../../etasl/worldmodel/examples/generate_graph.lua" "../../etasl/worldmodel/examples/generate_expr.lua" "../../etasl/worldmodel/examples/manipulation.lua" "../../etasl/worldmodel/examples/saving_loading.lua" "DESTINATION" "share/doc/etasl/worldmodel/examples")

# install(DIRECTORY "../../etasl/worldmodel/scripts/lib/" "DESTINATION" "lib/etasl1.5")
ament_cmake_symlink_install_directory("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/worldmodel" DIRECTORY "../../etasl/worldmodel/scripts/lib/" "DESTINATION" "lib/etasl1.5")

# install(DIRECTORY "../../etasl/worldmodel/xml2lua/" "DESTINATION" "lib/etasl1.5/xml2lua")
ament_cmake_symlink_install_directory("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/worldmodel" DIRECTORY "../../etasl/worldmodel/xml2lua/" "DESTINATION" "lib/etasl1.5/xml2lua")

# install(FILES "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/worldmodel/worldmodel_dir.lua" "DESTINATION" "lib/etasl1.5")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/worldmodel" FILES "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/worldmodel/worldmodel_dir.lua" "DESTINATION" "lib/etasl1.5")

# install(PROGRAMS "../../etasl/worldmodel/scripts/urdf_to_wm" "DESTINATION" "bin")
ament_cmake_symlink_install_programs("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/worldmodel" PROGRAMS "../../etasl/worldmodel/scripts/urdf_to_wm" "DESTINATION" "bin")

# install(PROGRAMS "../../etasl/worldmodel/scripts/wm_to_dot" "DESTINATION" "bin")
ament_cmake_symlink_install_programs("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/worldmodel" PROGRAMS "../../etasl/worldmodel/scripts/wm_to_dot" "DESTINATION" "bin")

# install(PROGRAMS "../../etasl/worldmodel/scripts/wm_create" "DESTINATION" "bin")
ament_cmake_symlink_install_programs("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/worldmodel" PROGRAMS "../../etasl/worldmodel/scripts/wm_create" "DESTINATION" "bin")

# install(PROGRAMS "../../etasl/worldmodel/scripts/wm_insert" "DESTINATION" "bin")
ament_cmake_symlink_install_programs("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/worldmodel" PROGRAMS "../../etasl/worldmodel/scripts/wm_insert" "DESTINATION" "bin")

# install(PROGRAMS "../../etasl/worldmodel/scripts/wm_delete" "DESTINATION" "bin")
ament_cmake_symlink_install_programs("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/worldmodel" PROGRAMS "../../etasl/worldmodel/scripts/wm_delete" "DESTINATION" "bin")

# install("TARGETS" "expressiongraph_collision" "DESTINATION" "lib")
include("/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph_collision/ament_cmake_symlink_install_targets_5_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install(DIRECTORY "../../etasl/expressiongraph_collision/scripts/lib/" "DESTINATION" "lib/etasl1.5")
ament_cmake_symlink_install_directory("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph_collision" DIRECTORY "../../etasl/expressiongraph_collision/scripts/lib/" "DESTINATION" "lib/etasl1.5")

# install(FILES "../../etasl/expressiongraph_collision/readme.md" "../../etasl/expressiongraph_collision/LICENSE" "DESTINATION" "share/doc/etasl/expressiongraph_collision")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph_collision" FILES "../../etasl/expressiongraph_collision/readme.md" "../../etasl/expressiongraph_collision/LICENSE" "DESTINATION" "share/doc/etasl/expressiongraph_collision")

# install("TARGETS" "expressiongraph_manip_lua" "DESTINATION" "lib")
include("/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph_manip_lua/ament_cmake_symlink_install_targets_6_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install(FILES "../../etasl/expressiongraph_manip_lua/readme.md" "../../etasl/expressiongraph_manip_lua/LICENSE" "DESTINATION" "share/doc/etasl/expressiongraph_manip_lua")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph_manip_lua" FILES "../../etasl/expressiongraph_manip_lua/readme.md" "../../etasl/expressiongraph_manip_lua/LICENSE" "DESTINATION" "share/doc/etasl/expressiongraph_manip_lua")

# install(FILES "../../etasl/expressiongraph_manip_lua/scripts/manip_example.lua" "DESTINATION" "share/doc/etasl/expressiongraph_manip_lua/examples")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph_manip_lua" FILES "../../etasl/expressiongraph_manip_lua/scripts/manip_example.lua" "DESTINATION" "share/doc/etasl/expressiongraph_manip_lua/examples")

# install(DIRECTORY "../../etasl/expressiongraph_manip_lua/scripts/lib/" "DESTINATION" "lib/etasl1.5")
ament_cmake_symlink_install_directory("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph_manip_lua" DIRECTORY "../../etasl/expressiongraph_manip_lua/scripts/lib/" "DESTINATION" "lib/etasl1.5")

# install(FILES "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/set_etasl_paths.sh" "DESTINATION" "bin")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake" FILES "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/set_etasl_paths.sh" "DESTINATION" "bin")

# install(FILES "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/remove_etasl_paths.sh" "DESTINATION" "bin")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake" FILES "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/remove_etasl_paths.sh" "DESTINATION" "bin")

# install(PROGRAMS "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/ietasl" "DESTINATION" "bin")
ament_cmake_symlink_install_programs("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake" PROGRAMS "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/ietasl" "DESTINATION" "bin")

# install(PROGRAMS "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/etasl" "DESTINATION" "bin")
ament_cmake_symlink_install_programs("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake" PROGRAMS "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/etasl" "DESTINATION" "bin")

# install(PROGRAMS "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/etasl_py_install" "DESTINATION" "bin")
ament_cmake_symlink_install_programs("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake" PROGRAMS "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/etasl_py_install" "DESTINATION" "bin")

# install(PROGRAMS "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/etasl_version" "DESTINATION" "bin")
ament_cmake_symlink_install_programs("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake" PROGRAMS "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/etasl_version" "DESTINATION" "bin")

# install(PROGRAMS "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/etasl_mkvirtualenv" "DESTINATION" "bin")
ament_cmake_symlink_install_programs("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake" PROGRAMS "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/etasl_mkvirtualenv" "DESTINATION" "bin")

# install(FILES "scripts/readme_scripts.rst" "DESTINATION" "share/doc/etasl")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake" FILES "scripts/readme_scripts.rst" "DESTINATION" "share/doc/etasl")

# install(FILES "etaslConfig.cmake" "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/etaslConfigVersion.cmake" "DESTINATION" "lib/cmake/etasl")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake" FILES "etaslConfig.cmake" "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/etaslConfigVersion.cmake" "DESTINATION" "lib/cmake/etasl")

# install(FILES "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/etasl_wrapper" "DESTINATION" "share/ament_index/resource_index/package_run_dependencies")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper" FILES "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/etasl_wrapper" "DESTINATION" "share/ament_index/resource_index/package_run_dependencies")

# install(FILES "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/etasl_wrapper" "DESTINATION" "share/ament_index/resource_index/parent_prefix_path")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper" FILES "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/etasl_wrapper" "DESTINATION" "share/ament_index/resource_index/parent_prefix_path")

# install(FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh" "DESTINATION" "share/etasl_wrapper/environment")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper" FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh" "DESTINATION" "share/etasl_wrapper/environment")

# install(FILES "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ament_cmake_environment_hooks/ament_prefix_path.dsv" "DESTINATION" "share/etasl_wrapper/environment")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper" FILES "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ament_cmake_environment_hooks/ament_prefix_path.dsv" "DESTINATION" "share/etasl_wrapper/environment")

# install(FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh" "DESTINATION" "share/etasl_wrapper/environment")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper" FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh" "DESTINATION" "share/etasl_wrapper/environment")

# install(FILES "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ament_cmake_environment_hooks/path.dsv" "DESTINATION" "share/etasl_wrapper/environment")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper" FILES "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ament_cmake_environment_hooks/path.dsv" "DESTINATION" "share/etasl_wrapper/environment")

# install(FILES "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ament_cmake_environment_hooks/local_setup.bash" "DESTINATION" "share/etasl_wrapper")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper" FILES "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ament_cmake_environment_hooks/local_setup.bash" "DESTINATION" "share/etasl_wrapper")

# install(FILES "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ament_cmake_environment_hooks/local_setup.sh" "DESTINATION" "share/etasl_wrapper")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper" FILES "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ament_cmake_environment_hooks/local_setup.sh" "DESTINATION" "share/etasl_wrapper")

# install(FILES "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ament_cmake_environment_hooks/local_setup.zsh" "DESTINATION" "share/etasl_wrapper")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper" FILES "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ament_cmake_environment_hooks/local_setup.zsh" "DESTINATION" "share/etasl_wrapper")

# install(FILES "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ament_cmake_environment_hooks/local_setup.dsv" "DESTINATION" "share/etasl_wrapper")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper" FILES "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ament_cmake_environment_hooks/local_setup.dsv" "DESTINATION" "share/etasl_wrapper")

# install(FILES "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ament_cmake_environment_hooks/package.dsv" "DESTINATION" "share/etasl_wrapper")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper" FILES "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ament_cmake_environment_hooks/package.dsv" "DESTINATION" "share/etasl_wrapper")

# install(FILES "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ament_cmake_index/share/ament_index/resource_index/packages/etasl_wrapper" "DESTINATION" "share/ament_index/resource_index/packages")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper" FILES "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ament_cmake_index/share/ament_index/resource_index/packages/etasl_wrapper" "DESTINATION" "share/ament_index/resource_index/packages")

# install(FILES "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ament_cmake_core/etasl_wrapperConfig.cmake" "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ament_cmake_core/etasl_wrapperConfig-version.cmake" "DESTINATION" "share/etasl_wrapper/cmake")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper" FILES "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ament_cmake_core/etasl_wrapperConfig.cmake" "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ament_cmake_core/etasl_wrapperConfig-version.cmake" "DESTINATION" "share/etasl_wrapper/cmake")

# install(FILES "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/package.xml" "DESTINATION" "share/etasl_wrapper")
ament_cmake_symlink_install_files("/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper" FILES "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/package.xml" "DESTINATION" "share/etasl_wrapper")

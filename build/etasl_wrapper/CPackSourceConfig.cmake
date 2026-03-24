# This file will be configured to contain variables for CPack. These variables
# should be set in the CMake list file of the project before CPack module is
# included. The list of available CPACK_xxx variables and their associated
# documentation may be obtained using
#  cpack --help-variable-list
#
# Some variables are common to all generators (e.g. CPACK_PACKAGE_NAME)
# and some are specific to a generator
# (e.g. CPACK_NSIS_EXTRA_INSTALL_COMMANDS). The generator specific variables
# usually begin with CPACK_<GENNAME>_xxxx.


set(CPACK_BUILD_SOURCE_DIRS "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper;/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper")
set(CPACK_CMAKE_GENERATOR "Unix Makefiles")
set(CPACK_COMPONENTS_ALL "Unspecified;sdk")
set(CPACK_COMPONENT_UNSPECIFIED_HIDDEN "TRUE")
set(CPACK_COMPONENT_UNSPECIFIED_REQUIRED "TRUE")
set(CPACK_DEBIAN_FILE_NAME "DEB-DEFAULT")
set(CPACK_DEBIAN_PACKAGE_ARCHITECTURE "amd64")
set(CPACK_DEBIAN_PACKAGE_DEPENDS "lua5.1")
set(CPACK_DEBIAN_PACKAGE_HOMEPAGE "https://etasl.pages.kuleuven.be")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Erwin Aertbeliën")
set(CPACK_DEBIAN_PACKAGE_RELEASE ".ubuntu.")
set(CPACK_DEBIAN_PACKAGE_SECTION "devel")
set(CPACK_DEBIAN_PACKAGE_SHLIBDEPS "ON")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_FILE "/usr/share/cmake-3.22/Templates/CPack.GenericDescription.txt")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_SUMMARY "etasl_wrapper built using CMake")
set(CPACK_GENERATOR "TBZ2;TGZ;TXZ;TZ")
set(CPACK_IGNORE_FILES "/CVS/;/\\.svn/;/\\.bzr/;/\\.hg/;/\\.git/;\\.swp\$;\\.#;/#")
set(CPACK_INSTALLED_DIRECTORIES "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper;/")
set(CPACK_INSTALL_CMAKE_PROJECTS "")
set(CPACK_INSTALL_PREFIX "/home/masterthesis/kaixi_crospi_ws/install/etasl_wrapper")
set(CPACK_MODULE_PATH "")
set(CPACK_NSIS_DISPLAY_NAME "etasl_wrapper 1.5.0")
set(CPACK_NSIS_INSTALLER_ICON_CODE "")
set(CPACK_NSIS_INSTALLER_MUI_ICON_CODE "")
set(CPACK_NSIS_INSTALL_ROOT "$PROGRAMFILES")
set(CPACK_NSIS_PACKAGE_NAME "etasl_wrapper 1.5.0")
set(CPACK_NSIS_UNINSTALL_NAME "Uninstall")
set(CPACK_OUTPUT_CONFIG_FILE "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/CPackConfig.cmake")
set(CPACK_PACKAGE_DEFAULT_LOCATION "/")
set(CPACK_PACKAGE_DESCRIPTION "eTasl is a task specification language for reactive control of robot sytems. It
is a language that allows you to describe how your robotic system has to move
and interact with sensors. This description is based on a constraint-based
methodology. Everything is specified as an optimization problem subject to
constraints.

The strong points of eTaSL are:
    - Reactive sensor-based controller
    - A strong separation between specification and execution.
    - Focus on the task specification, the user does not need to worry about
      details such as Jacobians, etc. The language is designed for “easy”
      specification of robotics problems.
    - Based upon the expressiongraph library that allows you to express
      robotics related entities such as poses and orientations in a
      singularity-free way while still performing automatic differentiation.
    - The introduction of feature variables in the language. These have many
      uses from easy specification of contact situations, to defining complex
      motions. Basically, these feature variables allow you to specify additional
      freedom, while the constraints allow you to specify how to take the freedom of
      movement away from the system.

")
set(CPACK_PACKAGE_DESCRIPTION_FILE "/usr/share/cmake-3.22/Templates/CPack.GenericDescription.txt")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "The (e)xpression-based (Ta)sk specification (L)anguage eTaSL for constraint-based robot task specification and control

Ubuntu 
Git branch: 
Git commit: 
")
set(CPACK_PACKAGE_FILE_NAME "etasl_wrapper-1.5.0-Source")
set(CPACK_PACKAGE_ICON "etasl.png")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "etasl_wrapper 1.5.0")
set(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "etasl_wrapper 1.5.0")
set(CPACK_PACKAGE_NAME "etasl_wrapper")
set(CPACK_PACKAGE_RELOCATABLE "true")
set(CPACK_PACKAGE_VENDOR "KU Leuven")
set(CPACK_PACKAGE_VERSION "1.5.0")
set(CPACK_PACKAGE_VERSION_MAJOR "1")
set(CPACK_PACKAGE_VERSION_MINOR "5")
set(CPACK_PACKAGE_VERSION_PATCH "0")
set(CPACK_PACKAGING_INSTALL_PREFIX "/opt/etasl")
set(CPACK_RESOURCE_FILE_LICENSE "/usr/share/cmake-3.22/Templates/CPack.GenericLicense.txt")
set(CPACK_RESOURCE_FILE_README "/usr/share/cmake-3.22/Templates/CPack.GenericDescription.txt")
set(CPACK_RESOURCE_FILE_WELCOME "/usr/share/cmake-3.22/Templates/CPack.GenericWelcome.txt")
set(CPACK_RPM_PACKAGE_SOURCES "ON")
set(CPACK_SET_DESTDIR "OFF")
set(CPACK_SOURCE_GENERATOR "TBZ2;TGZ;TXZ;TZ")
set(CPACK_SOURCE_IGNORE_FILES "/CVS/;/\\.svn/;/\\.bzr/;/\\.hg/;/\\.git/;\\.swp\$;\\.#;/#")
set(CPACK_SOURCE_INSTALLED_DIRECTORIES "/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper;/")
set(CPACK_SOURCE_OUTPUT_CONFIG_FILE "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/CPackSourceConfig.cmake")
set(CPACK_SOURCE_PACKAGE_FILE_NAME "etasl_wrapper-1.5.0-Source")
set(CPACK_SOURCE_RPM "OFF")
set(CPACK_SOURCE_TBZ2 "ON")
set(CPACK_SOURCE_TGZ "ON")
set(CPACK_SOURCE_TOPLEVEL_TAG "Linux-Source")
set(CPACK_SOURCE_TXZ "ON")
set(CPACK_SOURCE_TZ "ON")
set(CPACK_SOURCE_ZIP "OFF")
set(CPACK_STRIP_FILES "")
set(CPACK_SYSTEM_NAME "Linux")
set(CPACK_THREADS "1")
set(CPACK_TOPLEVEL_TAG "Linux-Source")
set(CPACK_WIX_SIZEOF_VOID_P "8")

if(NOT CPACK_PROPERTIES_FILE)
  set(CPACK_PROPERTIES_FILE "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/CPackProperties.cmake")
endif()

if(EXISTS ${CPACK_PROPERTIES_FILE})
  include(${CPACK_PROPERTIES_FILE})
endif()

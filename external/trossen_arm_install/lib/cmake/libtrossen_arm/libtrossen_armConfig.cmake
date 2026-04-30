
####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was libtrossen_armConfig.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

####################################################################################

# Define the imported target for libtrossen_arm
if(NOT TARGET libtrossen_arm)
  add_library(libtrossen_arm STATIC IMPORTED)
  set_target_properties(libtrossen_arm PROPERTIES
    IMPORTED_LOCATION "/home/masterthesis/kaixi_crospi_ws/external/trossen_arm_install/lib/libtrossen_arm.a"
    INTERFACE_INCLUDE_DIRECTORIES "/home/masterthesis/kaixi_crospi_ws/external/trossen_arm_install/include"
  )
endif()

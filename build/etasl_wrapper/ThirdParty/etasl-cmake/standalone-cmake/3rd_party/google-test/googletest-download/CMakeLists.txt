cmake_minimum_required(VERSION 3.5)

project(googletest-download NONE)

include(ExternalProject)
ExternalProject_Add(googletest
  GIT_REPOSITORY    https://github.com/google/googletest.git
  GIT_TAG           main
  SOURCE_DIR        "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/3rd_party/google-test/googletest-src"
  BINARY_DIR        "/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/3rd_party/google-test/googletest-build"
  CONFIGURE_COMMAND ""
  BUILD_COMMAND     ""
  INSTALL_COMMAND   ""
  TEST_COMMAND      ""
)

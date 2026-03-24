cmake_minimum_required(VERSION 3.8)
project(widowx_etasl)

find_package(ament_cmake REQUIRED)

install(DIRECTORY tasks config launch
  DESTINATION share/${PROJECT_NAME}
)

ament_package()
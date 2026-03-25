cmake_minimum_required(VERSION 3.8)
project(widowx_etasl)

find_package(ament_cmake REQUIRED)

install(DIRECTORY tasks config launch
  DESTINATION share/${PROJECT_NAME}
)

install(PROGRAMS crospi_bridge.py
  DESTINATION lib/${PROJECT_NAME}
  RENAME crospi_bridge
)

install(PROGRAMS crospi_starter.py
  DESTINATION lib/${PROJECT_NAME}
  RENAME crospi_starter
)

ament_package()
cmake_minimum_required(VERSION 3.8)
project(widowx_etasl)

find_package(ament_cmake REQUIRED)

install(DIRECTORY tasks config launch
  DESTINATION share/${PROJECT_NAME}
)

# crospi_bridge：桥接节点，负责通信转发
install(PROGRAMS crospi_bridge.py
  DESTINATION lib/${PROJECT_NAME}
  RENAME crospi_bridge
)

# crospi_starter：启动节点，负责初始化/启动流程
install(PROGRAMS crospi_starter.py
  DESTINATION lib/${PROJECT_NAME}
  RENAME crospi_starter
)

ament_package()
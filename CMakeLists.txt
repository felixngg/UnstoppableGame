cmake_minimum_required(VERSION 3.21)
project(UnstoppableGame)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(3rd-party/PowderEngine)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PowderEngine)

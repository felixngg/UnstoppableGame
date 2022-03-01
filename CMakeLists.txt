cmake_minimum_required(VERSION 3.21)
project(UnstoppableGame)

set(CMAKE_CXX_STANDARD 17)

# find_package(SDL2 CONFIG REQUIRED)
# find_package(sdl2-image CONFIG REQUIRED)

add_subdirectory(3rd-party/PowderEngine)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PUBLIC PowderEngine)

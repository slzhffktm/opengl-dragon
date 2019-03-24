cmake_minimum_required(VERSION 3.6)
project(dragon)

set(CMAKE_CXX_STANDARD 14)

link_directories(glfw3.dll)

add_executable(dragon main.cpp)

target_link_libraries(dragon glfw3 opengl32)
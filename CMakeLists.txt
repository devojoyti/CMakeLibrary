cmake_minimum_required(VERSION 3.1)

project("testpim")

set(CMAKE_CXX_STANDARD 17)
set(BINARY ${CMAKE_PROJECT_NAME})

add_subdirectory(core)
add_subdirectory(platform)

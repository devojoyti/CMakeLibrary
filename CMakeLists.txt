cmake_minimum_required(VERSION 3.1)

project("testpim")

set(CMAKE_CXX_STANDARD 17)
set(BINARY ${CMAKE_PROJECT_NAME})

# add_subdirectory(core)
# add_subdirectory(platform)

file(GLOB_RECURSE PLATFORM_SOURCES LIST_DIRECTORIES true core/squareroot.h core/squareroot.cpp platform/squarerootwrapper.h platform/squarerootwrapper.mm)

add_library(pim_ios ${PLATFORM_SOURCES})
target_include_directories(pim_ios PUBLIC "${CMAKE_SOURCE_DIR}" "${CMAKE_SOURCE_DIR}/core" "${CMAKE_SOURCE_DIR}/platform")

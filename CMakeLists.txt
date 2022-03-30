cmake_minimum_required(VERSION 3.1)

project("testpim")

set(CMAKE_CXX_STANDARD 17)
set(BINARY ${CMAKE_PROJECT_NAME})

# include_directories(core)
# include_directories(platform)

add_subdirectory(core)
add_subdirectory(platform)

# file(GLOB_RECURSE PLATFORM_SOURCES LIST_DIRECTORIES true core/*.h core/*.cpp platform/*.h platform/*.mm)      
# file(GLOB HEADER LIST_DIRECTORIES true platform/*.h)

# add_library(${BINARY}_ios ${PLATFORM_SOURCES})

# message(STATUS "cmake source dir is: ${CMAKE_SOURCE_DIR}")

# include_directories(${BINARY}_ios PUBLIC /Users/devhalder/Work/openssl/include)
# link_directories(${BINARY}_ios PUBLIC /Users/devhalder/Work/openssl)
# target_link_libraries(${BINARY}_ios /Users/devhalder/Work/openssl/libssl.a /Users/devhalder/Work/openssl/libcrypto.a)

# install(FILES ${HEADER} DESTINATION "${CMAKE_SOURCE_DIR}/platform/output")
# install(TARGETS ${BINARY}_ios DESTINATION "${CMAKE_SOURCE_DIR}/platform/output")
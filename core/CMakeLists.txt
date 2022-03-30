set(BINARY ${CMAKE_PROJECT_NAME})

file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp)

add_library(core_lib ${SOURCES})

if (WIN32)
	# do nothing

elseif (APPLE)                  
    # do nothing ?

else()
    # do nothing

endif()
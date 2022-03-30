set(BINARY ${CMAKE_PROJECT_NAME})

if (WIN32)
	# do nothing
elseif (APPLE)
	file(GLOB_RECURSE PLATFORM_SOURCES LIST_DIRECTORIES true *.h *.mm)      
    file(GLOB HEADER LIST_DIRECTORIES true *.h)

    add_library(pim_ios ${PLATFORM_SOURCES})

    target_link_libraries(pim_ios PUBLIC core_lib "-framework Cocoa" "-framework AppKit" "-framework CoreData" "-framework Foundation")

    target_include_directories(pim_ios PUBLIC "${CMAKE_SOURCE_DIR}/core" "${CMAKE_SOURCE_DIR}/platform")

    install(FILES ${HEADER} DESTINATION "${CMAKE_SOURCE_DIR}/platform/output")
    install(TARGETS pim_ios DESTINATION "${CMAKE_SOURCE_DIR}/platform/output")

else()
	# do nothing
endif()
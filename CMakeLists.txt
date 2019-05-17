cmake_minimum_required(VERSION 3.5.0)
project(ProjectTemplate CXX)
set(CMAKE_CXX_STANDARD 17)

# TODO build type output directory tree

message(STATUS ${CMAKE_SYSTEM_NAME})
if(UNIX AND NOT APPLE)
    include(GNUInstallDirs)
    set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR})
endif()

# SECTION main dependency 
if(CMAKE_CXX_COMPILER_ID MATCHES GNU)
    # set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")
    set(CMAKE_CXX_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")
    set(CMAKE_C_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")
endif()

include_directories(include)
add_subdirectory(src)
set(mainTarget templateMain)
add_executable(${mainTarget}
    src/main.cpp
)

target_link_libraries(
    ${mainTarget}
    mycomplex
)

# SECTION testing configurations
include(cmake/googletest.cmake)
fetch_googletest(
    ${PROJECT_SOURCE_DIR}/cmake
    ${PROJECT_BINARY_DIR}/googletest
)
enable_testing()
add_subdirectory(test)

# SECTION packaging configurations
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

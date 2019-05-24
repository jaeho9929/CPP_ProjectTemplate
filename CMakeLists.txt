cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(ProjectTemplate LANGUAGES CXX)
list(APPEND CMAKE_MODULE_PATH
 "${CMAKE_CURRENT_SOURCE_DIR}/cmake"
)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif()

# Include cmake modules
include(CompileOptions)
include(googletest)

# TODO build type output directory tree

# Set output directories
if(UNIX AND NOT APPLE)
    include(GNUInstallDirs)
    set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR})
endif()

# Set enable output of compile commands during generation
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Includes
include_directories(include)

# Compile options
include(CompileOptions)

# Enable testing
enable_testing()

# Project modules
add_subdirectory(src)
add_subdirectory(test)

# Get google test in my build directory
fetch_googletest(
    ${PROJECT_SOURCE_DIR}/cmake
    ${PROJECT_BINARY_DIR}/googletest
)

# Packaging configurations
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
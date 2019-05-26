# Target name
set(target mycomplex)

# Define
set(root_dir ${CMAKE_CURRENT_SOURCE_DIR}/../)

# Includes
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/../include
)

file(GLOB header_dir
    ${CMAKE_CURRENT_SOURCE_DIR}/../include
)

file(GLOB_RECURSE headers
    ${header_dir}/*.hpp
)

# Sources
# TODO Find the console source(main.cpp) location in CPP build structue.
file(GLOB_RECURSE sources
    # ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/MyComplex.cpp
)

# Build library
add_library(${target}
    ${sources}
)

# Build Executable
add_executable(
    MyMain
    ${CMAKE_CURRENT_SOURCE_DIR}/MyMain.cpp
)

target_link_libraries( MyMain
    PRIVATE
    ${target}
    PUBLIC
    INTERFACE
)

# Project options
set_target_properties(${target}
    PROPERTIES
    ${DEFAULT_PROJECT_OPTIONS}
)

# Compile options
target_compile_options(${target}
    PRIVATE
    PUBLIC
    ${DEFAULT_COMPILE_OPTIONS}
    INTERFACE
)

target_compile_definitions(${target}
    PRIVATE
    MYDEF="someDefinitions"
)

target_link_libraries(${target}
    PRIVATE
    PUBLIC
    ${DEFAULT_LINKER_OPTIONS}
    INTERFACE
)

# FIXME temporary disabled for travis build compatibility, work only cmake 3.13 or higher
# target_link_options(${target}
#     PRIVATE
#     PUBLIC
#     ${DEFAULT_LINKER_OPTIONS}
#     INTERFACE
# )
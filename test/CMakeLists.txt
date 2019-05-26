# Target name
set(target UnitTests)

# Includes
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# Sources
file(GLOB_RECURSE sources
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

# Build executable
add_executable(${target}
    ${sources}
)

# Project options
set_target_properties(${target}
    PROPERTIES
    ${DEFAULT_PROJECT_OPTIONS}
)

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
    gtest_main
    mycomplex
    INTERFACE
)

target_link_options(${target}
    PRIVATE
    PUBLIC
    ${DEFAULT_LINKER_OPTIONS}
    INTERFACE
)

# NOTE add a test to the project to be run by ctest
add_test(
    NAME ${target}
    COMMAND "${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR}/${target}"
)
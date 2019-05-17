add_executable(
    UnitTests
    complex_test.cpp
)

target_link_libraries(
    UnitTests
    gtest_main
    mycomplex
)

# NOTE add a test to the project to be run by ctest
add_test(
    NAME UnitTests
    COMMAND ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR}/UnitTests
)
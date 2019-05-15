add_library(mycomplex "")

target_sources(
    mycomplex
    PRIVATE
        mycomplex.cpp
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include/mycomplex.hpp
)

target_include_directories(
    mycomplex
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)
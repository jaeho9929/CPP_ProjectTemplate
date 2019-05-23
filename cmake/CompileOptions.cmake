set(DEFAULT_PROJECT_OPTIONS
    CXX_STANDARD                    11
    LINKER_LANGUAGE                 "CXX"
    # This property is True by default for SHARED and MODULE library targets and False otherwise
    POSITION_INDEPENDENT_CODE       ON
)

set(DEFAULT_COMPILE_OPTIONS
    # -Wall
    # Code coverage options
    -g
    -O0
    -fprofile-arcs
    -ftest-coverage
)

set(DEFAULT_LINKER_OPTIONS
    -lgcov
    -pthread
)
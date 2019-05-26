set(DEFAULT_PROJECT_OPTIONS
    CXX_STANDARD                    11
    LINKER_LANGUAGE                 "CXX"
    # This property is True by default for SHARED and MODULE library targets and False otherwise
    POSITION_INDEPENDENT_CODE       ON
)

# TODO divide compile options in each build type
set(DEFAULT_COMPILE_OPTIONS
    # -Wall
    # Code coverage options
    -g
    -O0
    # -fprofile-arcs
    # -ftest-coverage
    --coverage
)

# TODO divide linker options in each build type
set(DEFAULT_LINKER_OPTIONS
    # -fprofile-arcs  # implies -lgcov
    --coverage
)
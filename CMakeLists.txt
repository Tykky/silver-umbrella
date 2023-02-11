project(histogram)

set(CMAKE_CXX_STANDARD 20)

set(SRCS
    src/Histogram.cpp
    src/main.cpp
)

add_executable(histogram ${SRCS})
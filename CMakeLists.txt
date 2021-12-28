cmake_minimum_required(VERSION 3.10)
project(vertex_cover)

add_subdirectory(benchmark)

set(BENCHMARK_ENABLE_TESTING false)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(lib vertex_cover_solver.cpp)
add_executable(exe main.cpp)
target_link_libraries(exe lib benchmark::benchmark)

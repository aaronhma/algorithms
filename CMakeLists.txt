cmake_minimum_required(VERSION 3.11.2)
project(ALGORITHMS VERSION 0.0.1)
message(STATUS "Compiling...")

set(PROJECT_HOMEPAGE_URL "https://github.com/aaronhma/algorithms")
set(PROJECT_DESCRIPTION "My implementation of algorithms!")
set(PROJECT_VERSION VERSION 0.0.1)

add_subdirectory(data_structures)
add_subdirectory(algorithms)

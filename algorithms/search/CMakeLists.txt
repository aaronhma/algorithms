project(search)

# add_executable(${PROJECT_NAME})

# add_library(${PROJECT_NAME} binary_search_tree.cpp)
add_executable(linear_search linear_search.cpp)

add_subdirectory(binary_search)

# target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include)

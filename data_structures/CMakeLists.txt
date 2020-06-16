project(data_structures)

# add_executable(${PROJECT_NAME})

# add_library(${PROJECT_NAME} binary_search_tree.cpp)
add_executable(linked_list linked_list.cpp)
# OLD: add_executable(priority_queue priority_queue.cpp)
# add_executable(hash_table hash_table.cpp)
# OLD: add_executable(queue queue.cpp)
# OLD: add_executable(stack stack.cpp)
add_executable(bst binary_search_tree.cpp)

add_subdirectory(arrays)
add_subdirectory(priority_queue)
add_subdirectory(stack)
add_subdirectory(set)
add_subdirectory(queue)
# target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include)

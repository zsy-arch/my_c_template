message("include: ${CMAKE_CURRENT_SOURCE_DIR}/../src/include/")
add_executable(test_helloworld test_helloworld/main.cpp)

# target_include_directories(test_helloworld PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../src/include/)
target_include_directories(test_helloworld PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../src/include/)
target_link_libraries(test_helloworld PRIVATE MyTinySTL::lib)
set_target_properties(test_helloworld PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}"
)
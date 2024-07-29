add_library(lib SHARED list.cpp test.cpp)
add_library(MyTinySTL::lib ALIAS lib)
generate_export_header(lib)
file(COPY ${PROJECT_BINARY_DIR}/src/lib_export.h DESTINATION ${CMAKE_SOURCE_DIR}/src/include/)
message("PROJECT_BINARY_DIR: ${PROJECT_BINARY_DIR}")
set_target_properties(lib PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY_DEBUG "${PROJECT_BINARY_DIR}")

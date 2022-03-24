cmake_minimum_required(VERSION 3.21)
# cmake_minimum_required(VERSION 3.19)
project(bplm)


# MSVC utf-8
add_compile_options("$<$<C_COMPILER_ID:MSVC>:/source-charset:utf-8>")
add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/source-charset:utf-8>")

# GNU utf-8
add_compile_options("$<$<C_COMPILER_ID:GNU>:-fexec-charset=GBK>")
add_compile_options("$<$<CXX_COMPILER_ID:GNU>:-fexec-charset=GBK>")
add_compile_options("$<$<C_COMPILER_ID:GNU>:-finput-charset=utf-8>")
add_compile_options("$<$<CXX_COMPILER_ID:GNU>:-finput-charset=utf-8>")

message ("Build Type: ${CMAKE_BUILD_TYPE}")

# 17 11
set(CMAKE_CXX_STANDARD 11)  
message ("C++ Standard: ${CMAKE_CXX_STANDARD}")


#Find sources
aux_source_directory(./src SRC_LIST)
message ("Sources: ${SRC_LIST}")


#Set Includes Directories     libs\include\antlr4-runtime
message ("Include directories: ${PROJECT_SOURCE_DIR}/libs/include/antlr4-runtime")
include_directories(
    ${PROJECT_SOURCE_DIR}/libs/include/antlr4-runtime
)

#Set Libraries Directories
message ("Libraries directories: ${PROJECT_SOURCE_DIR}/libs/lib/")
link_directories(
    ${PROJECT_SOURCE_DIR}/libs/lib/
)


#Set Output
add_executable(bplm ${SRC_LIST})
message ("Output: bplm")




#Config 
message ("Libraries: antlr4-runtime")

#Link
target_link_libraries(bplm antlr4-runtime)
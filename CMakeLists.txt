cmake_minimum_required(VERSION 3.19)
project(BPLM)



add_subdirectory ("src/bplm")



# MSVC utf-8
# add_compile_options("$<$<C_COMPILER_ID:MSVC>:/source-charset:utf-8>")
# add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/source-charset:utf-8>")
# 
# 
# # GNU utf-8
# add_compile_options("$<$<C_COMPILER_ID:GNU>:-fexec-charset=GBK>")
# add_compile_options("$<$<CXX_COMPILER_ID:GNU>:-fexec-charset=GBK>")
# add_compile_options("$<$<C_COMPILER_ID:GNU>:-finput-charset=utf-8>")
# add_compile_options("$<$<CXX_COMPILER_ID:GNU>:-finput-charset=utf-8>")


# set(CMAKE_CXX_STANDARD 11)


# add_executable(BPLM src/bplm.cpp src/parser/Parser.cpp src/parser/Parser.h)

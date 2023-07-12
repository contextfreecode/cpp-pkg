cmake_minimum_required(VERSION 3.15)
project(cproj CXX)




add_library(cproj src/cproj.cpp)
target_include_directories(cproj PUBLIC include)



set_target_properties(cproj PROPERTIES PUBLIC_HEADER "include/cproj.h")
install(TARGETS cproj)

cmake_minimum_required(VERSION 3.27)

project(testLib)

add_library(testlib SHARED src/test.cpp include/test.hpp)
target_include_directories(testlib PUBLIC include)
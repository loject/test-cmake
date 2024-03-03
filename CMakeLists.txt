cmake_minimum_required(VERSION 3.27)

project(testLib)


if(BUILD_SHARED_LIBS EQUAL ON)
    add_library(testlib SHARED src/test.cpp include/test.hpp)
else()
    add_library(testlib src/test.cpp include/test.hpp)
endif()

target_include_directories(testlib PUBLIC include)
cmake_minimum_required(VERSION 3.27)

project(testLib)


if(BUILD_SHARED_LIBS EQUAL ON)
    add_library(testlib SHARED src/test.cpp include/test.hpp)
else()
    add_library(testlib src/test.cpp include/test.hpp)
endif()

target_include_directories(testlib PUBLIC include)

# Установка библиотеки и заголовочных файлов
install(TARGETS testlib
        EXPORT testlibTargets
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR} # устанавливает shared библиотеку в директорию lib
        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR} # устанавливает статическую библиотеку в директорию lib
        INCLUDES DESTINATION include) # устанавливает папку include

install(DIRECTORY include/ DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}) # устанавливает заголовочные файлы

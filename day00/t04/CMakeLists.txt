 cmake_minimum_required(VERSION 3.16)
 project(referenceOrPointer)
 set(SOURCE_EXE main.cpp)
 set(CMAKE_CXX_EXTENSIONS OFF)
 add_compile_options(
         -std=c++17
         -Werror
         -Wall
         -Wextra
         -Wpedantic
 )
 set(SOURCE_EXE referenceOrPointer.cpp main.cpp)

 add_executable(referenceOrPointer ${SOURCE_EXE})

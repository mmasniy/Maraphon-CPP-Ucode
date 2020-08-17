 cmake_minimum_required(VERSION 3.16)

 project(castSpells)

 set(CMAKE_CXX_STANDARD 17)

 set(SOURCE_EXE main.cpp)

 set(SOURCE_LIB castSpells.cpp)

 add_library(castSpells STATIC ${SOURCE_LIB})

 add_executable(main ${SOURCE_EXE})

 target_link_libraries(main castSpells)

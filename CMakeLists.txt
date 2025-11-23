cmake_minimum_required(VERSION 3.16)
project(ReplaceProject)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(tests)

include_directories(include)

add_library(replace_lib src/replace.cpp)

add_executable(main_app src/main.cpp)
target_link_libraries(main_app replace_lib)

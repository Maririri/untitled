cmake_minimum_required(VERSION 2.8.4)
project(untitled)

add_definitions(-std=c++11)

set(TARGET_NAME "Plex Home\"\\ Theater")
add_definitions(-DPLEX_TARGET_NAME="${TARGET_NAME}")


set(SOURCE_FILES main.cpp
                a.cpp
                )


add_executable(untitled ${SOURCE_FILES})
target_compile_definitions(untitled PRIVATE PP="a bb")

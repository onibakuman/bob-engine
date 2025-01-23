cmake_minimum_required(VERSION 3.15)
project(bob_engine VERSION 1.0 LANGUAGES CXX)

message(STATUS "configuring global build settings...")

# Specify C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# enable compile commands to generate the json file for clangd
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(dependencies)
add_subdirectory(src)

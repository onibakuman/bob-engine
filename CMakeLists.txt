cmake_minimum_required(VERSION 3.15)
project(bob-engine VERSION 1.0 LANGUAGES CXX)

message(STATUS "configuring global build settings...")

# Specify C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# enable compile commands to generate the json file for clangd
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# enable debugging by default
set(CMAKE_BUILD_TYPE Debug)

# set source files for project
set(SRC
    ./src/main.cpp
)    

add_executable(${PROJECT_NAME} ${SRC})

# download CPM.cmake
file(
  DOWNLOAD
  https://github.com/cpm-cmake/CPM.cmake/releases/download/v0.38.3/CPM.cmake
  ${CMAKE_CURRENT_BINARY_DIR}/cmake/CPM.cmake
  EXPECTED_HASH SHA256=cc155ce02e7945e7b8967ddfaff0b050e958a723ef7aad3766d368940cb15494
)
include(${CMAKE_CURRENT_BINARY_DIR}/cmake/CPM.cmake)

# system depenencies
find_package(Vulkan REQUIRED)

# external dependencies
CPMAddPackage("gh:libsdl-org/SDL#release-3.2.0")
set(SDL_EXAMPLES OFF)

target_link_libraries(${PROJECT_NAME} SDL3::SDL3 Vulkan::Vulkan)

# TODO: ADD TESTS
# add tests as well
#add_subdirectory(tests)

message(STATUS "configuring dependencies...")

# System Dependencies
find_package(Vulkan REQUIRED)

# Allow fetch content functionality
include(FetchContent)

# Fetch SDL3
FetchContent_Declare(
    sdl3
    GIT_REPOSITORY https://github.com/libsdl-org/SDL.git
    GIT_TAG release-3.2.0
)
add_subdirectory(sdl3)

message(STATUS "configuring src directory...")

# define source files
set(SOURCE_FILES
    main.cpp
)

# Define the executable
add_executable(${PROJECT_NAME} ${SOURCE_FILES})

# Link SDL3 to the executable
target_link_libraries(${PROJECT_NAME} SDL3::SDL3)


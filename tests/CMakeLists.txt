enable_testing()  

add_executable(${PROJECT_NAME}-tests test_main.cpp test_file.cpp)  
target_link_libraries(MyTests PRIVATE MyProject)  

add_test(NAME MyTestSuite COMMAND MyTests)  

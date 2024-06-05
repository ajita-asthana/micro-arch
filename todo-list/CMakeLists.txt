cmake_minimum_required(VERSION 3.10)
project(todo-list)

#Set the C++ Standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#Add include directories
include_directories(${PROJECT_SOURCE_DIR}/include/todo)

# Create the main executable
add_executable(todo-list src/main.cpp src/Task.cpp src/TaskManager.cpp)

#Google Test Setup
include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/release-1.11.0.tar.gz
)
FetchContent_MakeAvailable(googletest)

enable_testing()
include(GoogleTest)

#Add Tests
add_executable(test_Task tests/test_Task.cpp src/Task.cpp)
target_link_libraries(test_Task gtest_main)
gtest_discover_tests(test_Task)

add_executable(test_TaskManager tests/test_TaskManager.cpp src/TaskManager.cpp src/Task.cpp)
target_link_libraries(test_TaskManager gtest_main)
gtest_discover_tests(test_TaskManager)

add_test(NAME TestTask COMMAND test_Task)
add_test(NAME TestTaskManager COMMAND test_TaskManager)
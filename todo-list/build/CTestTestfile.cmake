# CMake generated Testfile for 
# Source directory: /Users/ajeetaasthana/IdeaProjects/kernel/todo-list
# Build directory: /Users/ajeetaasthana/IdeaProjects/kernel/todo-list/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
include("/Users/ajeetaasthana/IdeaProjects/kernel/todo-list/build/test_Task[1]_include.cmake")
include("/Users/ajeetaasthana/IdeaProjects/kernel/todo-list/build/test_TaskManager[1]_include.cmake")
add_test(TestTask "/Users/ajeetaasthana/IdeaProjects/kernel/todo-list/build/test_Task")
set_tests_properties(TestTask PROPERTIES  _BACKTRACE_TRIPLES "/Users/ajeetaasthana/IdeaProjects/kernel/todo-list/CMakeLists.txt;34;add_test;/Users/ajeetaasthana/IdeaProjects/kernel/todo-list/CMakeLists.txt;0;")
add_test(TestTaskManager "/Users/ajeetaasthana/IdeaProjects/kernel/todo-list/build/test_TaskManager")
set_tests_properties(TestTaskManager PROPERTIES  _BACKTRACE_TRIPLES "/Users/ajeetaasthana/IdeaProjects/kernel/todo-list/CMakeLists.txt;35;add_test;/Users/ajeetaasthana/IdeaProjects/kernel/todo-list/CMakeLists.txt;0;")
subdirs("_deps/googletest-build")

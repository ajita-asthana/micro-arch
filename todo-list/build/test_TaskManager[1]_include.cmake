if(EXISTS "/Users/ajeetaasthana/IdeaProjects/kernel/todo-list/build/test_TaskManager[1]_tests.cmake")
  include("/Users/ajeetaasthana/IdeaProjects/kernel/todo-list/build/test_TaskManager[1]_tests.cmake")
else()
  add_test(test_TaskManager_NOT_BUILT test_TaskManager_NOT_BUILT)
endif()

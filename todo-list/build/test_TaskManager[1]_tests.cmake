add_test([=[TaskManagerTest.AddTask]=]  /Users/ajeetaasthana/IdeaProjects/kernel/todo-list/build/test_TaskManager [==[--gtest_filter=TaskManagerTest.AddTask]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[TaskManagerTest.AddTask]=]  PROPERTIES WORKING_DIRECTORY /Users/ajeetaasthana/IdeaProjects/kernel/todo-list/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[TaskManagerTest.CompleteTask]=]  /Users/ajeetaasthana/IdeaProjects/kernel/todo-list/build/test_TaskManager [==[--gtest_filter=TaskManagerTest.CompleteTask]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[TaskManagerTest.CompleteTask]=]  PROPERTIES WORKING_DIRECTORY /Users/ajeetaasthana/IdeaProjects/kernel/todo-list/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[TaskManagerTest.DeleteTask]=]  /Users/ajeetaasthana/IdeaProjects/kernel/todo-list/build/test_TaskManager [==[--gtest_filter=TaskManagerTest.DeleteTask]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[TaskManagerTest.DeleteTask]=]  PROPERTIES WORKING_DIRECTORY /Users/ajeetaasthana/IdeaProjects/kernel/todo-list/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[TaskManagerTest.ShowTasks]=]  /Users/ajeetaasthana/IdeaProjects/kernel/todo-list/build/test_TaskManager [==[--gtest_filter=TaskManagerTest.ShowTasks]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[TaskManagerTest.ShowTasks]=]  PROPERTIES WORKING_DIRECTORY /Users/ajeetaasthana/IdeaProjects/kernel/todo-list/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  test_TaskManager_TESTS TaskManagerTest.AddTask TaskManagerTest.CompleteTask TaskManagerTest.DeleteTask TaskManagerTest.ShowTasks)

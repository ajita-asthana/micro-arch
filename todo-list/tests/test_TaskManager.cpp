#include "TaskManager.h"
#include "Task.h"
#include <gtest/gtest.h>

TEST(TaskManagerTest, AddTask) {
    TaskManager manager;
    manager.addTask("New Task");
    //Capture output to verify task addition
    testing::internal::CaptureStdout();
    manager.showTasks();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "[ ] New Task\n");
}

TEST(TaskManagerTest, CompleteTask) {
    TaskManager manager;
    manager.addTask("New Task");
    manager.completeTask(0);
    //Capture output to verify task completion
    testing::internal::CaptureStdout();
    manager.showTasks();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "[x] New Task\n");
}

TEST(TaskManagerTest, DeleteTask) {
    TaskManager manager;
    manager.addTask("Task 1");
    manager.addTask("Task 2");
    manager.deleteTask(0);
    //Capture output to verify task deletion
    testing::internal::CaptureStdout();
    manager.showTasks();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "[ ] Task 2\n");
}

TEST(TaskManagerTest, ShowTasks) {
    TaskManager manager;
    manager.addTask("Task 1");
    manager.addTask("Task 2");
    //Capture output to verify task display
    testing::internal::CaptureStdout();
    manager.showTasks();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "[ ] Task 1\n[ ] Task 2\n");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
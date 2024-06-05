#include "Task.h"
#include <gtest/gtest.h>

TEST(TaskTest, MarkCompleted) {
    Task task("Sample Task");
    EXPECT_FALSE(task.isCompleted());
    task.markCompleted();
    EXPECT_TRUE(task.isCompleted());
}

TEST(TaskTest, GetDescription) {
    Task task("Sample Task");
    EXPECT_EQ(task.getDescription(), "Sample Task");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include "Task.h"
#include <vector>

class TaskManager {
public:
    void addTask(const std::string& description);
    void completeTask(size_t index);
    void deleteTask(size_t index);
    void showTasks() const;

private:
    std::vector<Task> tasks;
};

#endif //TASKMANAGER_H
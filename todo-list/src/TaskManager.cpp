#include "TaskManager.h"
#include <iostream>

void TaskManager::addTask(const std::string& description) {
    tasks.emplace_back(description);
}

void TaskManager::completeTask(size_t index) {
    if(index < tasks.size()) {
        tasks[index].markCompleted();
    }
}

void TaskManager::deleteTask(size_t index) {
    if(index < tasks.size()) {
        tasks.erase(tasks.begin() + index);
    }
}

void TaskManager::showTasks() const {
    for(size_t i=0; i<tasks.size(); i++) {
        std::cout << (
            tasks[i].isCompleted() ? "[x] " : "[ ] ")
            << tasks[i].getDescription()
            << std::endl;
    }
}
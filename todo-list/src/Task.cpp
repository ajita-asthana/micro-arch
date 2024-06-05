#include "Task.h"

Task::Task(const std::string& description)
    : description(description), completed(false) {}


void Task::markCompleted() {
    completed = true;
}

bool Task::isCompleted() const {
    return completed;
}

std::string Task::getDescription() const {
    return description;
}
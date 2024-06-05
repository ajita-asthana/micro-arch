#ifndef TASK_H
#define TASK_H

#include <string>
class Task {
public:
    Task(const std::string& description);

    void markCompleted();
    bool isCompleted() const;
    std::string getDescription() const;

private:
    std::string description;
    bool completed;
};

#endif //TASK_H
#include "TaskManager.h"
#include <iostream>
using namespace std;
int main() {
    TaskManager manager;
    manager.addTask("Buy Groceries");
    manager.addTask("Complete C++ project");
    manager.addTask("Go for a run");

    cout << "All Tasks: " << endl;
    manager.showTasks();

    manager.completeTask(0);
    cout << "\n After completing the first task: " << endl;
    manager.showTasks();

    manager.deleteTask(1);
    cout << "\nAfter deleting the second task " << endl;
    manager.showTasks();

    return 0;
}
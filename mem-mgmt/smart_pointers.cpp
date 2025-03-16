//Smart Pointers
#include <iostream>
#include <memory>

class MyClass {
public:
    MyClass() { std::cout << "My Class Constructor\n"; }
    ~MyClass() { std::cout << "My Class Destructor\n"; }
    void display() {
        std::cout << "MyClass Display\n";
    }
};

int main() {
    //std::unique_ptr<MyClass> ptr(new MyClass);
    std::shared_ptr<MyClass> ptr1 = std::make_shared<MyClass>();
    {
        std::shared_ptr<MyClass> ptr2 = ptr1;
        ptr2->display();
        //ptr2 goes out of scope, but ptr1 still owns the resource
    }
    //ptr1 is automatically deleted when it goes out of scope
    return 0;
}
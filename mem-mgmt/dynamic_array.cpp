#include <iostream>
#include <stdexcept>

class DynamicArray {
private:
    int* array;
    int _size;
    int _capacity;

    void resize(int new_capacity) {
        int* new_array = new int[new_capacity];
        for(int i=0; i<_size; i++) {
            new_array[i] = array[i];
        }

        delete[] array;
        array = new_array;
        _capacity = new_capacity;
    }

public:
    DynamicArray() : array(nullptr), _size(0), _capacity(0) {}

    ~DynamicArray() {
        delete[] array;
    }

    void add(int value) {
        if(_size == _capacity) {
            resize(_capacity == 0 ? 1 : _capacity * 2);
        }
        array[_size++] = value;
    }

    void remove(int index) {
        if(index < 0 || index >= _size) {
            throw std::out_of_range("Index out of range");
        }

        for(int i=index; i<_size-1; i++) {
            array[i] = array[i+1];
        }

        _size--;
    }

    int get(int index) {
        if(index < 0 || index >= _size) {
            throw std::out_of_range("Index out of range");
        }
        return array[index];
    }

    int size() const {
        return _size;
    }

    int capacity() const {
        return _capacity;
    }

    void print() {
        for(int i=0; i<_size; i++) {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    DynamicArray arr;
    arr.add(10);
    arr.add(20);
    arr.add(30);
    arr.print();
    arr.remove(1);
    arr.print();

    try {
        std::cout << arr.get(1) << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "Size: " << arr.size() << ", Capacity: " << arr.capacity() << std::endl;
    return 0;
}
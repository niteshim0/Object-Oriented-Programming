## Understanding `Object Pointer` pointer in C++
In C++, a pointer is a variable that stores the memory address of another variable. An object pointer, specifically, is a pointer that points to an object (in layman terms contains address of an object) in memory. Objects in C++ can be instances of classes, structs, or even fundamental data types.

```cpp
#include <iostream>

class MyClass {
public:
    int dataMember;

    void display() {
        std::cout << "Data Member: " << dataMember << std::endl;
    }
};

int main() {
    // Creating an object and a pointer to it
    MyClass *objPointer = new MyClass();

    // Accessing members through the pointer
    objPointer->dataMember = 10;
    objPointer->display();

    // Deleting the object to free memory
    delete objPointer;

    return 0;
}

```

## Understanding `this` pointer in C++

  - `this` is a keyword.
  - `this` is a local(specific to blocks) object pointer in every instance member function containing address of the caller object.
  - `this` pointer  can't be modified.
  - It is used to refer caller object in member function.



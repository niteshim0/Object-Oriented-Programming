#include <iostream>
using namespace std;
// Static memory allocation example
void staticAllocationExample() {
    // Static allocation of an array
    int staticArray[5] = {1, 2, 3, 4, 5};

    // Accessing and printing elements
    cout << "Static array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << staticArray[i] << " ";
    }
    cout << endl;
}

// Dynamic memory allocation example
void dynamicAllocationExample() {
    // Dynamic allocation of an array
    int size = 5;
    int* dynamicArray = new int[size];

    // Initializing array elements
    for (int i = 0; i < size; i++) {
        dynamicArray[i] = i + 1;
    }

    // Accessing and printing elements
    cout << "Dynamic array elements: ";
    for (int i = 0; i < size; i++) {
        cout << dynamicArray[i] << " ";
    }
    cout <<endl;

    // Deallocating dynamic memory
    delete[] dynamicArray;
}

int main() {
    // Static memory allocation example
    staticAllocationExample();

    // Dynamic memory allocation example
    dynamicAllocationExample();

    return 0;
}

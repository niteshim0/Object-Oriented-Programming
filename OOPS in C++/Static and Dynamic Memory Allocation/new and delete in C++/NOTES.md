# `new` and `delete` Keywords

In C++, `new` and `delete` are operators used for dynamic memory allocation and deallocation, respectively. They allow you to allocate memory on the heap during program execution.

## `new` Operator

- The `new` operator is used to allocate memory for a single variable or an array on the heap.
- It returns a pointer to the allocated memory.

### Syntax:
 - For a single variable
```cpp
pointer_variable = new data_type;
e.g.,
int* intValue = new int;         // Allocates memory for an integer
```
 - For an array
```cpp
pointer_array = new data_type[size];
e.g,
double* doubleArray = new double[10];  // Allocates memory for an array of 10 doubles
```

## `delete` Operator

The `delete` operator is used to deallocate memory that was previously allocated with `new`. It is an essential part of managing dynamic memory in C++.

- Unlike Java,in C++ there is no any concept of Garbage Collection so the programmer needs to explicitly delete the dynamically allocated variables otherwise they will remain in throughout program and even though they will have no use by then they will take memory.So its good practice to remove them if their exist no any usage of them.

- Statically allocated variable has only certain scope so after scope they eventually get deleted.

### Syntax :

- For single variables:
  ```cpp
  delete pointer_variable;
  e.g,
  delete intValue//Deallocates memory for an integer
  ```

- For an array and example
```cpp        
 delete[] pointerArray;   
 e.g,
 delete[] doubleArray;     // Deallocates memory for the array of double

```
## ExampleProgram
```cpp
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Dynamic memory allocation for a single value
    int* intValue = new int;

    // Assign a value to the dynamically allocated integer
    *intValue = 42;

    // Output the value
    cout << "Dynamically allocated integer: " << *intValue << endl;

    // Deallocate memory for the single value
    delete intValue;

    // Dynamic memory allocation for an array
    int size = 5;
    double* doubleArray = new double[size];

    // Assign values to the dynamically allocated array
    for (int i = 0; i < size; ++i) {
        doubleArray[i] = 3.14 * i;
    }

    // Output the values in the array
    cout << "Dynamically allocated array: ";
    for (int i = 0; i < size; ++i) {
        cout << doubleArray[i] << " ";
    }
    cout <<endl;

    // Deallocate memory for the array
    delete[] doubleArray;

    return 0;
}
```
# Memory Management in C++

- **Unlike Java,** C++ does not have a built-in Garbage Collection mechanism.

- **The programmer is responsible for explicitly deleting dynamically allocated variables** to prevent memory leaks. If dynamic memory is allocated using `new`, it should be deallocated using `delete` (or `delete[]` for arrays) when it is no longer needed.

- **Statically allocated variables have a defined scope,** and they are automatically deallocated after the scope is exited. This automatic deallocation is handled by the C++ compiler.

In summary, C++ places the responsibility of memory management on the programmer, making it crucial to carefully manage the allocation and deallocation of memory to ensure efficient and leak-free program execution.

Remember: Always free dynamically allocated memory to avoid memory leaks and use static allocation when the variable's scope is well-defined and limited.







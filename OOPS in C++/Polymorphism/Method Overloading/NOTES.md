# Function Overloading in C++

- Function overloading in C++ allows you to define multiple functions with the same name but with different parameter lists. 
- The compiler distinguishes between these functions based on the number, type, and order of the parameters. 
- Function overloading provides a way to create multiple versions of a function that perform similar operations on different types of data or with different numbers of arguments.

## Example:

```cpp
#include <iostream>
using namespace std;
// Function with two integer parameters
int add(int a, int b) {
    return a + b;
}

// Function with two double parameters
double add(double a, double b) {
    return a + b;
}

// Function with a mix of int and double parameters
double add(int a, double b) {
    return a + b;
}

int main() {
    cout << "Sum of integers: " << add(3, 5) << endl;
    cout << "Sum of doubles: " << add(3.5, 5.2) << endl;
    cout << "Mixed types: " << add(2, 4.5) << endl;

    return 0;
}
```

# Key Points for Function Overloading in C++

- **Function Signature:** The function signature includes the function name and the parameter list (number, type, and order of parameters). Return type alone is not considered for overloading.

- **Number of Parameters:** Functions with a different number of parameters can be overloaded.

- **Type of Parameters:** Functions with the same number of parameters but different types can be overloaded.

- **Order of Parameters:** The order of parameters is also considered when overloading.

- **Default Arguments:** Functions with default arguments can be overloaded, and the compiler will choose the appropriate version based on the arguments provided.

Function overloading promotes code reusability and improves the readability of the code by allowing you to use the same function name for logically related operations.

# Rules for Binding Overloaded Functions in C++

When resolving overloaded functions in C++, the compiler follows certain rules to determine which function to bind based on the provided arguments.

1. **Exact Match:**
   - If the compiler finds an exact match for the function signature, it binds that function to the call without any issues.

2. **Type Promotion:**
   - If an exact match is not found, the compiler attempts type promotion. Two specific type promotions are possible in C++:
     - From `char` to `int`
     - From `float` to `double`
   - If the type promotion leads to a matching function, the compiler binds that function to the call.

3. **Type Conversion:**
   - In C++, any primitive type can be converted to other types by automatic type conversion if thats possible. Overloaded functions can also be bound based on type conversion.
   - However, conflicts may arise if one primitive type can be converted to two different types, and overloaded functions exist for both of those target types.
   - For example, if we pass a `char` type argument and have two overloaded functions – one taking an argument of type `float` and the other of type `double` – it can lead to ambiguity.
   - To resolve this ambiguity, make sure there is a clear and unique conversion path for the given argument.

These rules guide the compiler in selecting the appropriate overloaded function to bind based on the provided arguments. Understanding these rules is crucial for avoiding ambiguity and ensuring the correct function is called during compilation.

# Function Hiding and Why do we care about it ?
- Function hiding primarily occurs in the context of class inheritance when a derived class declares a function that is already present in its base class. This process is related to the concept of overriding. However, in C++, if a function is declared in a derived class with the same name as a function in the base class, the derived class function can "hide" the base class function, even if the signatures are different.

- For the concept of function hiding in C++, all the overloaded functions with the same name should be in the same scope, particularly in the context of class inheritance. This ensures that a derived class declaring a function with the same name as a function in its base class does not lead to confusion or ambiguity. Keeping the overloaded functions in the same scope allows the compiler to appropriately resolve and handle function calls, avoiding unexpected behavior and ensuring clarity in the program.

- Function hiding can lead to confusion and is generally considered a practice to be avoided. It's recommended to use the `using` keyword to make the base class functions available in the derived class and resolve potential hiding issues.

```cpp
#include <bits/stdc++.h>
using namespace std;
class Base {
public:
    void display() {
        cout << "Display from Base class" <<endl;
    }
};

class Derived : public Base {
public:
    // Function with the same name as the one in the Base class
    void display(int x) {
        cout << "Display from Derived class with parameter: " << x << endl;
    }

    // Use the 'using' keyword to bring the base class display() into the scope of Derived
    using Base::display;
};

int main() {
    Derived derivedObj;

    // This calls the display() function in the Derived class with an int parameter
    derivedObj.display(42);

    // Now, this calls the display() function in the Base class
    derivedObj.display();

    return 0;
}


```




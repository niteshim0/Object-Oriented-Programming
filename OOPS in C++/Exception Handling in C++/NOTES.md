# Exceptions 
 - Exceptions is any abnormal behaviour, run-time error that distrubs the normal flow of program.
 - Exceptions are offbeat situation in your program where your program should be ready to handle it with appropriate response.

# Exception Handling in C++

- C++ provides built-in error handling mechanism that is called exception handling.

- Using exception handling , one can more easily manage and respond to runtime errors.

Exception handling in C++ allows a program to respond to unexpected situations or errors during runtime in a controlled manner. The standard exception handling mechanism in C++ involves three keywords: `try`, `catch`, and `throw`.




1. **try:** This block contains the code that might throw an exception. If an exception occurs within the try block, it is thrown.

    ```cpp
    try {
        // Code that may throw an exception
    }
    ```

2. **throw:** When a problem is encountered, you can use the `throw` keyword to throw an exception. It is followed by an object (typically an exception class object) that provides information about the error.

    ```cpp
    throw SomeException("An error occurred");
    ```

3. **catch:** This block catches and handles exceptions thrown in the associated try block. It specifies the type of exception it can catch.

    ```cpp
    try {
        // Code that may throw an exception
    } catch (SomeExceptionType &e) {
        // Code to handle the exception
    } catch (AnotherExceptionType &e) {
        // Code to handle another type of exception
    } catch (...) {
        // Catch-all block for any other type of exception
    }
    ```

Here's a simple example:

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    try {
        // Code that may throw an exception
        int denominator = 0;
        if (denominator == 0) {
            throw runtime_error("Division by zero");
        }
        int result = 10 / denominator;
        cout << "Result: " << result << endl;
    } catch (runtime_error &e) {
        // Handle the exception
        cerr << "Exception: " << e.what() << endl;
    } catch (...) {
        // Catch-all block for any other type of exception
        cerr << "Unknown exception occurred" <<endl;
    }

    return 0;
}
```

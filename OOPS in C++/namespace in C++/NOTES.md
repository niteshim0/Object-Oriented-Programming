# Header Files in C++

In C++, a header file is a file containing declarations of functions, variables, and other constructs, which can be included in multiple source files. Header files typically have a ".h" or ".hpp" extension. They are used to declare the interface of a module or library and provide information to the compiler about the functions and entities defined in the corresponding source file. Here are the common contents of header files in C++:

## 1. Function Declarations

Header files often include declarations of functions that are defined in a corresponding source file. This allows other source files to use these functions without having to define them.

```cpp
// Example header file: myheader.h

#ifndef MYHEADER_H
#define MYHEADER_H

// Function declaration
int add(int a, int b);

#endif // MYHEADER_H
```

## 2. Class Declarations

If you have classes defined in a source file, you can declare the class in the header file, allowing other parts of the program to use the class without needing to know its implementation details.

```cpp
// Example header file: MyClass.h

#ifndef MYCLASS_H
#define MYCLASS_H

// Class declaration
class MyClass {
public:
    MyClass(); // Constructor declaration
    void doSomething();
};

#endif // MYCLASS_H
```

## 3. Variable Declarations

Header files may contain external variable declarations, making them accessible to multiple source files.

```cpp
// Example header file: constants.h

#ifndef CONSTANTS_H
#define CONSTANTS_H

// External variable declaration
extern const double PI;

#endif // CONSTANTS_H
```

## 4. Macro Definitions and Conditional Compilation Directives

Header files may contain macro definitions, which are used for conditional compilation or as constants. Additionally, conditional compilation directives are employed to control whether certain parts of the code are included in the final executable. Here's an example:

```cpp
// Example header file: configuration.h

#ifndef CONFIGURATION_H
#define CONFIGURATION_H

// Macro definition
#define MAX_SIZE 100

// Conditional compilation directive
#ifdef DEBUG_MODE
    #define LOG(message) std::cout << "DEBUG: " << message << std::endl;
#else
    #define LOG(message)
#endif // DEBUG_MODE

#endif // CONFIGURATION_H
```

# C++ Standard Header Files

In C++, standard header files are provided by the C++ Standard Library, offering a set of functionalities and components that can be utilized in C++ programs. These header files facilitate common programming tasks and provide essential features. Here are some of the commonly used C++ standard header files:

## 1. `iostream` (Input/Output Stream)

 - Contains declarations for `cin`, `cout`, `cerr`, `clog` for standard input and output operations. 
 - Provides functionality for formatted input/output.

```cpp
#include <iostream>
```

## 2. `cstdlib` (C Standard Library)
  - Provides general-purpose functions such as memory allocation and deallocation (`malloc`, `free`).
  - Includes functions for pseudo-random number generation (`rand`, `srand`).

```cpp
#include <cstdlib>
```

## 3. `cmath`(C Math Library)
  - includes mathematical functions like `sqrt`, `sin`, `cos`, `exp`, etc.
  - Constants like `M_PI` are often defined in this header.

## 4. `cstring`(C String Library)
  - Provides functions for handling C-style strings (`strlen`, `strcpy`, `strcat`).
  - Includes memory manipulation functions (`memcpy`, `memcmp`).

Many more standard files also exist such as `string`,`vector`,`algorithms`.

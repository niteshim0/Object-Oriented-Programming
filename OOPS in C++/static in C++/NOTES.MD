# Understanding `static Members` in C++

There are mainly three types of static in C++ :: ->
 1. Static Local Variable(exist in C as well)
 2. Static Member Variable
 3. Static Member Functions

 ## Static Local Variable in C++
  - A static local variable is a variable declared inside a function with the keyword static. 
  - They are by default initialized to zero.
  - Unlike regular local variables, static local variables retain their values between function call.
  - They are initialized only once and persist throughout the program's lifetime. 
  - This is useful when you want a variable to maintain its state across multiple calls to the same function.

## Static Member Variable in C++

In C++, a **static member variable** is a variable associated with a class rather than with instances of the class. Some key characteristics of static member variables include:

 - Declared inside the class body but doesn't get memory until it's initialized.
 - It can be initialized using the membership label using the scope resolution operator.
 - It must be defined outside the class.
 - Static member variables do not belong to any object but to the whole class.
 - There will be only one copy of a static member variable, whether you have one instance or a million instances of the class.
 - Any object can use the same copy of the class variable.
 - They can also be accessed using the class name.
 - Unlike regular member variables, which have separate copies for each instance of the class, a static member variable is shared among all instances of the class.
 - Static member variables are useful when you want to share a common property among all instances of a class, such as a counter or a configuration setting.
 - They are initialized once (usually outside the class definition), and their values are shared across all instances of the class.

## Static Member Function in C++

In C++, a **static member function** is a function associated with a class rather than with instances of the class. Key features and characteristics of static member functions include:

- **Declaration and Definition:**
  - Declared inside the class body using the `static` keyword.
  - Defined outside the class using the scope resolution operator `::`.

- **Accessing Member Variables:**
  - Static member functions do not have access to non-static (regular) member variables without an instance of the class, as they don't have a `this` pointer.

- **Usage:**
  - Utility Functions: Operations that don't depend on object-specific data.
  - Class-Level Operations: Tasks related to the class as a whole.
  - Encapsulation: Grouping related functionalities within the class.

- **Memory Allocation:**
  - Static member functions do not have access to the `this` pointer and are not associated with a specific object instance. They operate at the class level and don't require an instance to be called.

- **Single Copy:**
  - Similar to static member variables, there is only one copy of a static member function, shared among all instances of the class.

- **Example:**
  ```cpp
  class ExampleClass {
  public:
      static void staticFunction() {
          std::cout << "Static function called." << std::endl;
      }
  };

  int main() {
      ExampleClass::staticFunction();  // Output: Static function called.
      return 0;
  }

  ```




 
  
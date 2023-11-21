# Operator Overloading in C++

- Operator overloading in C++ allows you to define how operators should behave when used with user-defined types, such as classes or structures. This can make your code more expressive and intuitive by allowing you to use familiar operators with your custom types. Operator overloading is achieved by defining special member functions for the operators.

- When an operator is overloaded with multiple jobs,it is known as operator overloading.

- It is a way to implement compile type polymorphism.



## Syntax

Operator overloading is done by defining special functions using the `operator` keyword followed by the operator you want to overload. For example, to overload the `+` operator, you would define a function named `operator+`.

```cpp
returnType operator+(const YourType& operand) {
    // Implementation
}

```
## Valid Operators for Overloading

When overloading operators in C++, there are certain rules regarding the selection of operator symbols. Here are the criteria for a symbol to be a valid operator for overloading:

- The symbol can be used as a function name if it is a valid operator in the C language.
- It must be preceded by the `operator` keyword.
- Some of the commonly overloaded operators include `+`, `-`, `*`, `/`, `==`, `!=`, `<`, `>`, `<=`, `>=`, `<<`, `>>`, etc.
- However, there are restrictions; you cannot overload the `sizeof` and `?:` (ternary conditional) operators.

## Member Functions and Friend Functions in Operator Overloading

### Member Functions

If you want to overload an operator as a member function, it must be a member of the class or structure. This means that the function is part of the class definition and operates on instances of that class.

### Friend Functions

If you want to overload an operator, but the left operand is not an object of your class, you may need to use a friend function. Friend functions are not members of a class but are declared as friends inside the class. This allows them to access private and protected members of the class.

In summary:
- **Member Functions:** Overload an operator when it directly involves the class and its instances.
- **Friend Functions:** Overload an operator when it involves a non-member object and needs access to private or protected members of the class.







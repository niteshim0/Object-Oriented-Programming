# What problem does a Virtual Function solve?

## A Interesting Feature of Base Class Pointer

In C++, a base class pointer can point to objects of its descendants classes. This is a fundamental aspect of polymorphism and is facilitated by the use of virtual functions.

This ability to use a base class pointer to point to objects of derived classes is a key feature of polymorphism and is known as **"upcasting."** It allows you to write code that operates on the base class type while still taking advantage of the specific implementations provided by the derived classes.

But this very thing leads to a very specific problem , disussed in  the code given below.

```cpp
#include<bits/stdc++.h>
using namespace std;

class A {
public:
  void fun() {
    cout << "This is a function of class A" << endl;
  }
};

class B : public A {
public:
  void fun() {
    cout << "This is a function of class B" << endl;
  }
};

int main() {
  A *p, obj1;
  B obj2;
  p = &obj2;
  
  // It will call the function in class A even though the pointer contains the address of class type B;
  p->fun();

  // It will call the function as one would expect in method overriding case.
  obj2.fun();
}

```

**Why does this happen?**
  
  - The answer lies in the concept of late binding and early binding.
  - When we call through objects, we exactly know which class type its instance is, so does the compiler. It binds the object to the latest function that is available if the function is overridden.
  - Whereas when we call through pointers, pointers contain addresses that are assigned at runtime. The object gets memory at runtime, so does its address.
  - If we call through a pointer, functions are called according to the declaration type of the pointer, not the contents of the pointer. This results in early binding, which violates the principle of method overriding.
  - The ideal behavior would be late binding, where the compiler should call functions according to their contents, not their type. This is where the concept of virtual functions comes in to save the day.
  - If we declare the `fun()` function of the base class as virtual, it will lead to late binding, addressing the issue.
  - When we declare one type of function as virtual, its overridden version will also be virtual even though it is not explicitly mentioned.



## So,these are the problem a virtual function solve?

In C++, a virtual function addresses the problem of achieving runtime polymorphism. Polymorphism allows objects of different types to be treated as objects of a common base type. However, without virtual functions, the compiler performs early binding, meaning it resolves the function calls at compile-time based on the type of the pointer or reference.

The issue arises when dealing with base class pointers or references pointing to objects of derived classes. Without virtual functions, these pointers or references would invoke the base class's methods, not the overridden methods in the derived class.

By using the `virtual` keyword in the base class function declaration, you enable late binding, or dynamic dispatch, which means the correct function is determined at runtime based on the actual type of the object being pointed to or referred to. This facilitates the implementation of polymorphism, allowing derived classes to provide their own specific implementations of base class functions and ensuring that the correct function is called, even when accessed through base class pointers or references.

# How does the Virtual Function Works ? OR
                               
# vptr and vtable Concepts in C++

In C++, the concepts of vptr (virtual pointer) and vtable (virtual function table) are closely associated with the implementation of virtual functions and polymorphism. 

## Virtual Table (vtable)

- A **virtual table (vtable)** is a mechanism used to implement virtual functions in C++.
- Each class that contains at least one virtual function typically has an associated vtable.
- The vtable is a table of function pointers. It consists of addresses of the virtual functions for that class.
- The vtable is created by the compiler during the compilation process.It is static array.

## Virtual Pointer (vptr)

- An object of a class with virtual functions often contains a hidden data member called the **virtual pointer (`vptr`)**.
- The `vptr` is a pointer that points to the vtable of the class.
- Each object of a class with virtual functions has its own `vptr`.
- The `vptr` gets the address of the `vtable` at runtime, allowing for dynamic resolution of virtual function calls.
- As `vptr` is created inside the class, it becomes one of the instance variables, and instance variables get memory at runtime when object of that class is created.

### `vptr` in Derived Classes

- Each class that contains at least one virtual function typically has an associated `vtable` created by the compiler during the compilation process.
- If an object is created for any instance of a class, whether derived or base, an associated `vptr` is also created if its base class or the class itself contains the virtual function. This `vptr` points to the `vtable`.
- If a derived class has an overridden version of the virtual function, then the `vtable` will contain the address of the overridden version of the function. If the derived class doesn't have its own overridden version of the virtual function, it inherits the virtual function from the base class. In this case, the `vtable` of the derived class also points to the virtual function of the base class if it's not overridden.



## How It Works

- When a class contains virtual functions, the compiler adds a `vptr` to the class, and it also creates a vtable for the class.
- Each object of that class contains a `vptr`, which points to the vtable of its class.
- When a virtual function is called on an object, the actual function to be called is determined at runtime by looking up the vtable using the `vptr`.
- This enables dynamic binding, allowing the correct function to be called based on the actual type of the object.

## Example

```cpp
class Base {
public:
    virtual void myFunction() {
        // Base class implementation
    }
};

class Derived : public Base {
public:
    void myFunction() override {
        // Derived class implementation
    }
};

int main() {
    Base* obj = new Derived();
    obj->myFunction();  // Calls Derived::myFunction() at runtime

    delete obj;
    return 0;
}
```

### References

If you ever feel doubt in any concept in C++, if you are Hindi Speaker,you can always rely on Saurabh Shukla Sir

- [Virtual Function Working Concept by Saurabh Shukla](https://www.youtube.com/watch?v=Z_FiER8aAqM&t=12s)

Image Illustrations are there in this folder look at it for better understanding.




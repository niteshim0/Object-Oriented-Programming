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


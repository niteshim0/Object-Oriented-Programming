# Late Binding and Early Binding in C++

In C++, binding refers to the association of a function call with the corresponding function definition. There are two types of binding in C++: late binding (also known as dynamic binding or runtime binding) and early binding (also known as static binding or compile-time binding).

## Early Binding (Static Binding)

- Early binding occurs during compile-time.
- The association between the function call and the function definition is established at compile-time.
- It is also known as static binding because the binding is fixed and determined before the program is executed.
- The decision on which function to call is made by the compiler based on the static type of the object or variable.
- Early binding is more efficient in terms of performance because the compiler can optimize the code based on the known types.

### Example of early binding in C++

```cpp
#include <iostream>
using namespace std;
class Base {
public:
    void display() {
        cout << "Base class display\n";
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived class display\n";
    }
};

int main() {
    Base obj;
    obj.display();  // Early binding, calls Base::display() at compile-time

    Derived obj2;
    obj2.display();  // Early binding, calls Derived::display() at compile-time

    return 0;
}
```

## Late Binding(Dynamic Binding) in C++

- **Late binding occurs during runtime.**
  - The association between the function call and the function definition is not determined until the program is executed.

- **It is also known as dynamic binding.**
  - Late binding is resolved dynamically at runtime based on the actual type of the object.

- **Late binding is achieved through the use of virtual functions and polymorphism in C++.**

### Example of late binding in C++

```cpp
#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base class display\n";
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Derived class display\n";
    }
};

int main() {
    Base* ptr = new Derived();
    ptr->display();  // Late binding, calls Derived::display() at runtime

    delete ptr;

    return 0;
}

```


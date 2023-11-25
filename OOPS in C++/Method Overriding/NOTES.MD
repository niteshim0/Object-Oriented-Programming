# Method Overriding in C++

Method overriding is a concept in object-oriented programming that allows a subclass to provide a specific implementation for a method that is already defined in its superclass. 

## Example Code

```cpp
#include <bits/stdc++.h>
using namespace std;
class Animal {
public:
    // Virtual function
    virtual void makeSound() const {
        cout << "Generic animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    // Override the makeSound method
    void makeSound() const override {
        cout << "Woof! Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    // Override the makeSound method
    void makeSound() const override {
        cout << "Meow! Meow!" << endl;
    }
};

int main() {
    Animal genericAnimal;
    Dog myDog;
    Cat myCat;

    // Call the makeSound method for each object
    genericAnimal.makeSound();  // Output: Generic animal sound
    myDog.makeSound();          // Output: Woof! Woof!
    myCat.makeSound();          // Output: Meow! Meow!

    // Using pointers to the base class to demonstrate polymorphism
    Animal* ptrAnimal = &myDog;
    ptrAnimal->makeSound();     // Output: Woof! Woof!

    ptrAnimal = &myCat;
    ptrAnimal->makeSound();     // Output: Meow! Meow!

    return 0;
}


```

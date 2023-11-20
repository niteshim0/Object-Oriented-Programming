#include <bits/stdc++.h>
using namespace std;
// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating." <<endl;
    }
};

// Derived class 1 from Animal
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

// Derived class 2 from Animal
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat is meowing." <<endl;
    }
};

int main() {
    // Creating objects of the derived classes (Dog and Cat)
    Dog myDog;
    Cat myCat;

    // Accessing methods from the base class
    myDog.eat();
    myCat.eat();

    // Accessing methods from the derived classes
    myDog.bark();
    myCat.meow();

    return 0;
}

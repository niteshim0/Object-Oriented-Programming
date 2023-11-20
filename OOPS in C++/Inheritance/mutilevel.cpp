#include <bits/stdc++.h>
using namespace std;
// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating." <<endl;
    }
};

// Intermediate class derived from Animal
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." <<endl;
    }
};

// Derived class derived from Dog
class Bulldog : public Dog {
public:
    void guard() {
        cout << "Bulldog is guarding." <<endl;
    }
};

int main() {
    // Creating an object of the derived class (Bulldog)
    Bulldog myBulldog;

    // Accessing methods from the base classes
    myBulldog.eat();
    myBulldog.bark();
    myBulldog.guard();

    return 0;
}

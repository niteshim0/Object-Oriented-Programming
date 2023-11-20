#include <bits/stdc++.h>
using namespace std;
// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

int main() {
    // Creating an object of the derived class (Dog)
    Dog myDog;

    // Accessing methods from the base class
    myDog.eat();

    // Accessing methods from the derived class
    myDog.bark();

    return 0;
}

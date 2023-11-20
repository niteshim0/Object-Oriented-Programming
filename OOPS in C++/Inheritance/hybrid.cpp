#include <bits/stdc++.h>
using namespace std;
// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
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

// Final derived class with multiple inheritance
class HybridPet : public Dog, public Cat {
public:
    void play() {
        cout << "HybridPet is playing." <<endl;
    }
};

int main() {
    // Creating an object of the final derived class (HybridPet)
    HybridPet myHybridPet;

    // Accessing methods from the base and derived classes
    myHybridPet.eat();//it might be ambigous because it can't understand whether dog eats or cat eats
    myHybridPet.bark();
    myHybridPet.meow();
    myHybridPet.play();

    return 0;
}

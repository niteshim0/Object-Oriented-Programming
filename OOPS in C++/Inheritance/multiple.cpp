#include <bits/stdc++.h>
using namespace std;
// Base classes
class Mammal {
public:
    void giveBirth() {
        cout << "Mammal gives birth." << endl;
    }
};

class Bird {
public:
    void layEggs() {
        cout << "Bird lays eggs." << endl;
    }
};

// Derived class with multiple inheritance
class Platypus : public Mammal, public Bird {
public:
    void swim() {
        cout << "Platypus swims." << endl;
    }
};

int main() {
    // Creating an object of the derived class (Platypus)
    Platypus myPlatypus;

    // Accessing methods from the base classes
    myPlatypus.giveBirth();
    myPlatypus.layEggs();
    myPlatypus.swim();

    return 0;
}

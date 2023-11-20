#include <bits/stdc++.h>
using namespace std;
// Base class with a parameterized constructor
class Base {
public:
    Base(int value) {
        cout << "Base class parameterized constructor with value: " << value << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    // Derived class constructor must explicitly call the Base class parameterized constructor
    Derived(int valueDerived, int valueBase) : Base(valueBase) {
        cout << "Derived class constructor with values: " << valueDerived << ", " << valueBase <<endl;
    }
};

int main() {
    // Creating an object of the derived class, calling both the base and derived class constructors
    Derived derivedObj(42, 21);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
// Base class
class Base {
public:
    Base() {
        cout << "Base class constructor." <<endl;
    }

    ~Base() {
        cout << "Base class destructor." << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    Derived() {
        cout << "Derived class constructor." <<endl;
    }

    ~Derived() {
        cout << "Derived class destructor." <<endl;
    }
};

int main() {
    // Creating an object of the derived class
    Derived derivedObj;

    // Output will show the sequence of constructor and destructor calls

    return 0;
}
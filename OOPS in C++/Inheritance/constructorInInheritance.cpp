#include <bits/stdc++.h>
using namespace std;
// Base class
class Base {
public:
    Base() {
        cout << "Base class constructor." << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    Derived() {
        cout << "Derived class constructor." << endl;
    }
};

int main() {
    // Creating an object of the derived class
    Derived derivedObj;

    return 0;
}
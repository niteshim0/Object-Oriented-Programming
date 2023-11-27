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

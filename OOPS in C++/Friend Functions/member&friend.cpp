#include<iostream>
using namespace std;
class A {
public:
    void fun() {
        cout << "This is first member function in Class A" << endl;
    }

    void foo() {
        cout << "This is second member function in Class A" <<endl;
    }
};

class B {
    friend void A::fun(); // Declare A::fun() as a friend function of B
};

int main() {
    // You can now access A::fun() in B
    A objA;
    objA.fun();

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

class MyClass {
private:
    int value;

public:
    MyClass(int val){
      this->value = val;
    }

    // Overloading unary minus (-)
    MyClass operator-() {
        return MyClass(-value);
    }

    // Overloading increment (++), both prefix and postfix
    MyClass operator++() {//pre increment
        ++value;
        return *this;
    }

    MyClass operator++(int) {//post incremtnt//here we have passed a argument
        MyClass temp = *this;
        ++value;
        return temp;
    }

    // Overloading output stream (<<) for easy display//we will discus this in detail while reading friend function
    friend ostream& operator<<(ostream& os, const MyClass& obj) {
        os << obj.value;
        return os;
    }
};

int main() {
    MyClass obj(42);

    // Using unary minus
    MyClass negObj = -obj;
    cout << "Unary Minus: " << negObj << endl;

    // Using prefix increment
    ++obj;
    cout << "Prefix Increment: " << obj << endl;

    // Using postfix increment
    obj++;
    cout << "Postfix Increment: " << obj <<endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
void exampleFunction() {
    static int count = 0;  // Static local variable
    count++;
    cout << "Count: " << count <<endl;
}
class ExampleClass {
public:
    static int staticVariable;  // Declaration of a static member variable or Class Variable//Whether you create a object or not it will always be created if it exists
    int nonStaticVariable;      // Regular member variable

    ExampleClass(int value) : nonStaticVariable(value) {}
    static void staticFunction();  // Declaration inside the class
    void printVariables() {
        std::cout << "Static Variable: " << staticVariable << std::endl;
        std::cout << "Non-Static Variable: " << nonStaticVariable << std::endl;
    }
};
// Initialization of the static member variable
int ExampleClass::staticVariable = 0;//by defalut it is initiliazed with zero
// here static variable does  gets memory
// Definition outside the class
void ExampleClass::staticFunction() {
    cout<<"Static Member Function Defined Outside the Class"<<endl;
}

int main() {
    exampleFunction();  // Output: Count: 1
    exampleFunction();  // Output: Count: 2
    exampleFunction();  // Output: Count: 3


    ExampleClass obj1(5);
    ExampleClass obj2(10);

    obj1.printVariables();  // Output: Static Variable: 0, Non-Static Variable: 5
    obj2.printVariables();  // Output: Static Variable: 0, Non-Static Variable: 10

    // Modifying the static variable
    ExampleClass::staticVariable = 100;

    obj1.printVariables();  // Output: Static Variable: 100, Non-Static Variable: 5
    obj2.printVariables();  // Output: Static Variable: 100, Non-Static Variable: 10

    ExampleClass::staticFunction();  // Calling the static function


    return 0;
}

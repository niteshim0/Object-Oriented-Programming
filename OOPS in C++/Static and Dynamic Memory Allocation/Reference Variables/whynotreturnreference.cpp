#include <iostream>
using namespace std;
int& returnLocalReference() {
    int value = 5;
    return value; // Returning a reference to a local variable
}

int main() {
    int& result = returnLocalReference();
    cout << "Value: " << result << endl; // Undefined behavior
    return 0;
}
/*In this example, the returnLocalReference function returns a reference to a local variable value. However, once the function finishes executing, the local variable value goes out of scope and is destroyed. The reference result in the main function becomes a dangling reference, pointing to a memory location that is no longer valid. Attempting to access this dangling reference results in undefined behavior.*/
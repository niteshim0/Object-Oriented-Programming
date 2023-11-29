#include <iostream>
using namespace std;
// Function with two integer parameters
int add(int a, int b) {
    return a + b;
}

// Function with two double parameters
double add(double a, double b) {
    return a + b;
}

// Function with a mix of int and double parameters
double add(int a, double b) {
    return a + b;
}

int main() {
    cout << "Sum of integers: " << add(3, 5) << endl;
    cout << "Sum of doubles: " << add(3.5, 5.2) << endl;
    cout << "Mixed types: " << add(2, 4.5) << endl;

    return 0;
}
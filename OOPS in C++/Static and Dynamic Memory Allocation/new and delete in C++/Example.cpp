#include <bits/stdc++.h>
using namespace std;
int main() {
    // Dynamic memory allocation for a single value
    int* intValue = new int;

    // Assign a value to the dynamically allocated integer
    *intValue = 42;

    // Output the value
    cout << "Dynamically allocated integer: " << *intValue << endl;

    // Deallocate memory for the single value
    delete intValue;

    // Dynamic memory allocation for an array
    int size = 5;
    double* doubleArray = new double[size];

    // Assign values to the dynamically allocated array
    for (int i = 0; i < size; ++i) {
        doubleArray[i] = 3.14 * i;
    }

    // Output the values in the array
    cout << "Dynamically allocated array: ";
    for (int i = 0; i < size; ++i) {
        cout << doubleArray[i] << " ";
    }
    cout <<endl;

    // Deallocate memory for the array
    delete[] doubleArray;

    return 0;
}

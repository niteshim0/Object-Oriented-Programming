#include <iostream>
using namespace std;
//It can be an interesting ques regarding references in c++
//How to return multiple values from a function without using any data structures.
void minMax(int arr[], int size, int& minValue, int& maxValue) {
    if (size == 0) {
        cout << "Array is empty." <<endl;
        return;
    }

    minValue = arr[0];
    maxValue = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < minValue) {
            minValue = arr[i];
        }
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }
}

int main() {
    int numbers[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    int minVal, maxVal;
    minMax(numbers, 11, minVal, maxVal);
    cout<< "Minimum value: " << minVal << ", Maximum value: " << maxVal << endl;
    return 0;
};

#include <bits/stdc++.h>
using namespace std;
int main() {
    try {
        // Code that may throw an exception
        int denominator = 0;
        if (denominator == 0) {
            throw runtime_error("Division by zero");
        }
        int result = 10 / denominator;
        cout << "Result: " << result << endl;
    } catch (runtime_error &e) {
        // Handle the exception
        cerr << "Exception: " << e.what() << endl;
    } catch (...) {
        // Catch-all block for any other type of exception
        cerr << "Unknown exception occurred" <<endl;
    }

    return 0;
}
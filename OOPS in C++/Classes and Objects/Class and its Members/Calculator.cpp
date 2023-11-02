#include <iostream>
using namespace std;
//Explaining Member Functions and their specific actions which they perfom on data members of the class.
class Calculator {
private:
    double result;

public:
    Calculator() {
        result = 0;
    }

    void add(double num) {
        result += num;
    }

    void subtract(double num) {
        result -= num;
    }

    void multiply(double num) {
        result *= num;
    }

    void divide(double num) {
        if (num != 0) {
            result /= num;
        } else {
            cout << "Error: Division by zero!" << endl;
        }
    }

    double getResult() {
        return result;
    }
};

int main() {
    Calculator calc;

    calc.add(5.5);
    calc.subtract(2.0);
    calc.multiply(4.0);
    calc.divide(2.0);

    cout << "Result: " << calc.getResult() << endl;

    return 0;
}

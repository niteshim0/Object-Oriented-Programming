#include <bits/stdc++.h>
using namespace std;

class Car {
private:
    // Private members, hidden from the outside
    //by default data members are private in a class
    string make;
    string model;
    int year;

public:
    // Public interface
    // Setter methods
    void setMake(const string& m) {
        make = m;
    }

    void setModel(const string& mdl) {
        model = mdl;
    }

    void setYear(int y) {
        year = y;
    }

    // Getter methods
    string getMake() const {
        return make;
    }

    string getModel() const {
        return model;
    }

    int getYear() const {
        return year;
    }

    // Other public methods
    void displayInfo() const {
        cout << year << " " << make << " " << model <<endl;
    }
};

int main() {
    Car myCar;
    myCar.setMake("Toyota");
    myCar.setModel("Camry");
    myCar.setYear(2022);

    // Accessing information through public interface
    cout << "Car Information: ";
    myCar.displayInfo();

    return 0;
}
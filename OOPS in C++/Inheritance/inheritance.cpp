#include <bits/stdc++.h>
using namespace std;

// Base class
class Car {
private:
    double price;
    string engineType;
    string colour;
    int capacity;

public:
    // Constructor
    Car(double price,string engineType,string colour,int capacity){
      this->price = price;
      this->engineType = engineType;
      this->colour = colour;
      this->capacity = capacity;
    }

    // Getter methods
    double getPrice(){
      return price;
    }
    string getEngineType(){
      return engineType;
    }
    string getColour(){
      return colour;
    }
    int getCapacity(){
      return capacity;
    }

    // Display method
    void display() const {
        cout << "Car Details:\n";
        cout << "Price: " << price << "\n";
        cout << "Engine Type: " << engineType << "\n";
        cout << "Colour: " << colour << "\n";
        cout << "Capacity: " << capacity << "\n";
    }
};

// Derived class
class BrandedCar : public Car {
private:
    bool hasAirbags;
    string navigationSystem;

public:
    // Constructor
    BrandedCar(double price,string engineType,string colour,int capacity,bool hasAirbags,string navigationSystem): Car(price,engineType,colour,capacity){
      //super keyword here will be used when i know it
      this->hasAirbags = hasAirbags;
      this->navigationSystem = navigationSystem;
    }

    // Getter methods for additional features
    bool getHasAirbags(){
      return hasAirbags;
    }
    string getNavigationSystem(){
      return navigationSystem;
    }

    // Display method (overrides the base class display)//we will discuss about method overriding as well
    void display() {
        Car::display();  // Call the base class display
        cout << "Additional Features:\n";
        cout << "Airbags: " << (hasAirbags ? "Yes" : "No") << "\n";
        cout << "Navigation System: " << navigationSystem << "\n";
    }
};

int main() {

    // Create a simple car
    Car myCar(25000.0, "Petrol", "Blue", 5);
    cout << "Simple Car Details:\n";
    myCar.display();
    cout << "\n";

    // Create a branded car
    BrandedCar brandedCar(60000.0, "Electric", "Silver", 4, true, "Advanced GPS");
    cout << "Branded Car Details:\n";
    brandedCar.display();

    return 0;
}

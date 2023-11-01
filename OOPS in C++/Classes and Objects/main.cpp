#include <iostream>
#include <string>
using namespace std;

//Example of Member Function and Data Members
class Person {
private:
    string name;
    int age;

public:
    // Member function to set the name
    void setName(string n) {
        name = n;
    }

    // Member function to set the age
    void setAge(int);

    // Member function to display information
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

//Outside Member function can be defined using scope(::) operator
//But Function Definition should be inside the class
void Person::setAge(int a){
  age = a;
}

int main() {
    // Creating an object of the class Person
    Person person1;

    // Using member functions to set data members
    person1.setName("John Doe");
    person1.setAge(30);

    // Using member function to display information
    person1.displayInfo();

    return 0;
}

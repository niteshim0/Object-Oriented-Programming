#include <iostream>
#include <string>
using namespace std;

// Example of Member Functions and Data Members
class Person {
private:
    string name;
    int age;

public:
    // Member function to set the name (defined inside the class)
    void setName(string n) {
        name = n;
    }

    // Declaration of member function (will be defined outside the class)
    void setAge(int);

    // Member function to display information (defined inside the class)
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Member function defined outside the class using scope resolution operator (::)
// If a member function is defined outside the class, its declaration must be inside the class.
// Otherwise, a compiler error occurs because the compiler won't recognize the function as a class member.
void Person::setAge(int a) {
    age = a;
}

int main() {
    // Creating an object of class Person
    Person person1;

    // Setting values using member functions
    person1.setName("John Doe");
    person1.setAge(30);

    // Displaying the values
    person1.displayInfo();

    return 0;
}

// Constructor Version

#include <iostream>
#include <string>
using namespace std;

// Example of Constructor with Data Members
class Person {
private:
    string name;
    int age;

public:
    // Default Constructor
    Person() {
        name = "Unknown";
        age = 0;
    }

    // Parameterized Constructor
    Person(string n, int a) {
        name = n;
        age = a;
    }

    // Member function to display information
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Using default constructor
    Person p1;
    p1.displayInfo();

    cout << endl;

    // Using parameterized constructor
    Person p2("John Doe", 30);
    p2.displayInfo();

    return 0;
}

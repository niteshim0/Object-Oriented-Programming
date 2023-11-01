#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Setter for the 'name' attribute
    void setName(string n) {
        name = n;
    }

    // Getter for the 'name' attribute
    string getName() const {
        return name;
    }

    // Setter for the 'age' attribute
    void setAge(int a) {
        if (a >= 0) {
            age = a;
        } else {
            cout << "Invalid age. Setting age to 0." << endl;
            age = 0;
        }
    }

    // Getter for the 'age' attribute
    int getAge() const {
        return age;
    }
};

int main() {
    Person person;
    person.setName("John Doe");
    person.setAge(30);

    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;

    person.setAge(-5); // Trying to set an invalid age

    cout << "Updated Age: " << person.getAge() << endl;

    return 0;
}

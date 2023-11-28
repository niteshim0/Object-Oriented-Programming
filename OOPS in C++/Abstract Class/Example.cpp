#include <iostream>
using namespace std;
// Abstract base class for Person
class Person {
public:
    virtual void introduce() = 0;
    virtual void displayRole() = 0;
    virtual void eligibilityCriteria() = 0; // Forces specific implementation in subclasses
};

// Concrete subclass for Student
class Student : public Person {
public:
    void introduce() override {
        cout << "Hi, I am a student." << endl;
    }

    void displayRole() override {
        cout << "I am a student at the university." << endl;
    }

    void eligibilityCriteria() override {
        cout << "I must have completed intermediate to be eligible as a student." <<endl;
    }
};

// Concrete subclass for Faculty
class Faculty : public Person {
public:
    void introduce() override {
        cout << "Hello, I am a faculty member." << endl;
    }

    void displayRole() override {
        cout << "I am a faculty member at the university." <<endl;
    }

    void eligibilityCriteria() override {
        cout << "I must have a relevant academic background to be eligible as faculty"<<endl;
    }
};

int main() {
    // Example with Student
    Student student;
    student.introduce();
    student.displayRole();
    student.eligibilityCriteria();

    cout <<endl;

    // Example with Faculty
    Faculty faculty;
    faculty.introduce();
    faculty.displayRole();
    faculty.eligibilityCriteria();

    return 0;
}

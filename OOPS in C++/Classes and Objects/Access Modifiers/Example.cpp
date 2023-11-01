#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    string address;

public:
    // Constructor for the Person class
    Person(string n, int a, string addr) {
        name = n;
        age = a;
        address = addr;
    }

    // Public method to display personal details
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    // Protected method to change address
    void changeAddress(string newAddress) {
        address = newAddress;
        cout << "Address updated for " << name << ": " << address << endl;
    }
};

class Employee : public Person {
private:
    int employeeId;
    double salary;

public:
    // Constructor for the Employee class
    Employee(string n, int a, string addr, int id, double sal) : Person(n, a, addr) {
        employeeId = id;
        salary = sal;
    }

    // Public method to display employee information
    void displayEmployeeInfo() {
        displayDetails(); // Protected base class method accessible from derived class
        cout << "Employee ID: " << employeeId << endl;
        cout << "Salary: $" << salary << "/year" << endl;
    }

    // Public method to update salary
    void updateSalary(double newSalary) {
        salary = newSalary;
        cout << "Salary updated for employee " << employeeId << " to: $" << salary << "/year" << endl;
    }
};

int main() {
    Employee emp("John Doe", 35, "123 Main St, City, Country", 1001, 60000);
    emp.displayEmployeeInfo();
    emp.changeAddress("456 Oak Ave, Town, Country"); // Protected method called from derived class
    emp.displayEmployeeInfo();
    emp.updateSalary(65000); // Public method called

    return 0;
}

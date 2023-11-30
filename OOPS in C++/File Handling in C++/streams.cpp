#include <iostream>
using namespace std;
#include <fstream>

int main() {
    // Output to standard output (console)
    cout << "Hello, World!" << endl;

    // Input from standard input (keyboard)
    cout << "Enter a number: ";
    int userInput;
    cin >> userInput;
    cout << "You entered: " << userInput <<endl;

    // Output to a file
    ofstream outFile("example.txt");
    if (outFile.is_open()) {
        outFile << "Writing to a file using C++ streams." <<endl;
        outFile.close();
    } else {
        cerr << "Error opening the file!" <<endl;
    }

    // Input from a file
    ifstream inFile("example.txt");
    if (inFile.is_open()) {
        string line;
        while (getline(inFile, line)) {
            cout << "Read from file: " << line <<endl;
        }
        inFile.close();
    } else {
        cerr << "Error opening the file!" << endl;
    }

    return 0;
}
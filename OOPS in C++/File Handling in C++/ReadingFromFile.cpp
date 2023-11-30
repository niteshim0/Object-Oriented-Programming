#include <iostream>
using namespace std;
#include <fstream>
#include <string>

int main() {
    // Open a text file for reading
    ifstream inFile("example.txt");

    if (inFile.is_open()) {
        string line;
        cout << "Content of the file:\n";
        while (getline(inFile, line)) {
            cout << line << '\n';
        }
        inFile.close();
    } else {
        cerr << "Error opening the file for reading!\n";
    }

    return 0;
}
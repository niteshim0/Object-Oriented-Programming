#include <iostream>
using namespace std;
#include <fstream>

int main() {
    // Create and open a text file for writing
    ofstream outFile("example.txt");

    if (outFile.is_open()) {
        outFile << "Hello, File Handling in C++!\n";
        outFile << "This is another line.";
        outFile.close();
        cout << "File successfully written.\n";
    } else {
        cerr << "Error opening the file for writing!\n";
    }

    return 0;
}
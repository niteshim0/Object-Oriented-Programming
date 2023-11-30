#include <iostream>
using namespace std;
#include <fstream>

int main() {
    // Open a file for writing and append data to the end
    ofstream outputFile("example.txt", ios::out | ios::app);

    if (outputFile.is_open()) {
        // File operations go here
        outputFile << "Hello, World!\n";

        // Close the file when done
        outputFile.close();
    } else {
        cerr << "Error opening the file\n";
    }

    return 0;
}
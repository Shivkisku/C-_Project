#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inputFile("self_display.cpp");
    string line;

    // Check if the file opened successfully
    if (!inputFile) {
        cerr << "Error opening the file." << endl;
        return 1;
    }

    // Read and display each line from the file (own source code)
    while (getline(inputFile, line)) {
        cout << line << endl;
    }

    // Close the file
    inputFile.close();

    return 0;
}

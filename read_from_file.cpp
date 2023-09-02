#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string fileName, line;

    // Input: Ask the user to enter the file name
    cout << "Enter the file name: ";
    cin >> fileName;

    // Open the file for reading
    ifstream inputFile(fileName);

    // Check if the file opened successfully
    if (!inputFile) {
        cerr << "Error opening the file." << endl;
        return 1;
    }

    // Read and display each line from the file
    cout << "\nContents of the file:" << endl;
    while (getline(inputFile, line)) {
        cout << line << endl;
    }

    // Close the file
    inputFile.close();

    return 0;
}

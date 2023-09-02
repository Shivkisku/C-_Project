#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string sentence;

    // Input: Ask the user to enter a sentence
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    // Output: Open a file for writing
    ofstream outputFile("output.txt");

    // Check if the file opened successfully
    if (!outputFile) {
        cerr << "Error opening the file." << endl;
        return 1;
    }

    // Write the sentence to the file
    outputFile << sentence;

    // Close the file
    outputFile.close();

    cout << "Sentence has been written to 'output.txt'." << endl;

    return 0;
}

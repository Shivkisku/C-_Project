#include <iostream>
#include <cctype> // For isalpha function

using namespace std;

int main() {
    string inputString;

    // Input: Ask the user to enter a string
    cout << "Enter a string: ";
    getline(cin, inputString); // Read the entire line as input

    // Remove non-alphabet characters from the string
    string resultString = "";
    for (char c : inputString) {
        if (isalpha(c)) {
            resultString += c;
        }
    }

    // Output: Display the modified string
    cout << "Modified string (only alphabets): " << resultString << endl;

    return 0;
}

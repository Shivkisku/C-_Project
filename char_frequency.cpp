#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    string inputString;

    // Input: Ask the user to enter a string
    cout << "Enter a string: ";
    getline(cin, inputString); // Read the entire line as input

    // Define an unordered_map to store character frequencies
    unordered_map<char, int> charFrequency;

    // Calculate character frequencies
    for (char c : inputString) {
        if (isalpha(c)) {
            // Convert the character to lowercase to ensure case-insensitive counting
            c = tolower(c);
            charFrequency[c]++;
        }
    }

    // Output: Display character frequencies
    cout << "Character frequencies in the string:" << endl;
    for (const auto& pair : charFrequency) {
        cout << "'" << pair.first << "': " << pair.second << " times" << endl;
    }

    return 0;
}

#include <iostream>
#include <cctype> // For isalpha and isdigit functions

using namespace std;

int main() {
    string inputString;
    int vowels = 0, consonants = 0, digits = 0, specialChars = 0;

    // Input: Ask the user to enter a string
    cout << "Enter a string: ";
    getline(cin, inputString); // Read the entire line as input

    // Calculate counts for each category
    for (char c : inputString) {
        if (isalpha(c)) {
            // Check if the character is an alphabet
            c = tolower(c); // Convert to lowercase for case-insensitive counting
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit(c)) {
            digits++;
        } else {
            specialChars++;
        }
    }

    // Output: Display the counts
    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;
    cout << "Number of digits: " << digits << endl;
    cout << "Number of special characters: " << specialChars << endl;

    return 0;
}

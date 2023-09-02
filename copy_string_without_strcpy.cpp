#include <iostream>

using namespace std;

int main() {
    char source[100], destination[100];
    int i;

    // Input: Ask the user to enter a string
    cout << "Enter a string: ";
    cin.getline(source, 100); // Read the entire line as input

    // Copy the string character by character
    for (i = 0; source[i] != '\0'; ++i) {
        destination[i] = source[i];
    }

    destination[i] = '\0'; // Null-terminate the destination string

    // Output: Display the copied string
    cout << "Copied string: " << destination << endl;

    return 0;
}

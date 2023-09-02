#include <iostream>
#include <cstring> // For using strlen function

using namespace std;

int main() {
    char str[100]; // Declare a character array to store the string

    // Input: Ask the user to enter a string
    cout << "Enter a string: ";
    cin.getline(str, 100); // Read the entire line as input

    // Find the length of the string using strlen function
    int length = strlen(str);

    // Output: Display the length of the string
    cout << "Length of the string: " << length << " characters" << endl;

    return 0;
}

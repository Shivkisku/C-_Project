#include <iostream>
#include <cstring> // For using strcat function

using namespace std;

int main() {
    char str1[100], str2[100]; // Declare two character arrays to store the strings

    // Input: Ask the user to enter the first string
    cout << "Enter the first string: ";
    cin.getline(str1, 100); // Read the entire line as input

    // Input: Ask the user to enter the second string
    cout << "Enter the second string: ";
    cin.getline(str2, 100); // Read the entire line as input

    // Concatenate the two strings using strcat function
    strcat(str1, str2);

    // Output: Display the concatenated string
    cout << "Concatenated string: " << str1 << endl;

    return 0;
}

#include <iostream>

int main() {
    char character;

    // Prompt the user to enter a character
    std::cout << "Enter a character: ";
    std::cin >> character;

    // Convert the character to its ASCII value
    int asciiValue = static_cast<int>(character);

    // Display the ASCII value
    std::cout << "The ASCII value of '" << character << "' is: " << asciiValue << std::endl;

    return 0;
}

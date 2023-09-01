#include <iostream>

int main() {
    char character;

    // Prompt the user to enter a character
    std::cout << "Enter a character: ";
    std::cin >> character;

    // Convert the character to lowercase to simplify the check
    character = tolower(character);

    // Check if the character is a vowel or a consonant
    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u') {
        std::cout << character << " is a vowel." << std::endl;
    } else if (character >= 'a' && character <= 'z') {
        std::cout << character << " is a consonant." << std::endl;
    } else {
        std::cout << "Invalid input. Please enter a valid character." << std::endl;
    }

    return 0;
}

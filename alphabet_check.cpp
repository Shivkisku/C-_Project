#include <iostream>
#include <cctype>

int main() {
    char character;

    // Prompt the user to enter a character
    std::cout << "Enter a character: ";
    std::cin >> character;

    // Check if the character is an alphabet
    if (std::isalpha(character)) {
        std::cout << character << " is an alphabet." << std::endl;
    } else {
        std::cout << character << " is not an alphabet." << std::endl;
    }

    return 0;
}

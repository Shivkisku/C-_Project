#include <iostream>

int main() {
    int number, originalNumber, reversedNumber = 0;

    // Prompt the user to enter an integer
    std::cout << "Enter an integer: ";
    std::cin >> number;

    originalNumber = number; // Store the original number

    // Reverse the number
    while (number != 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    // Check if the original number and the reversed number are the same
    if (originalNumber == reversedNumber) {
        std::cout << originalNumber << " is a palindrome." << std::endl;
    } else {
        std::cout << originalNumber << " is not a palindrome." << std::endl;
    }

    return 0;
}

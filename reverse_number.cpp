#include <iostream>

int main() {
    int number, reversedNumber = 0;

    // Prompt the user to enter an integer
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Reverse the number
    while (number != 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    // Display the reversed number
    std::cout << "Reversed number: " << reversedNumber << std::endl;

    return 0;
}

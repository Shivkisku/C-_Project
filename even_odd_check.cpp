#include <iostream>

int main() {
    int number;

    // Prompt the user to enter a number
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Check if the number is even or odd
    if (number % 2 == 0) {
        std::cout << number << " is even." << std::endl;
    } else {
        std::cout << number << " is odd." << std::endl;
    }

    return 0;
}

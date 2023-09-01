#include <iostream>

int main() {
    int number;

    // Prompt the user to enter an integer
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Display factors of the number
    std::cout << "Factors of " << number << " are:" << std::endl;

    for (int i = 1; i <= number; ++i) {
        if (number % i == 0) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}

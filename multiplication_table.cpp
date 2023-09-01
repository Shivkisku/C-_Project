#include <iostream>

int main() {
    int number, range;

    // Prompt the user to enter a number
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Prompt the user to enter the range (how many multiples to generate)
    std::cout << "Enter the range (number of multiples to generate): ";
    std::cin >> range;

    // Display the multiplication table
    std::cout << "Multiplication table for " << number << " up to " << range << " multiples:" << std::endl;

    for (int i = 1; i <= range; ++i) {
        std::cout << number << " x " << i << " = " << (number * i) << std::endl;
    }

    return 0;
}

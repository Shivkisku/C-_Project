#include <iostream>

int main() {
    double num1, num2, num3;

    // Prompt the user to enter three numbers
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "Enter the third number: ";
    std::cin >> num3;

    // Find the largest number
    double largest = num1; // Assume the first number is the largest initially

    if (num2 > largest) {
        largest = num2;
    }

    if (num3 > largest) {
        largest = num3;
    }

    // Display the result
    std::cout << "The largest number is: " << largest << std::endl;

    return 0;
}

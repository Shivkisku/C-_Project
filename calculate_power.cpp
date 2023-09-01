#include <iostream>

// Function to calculate the power of a number using a loop
double calculatePower(double base, int exponent) {
    double result = 1.0;

    // Handle negative exponents
    if (exponent < 0) {
        base = 1.0 / base;
        exponent = -exponent;
    }

    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }

    return result;
}

int main() {
    double base;
    int exponent;

    // Prompt the user to enter the base and exponent
    std::cout << "Enter the base: ";
    std::cin >> base;

    std::cout << "Enter the exponent: ";
    std::cin >> exponent;

    // Calculate the power and display the result
    double result = calculatePower(base, exponent);
    std::cout << "Result: " << result << std::endl;

    return 0;
}

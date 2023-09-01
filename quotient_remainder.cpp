#include <iostream>

int main() {
    int dividend, divisor, quotient, remainder;

    // Prompt the user to enter the dividend
    std::cout << "Enter the dividend: ";
    std::cin >> dividend;

    // Prompt the user to enter the divisor
    std::cout << "Enter the divisor: ";
    std::cin >> divisor;

    // Compute the quotient and remainder
    quotient = dividend / divisor;
    remainder = dividend % divisor;

    // Display the results
    std::cout << "Quotient: " << quotient << std::endl;
    std::cout << "Remainder: " << remainder << std::endl;

    return 0;
}

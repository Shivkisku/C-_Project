#include <iostream>
#include <string>

// Function to convert a decimal number to octal
std::string decimalToOctal(int decimal) {
    if (decimal == 0) {
        return "0"; // Special case: Decimal 0 is octal 0
    }

    std::string octal = "";
    while (decimal > 0) {
        int remainder = decimal % 8;
        octal = std::to_string(remainder) + octal;
        decimal /= 8;
    }
    return octal;
}

int main() {
    int decimalNumber;

    // Prompt the user to enter a decimal number
    std::cout << "Enter a decimal number: ";
    std::cin >> decimalNumber;

    // Convert and display the decimal number as octal
    std::string octalNumber = decimalToOctal(decimalNumber);
    std::cout << "Octal equivalent: " << octalNumber << std::endl;

    return 0;
}

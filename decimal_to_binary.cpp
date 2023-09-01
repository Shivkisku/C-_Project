#include <iostream>
#include <string>

// Function to convert a decimal number to binary
std::string decimalToBinary(int decimal) {
    if (decimal == 0) {
        return "0"; // Special case: Decimal 0 is binary 0
    }

    std::string binary = "";
    while (decimal > 0) {
        int remainder = decimal % 2;
        binary = std::to_string(remainder) + binary;
        decimal /= 2;
    }
    return binary;
}

int main() {
    int decimalNumber;

    // Prompt the user to enter a decimal number
    std::cout << "Enter a decimal number: ";
    std::cin >> decimalNumber;

    // Convert and display the decimal number as binary
    std::string binaryNumber = decimalToBinary(decimalNumber);
    std::cout << "Binary equivalent: " << binaryNumber << std::endl;

    return 0;
}

#include <iostream>
#include <cmath>

// Function to convert a binary number to decimal
int binaryToDecimal(long long binary) {
    int decimal = 0, i = 0, remainder;
    while (binary != 0) {
        remainder = binary % 10;
        decimal += remainder * pow(2, i);
        ++i;
        binary /= 10;
    }
    return decimal;
}

int main() {
    long long binaryNumber;

    // Prompt the user to enter a binary number
    std::cout << "Enter a binary number: ";
    std::cin >> binaryNumber;

    // Convert and display the binary number as decimal
    int decimalNumber = binaryToDecimal(binaryNumber);
    std::cout << "Decimal equivalent: " << decimalNumber << std::endl;

    return 0;
}

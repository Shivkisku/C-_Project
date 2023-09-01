#include <iostream>
#include <cmath>

// Function to convert an octal number to decimal
int octalToDecimal(int octal) {
    int decimal = 0, i = 0;
    while (octal != 0) {
        int remainder = octal % 10;
        decimal += remainder * pow(8, i);
        ++i;
        octal /= 10;
    }
    return decimal;
}

int main() {
    int octalNumber;

    // Prompt the user to enter an octal number
    std::cout << "Enter an octal number: ";
    std::cin >> octalNumber;

    // Convert and display the octal number as decimal
    int decimalNumber = octalToDecimal(octalNumber);
    std::cout << "Decimal equivalent: " << decimalNumber << std::endl;

    return 0;
}

#include <iostream>
#include <cmath>

// Function to count the number of digits in a number
int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        ++count;
    }
    return count;
}

// Function to check if a number is an Armstrong number
bool isArmstrong(int number) {
    int originalNumber = number;
    int numDigits = countDigits(number);
    int sum = 0;

    while (number != 0) {
        int digit = number % 10;
        sum += std::pow(digit, numDigits);
        number /= 10;
    }

    return (sum == originalNumber);
}

int main() {
    int number;

    // Prompt the user to enter an integer
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Check if the number is an Armstrong number and display the result
    if (isArmstrong(number)) {
        std::cout << number << " is an Armstrong number." << std::endl;
    } else {
        std::cout << number << " is not an Armstrong number." << std::endl;
    }

    return 0;
}

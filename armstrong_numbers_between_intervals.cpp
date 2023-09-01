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
    int start, end;

    // Prompt the user to enter the start and end of the interval
    std::cout << "Enter the start of the interval: ";
    std::cin >> start;

    std::cout << "Enter the end of the interval: ";
    std::cin >> end;

    // Display Armstrong numbers within the specified interval
    std::cout << "Armstrong numbers between " << start << " and " << end << " are:" << std::endl;

    for (int i = start; i <= end; ++i) {
        if (isArmstrong(i)) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}

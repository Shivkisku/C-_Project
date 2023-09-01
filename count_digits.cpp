#include <iostream>

int main() {
    int number, count = 0;

    // Prompt the user to enter an integer
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Handle negative numbers by converting them to positive
    if (number < 0) {
        number = -number;
    }

    // Count the number of digits
    do {
        number /= 10;
        ++count;
    } while (number != 0);

    // Display the result
    std::cout << "Number of digits: " << count << std::endl;

    return 0;
}

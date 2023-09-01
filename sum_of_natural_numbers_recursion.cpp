#include <iostream>

// Recursive function to find the sum of natural numbers
int sumOfNaturalNumbers(int n) {
    if (n == 1) {
        return 1; // Base case: Sum of 1 is 1
    } else {
        return n + sumOfNaturalNumbers(n - 1); // Recursive case
    }
}

int main() {
    int n;

    // Prompt the user to enter a positive integer
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
    } else {
        // Calculate the sum of natural numbers and display the result
        int sum = sumOfNaturalNumbers(n);
        std::cout << "The sum of natural numbers from 1 to " << n << " is: " << sum << std::endl;
    }

    return 0;
}

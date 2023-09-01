#include <iostream>

// Recursive function to find the factorial of a number
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: Factorial of 0 or 1 is 1
    } else {
        return n * factorial(n - 1); // Recursive case
    }
}

int main() {
    int n;

    // Prompt the user to enter a non-negative integer
    std::cout << "Enter a non-negative integer: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Please enter a non-negative integer." << std::endl;
    } else {
        // Calculate the factorial and display the result
        unsigned long long result = factorial(n);
        std::cout << "The factorial of " << n << " is: " << result << std::endl;
    }

    return 0;
}

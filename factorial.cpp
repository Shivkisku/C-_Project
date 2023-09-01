#include <iostream>

int main() {
    int n;
    unsigned long long factorial = 1; // Use 'unsigned long long' to handle large factorials

    // Prompt the user to enter a non-negative integer
    std::cout << "Enter a non-negative integer: ";
    std::cin >> n;

    // Check if the input is non-negative
    if (n < 0) {
        std::cout << "Please enter a non-negative integer." << std::endl;
        return 1; // Exit with an error code
    }

    // Calculate the factorial of 'n'
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    // Display the result
    std::cout << "The factorial of " << n << " is: " << factorial << std::endl;

    return 0;
}

#include <iostream>

int main() {
    int n, sum = 0;

    // Prompt the user to enter a positive integer
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    // Check if the input is a positive integer
    if (n <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1; // Exit with an error code
    }

    // Calculate the sum of natural numbers up to 'n'
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    // Display the result
    std::cout << "The sum of natural numbers up to " << n << " is: " << sum << std::endl;

    return 0;
}

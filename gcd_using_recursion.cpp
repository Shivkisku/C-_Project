#include <iostream>

// Recursive function to find the GCD of two numbers
int gcd(int a, int b) {
    if (b == 0) {
        return a; // Base case: GCD(a, 0) = a
    } else {
        return gcd(b, a % b); // Recursive case
    }
}

int main() {
    int num1, num2;

    // Prompt the user to enter two positive integers
    std::cout << "Enter two positive integers: ";
    std::cin >> num1 >> num2;

    if (num1 <= 0 || num2 <= 0) {
        std::cout << "Please enter two positive integers." << std::endl;
    } else {
        // Calculate the GCD and display the result
        int result = gcd(num1, num2);
        std::cout << "The GCD of " << num1 << " and " << num2 << " is: " << result << std::endl;
    }

    return 0;
}

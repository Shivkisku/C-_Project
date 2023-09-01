#include <iostream>

// Function to calculate the GCD using the Euclidean algorithm
int findGCD(int num1, int num2) {
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}

int main() {
    int num1, num2;

    // Prompt the user to enter two numbers
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Calculate the GCD of the two numbers
    int gcd = findGCD(num1, num2);

    // Display the result
    std::cout << "The GCD of " << num1 << " and " << num2 << " is: " << gcd << std::endl;

    return 0;
}

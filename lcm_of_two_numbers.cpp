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

// Function to calculate the LCM of two numbers
int findLCM(int num1, int num2) {
    int gcd = findGCD(num1, num2);
    return (num1 * num2) / gcd;
}

int main() {
    int num1, num2;

    // Prompt the user to enter two numbers
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Calculate the LCM of the two numbers
    int lcm = findLCM(num1, num2);

    // Display the result
    std::cout << "The LCM of " << num1 << " and " << num2 << " is: " << lcm << std::endl;

    return 0;
}

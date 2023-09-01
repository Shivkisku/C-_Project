#include <iostream>

int main() {
    float num1, num2, product;

    // Prompt the user to enter the first floating-point number
    std::cout << "Enter the first floating-point number: ";
    std::cin >> num1;

    // Prompt the user to enter the second floating-point number
    std::cout << "Enter the second floating-point number: ";
    std::cin >> num2;

    // Multiply the two floating-point numbers
    product = num1 * num2;

    // Display the result
    std::cout << "The product of " << num1 << " and " << num2 << " is: " << product << std::endl;

    return 0;
}

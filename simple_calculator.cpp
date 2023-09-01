#include <iostream>

int main() {
    char operation;
    double num1, num2;

    // Prompt the user to enter an operator (+, -, *, /)
    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> operation;

    // Prompt the user to enter two numbers
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // Perform the operation based on the operator entered
    switch (operation) {
        case '+':
            std::cout << "Result: " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "Result: " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << "Result: " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 != 0) {
                std::cout << "Result: " << num1 / num2 << std::endl;
            } else {
                std::cout << "Error: Division by zero." << std::endl;
            }
            break;
        default:
            std::cout << "Error: Invalid operator." << std::endl;
            break;
    }

    return 0;
}

#include <iostream>

int main() {
    int number; // Declare an integer variable to store the user's input
    
    // Prompt the user to enter an integer
    std::cout << "Please enter an integer: ";
    
    // Read the user's input into the 'number' variable
    std::cin >> number;
    
    // Print the entered integer
    std::cout << "You entered: " << number << std::endl;
    
    return 0;
}

#include <iostream>

int main() {
    int rows;

    // Prompt the user to enter the number of rows for the pyramid
    std::cout << "Enter the number of rows for the pyramid: ";
    std::cin >> rows;

    // Loop to create the pyramid
    for (int i = 1; i <= rows; ++i) {
        // Print spaces (before asterisks) on each line
        for (int j = 1; j <= rows - i; ++j) {
            std::cout << " ";
        }

        // Print asterisks on each line
        for (int k = 1; k <= 2 * i - 1; ++k) {
            std::cout << "*";
        }

        // Move to the next line
        std::cout << std::endl;
    }

    return 0;
}

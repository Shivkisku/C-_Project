#include <iostream>

int main() {
    int n;
    long long int first = 0, second = 1, next;

    // Prompt the user to enter the number of terms
    std::cout << "Enter the number of terms in the Fibonacci sequence: ";
    std::cin >> n;

    // Display the first two terms (0 and 1) separately
    std::cout << "Fibonacci Sequence:" << std::endl;
    std::cout << first << " " << second << " ";

    // Calculate and display the remaining terms
    for (int i = 2; i < n; ++i) {
        next = first + second;
        std::cout << next << " ";
        first = second;
        second = next;
    }

    std::cout << std::endl;

    return 0;
}

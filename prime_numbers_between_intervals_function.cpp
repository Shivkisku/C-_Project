#include <iostream>

// Function to check if a number is prime
bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    if (number <= 3) {
        return true;
    }
    if (number % 2 == 0 || number % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

// Function to display prime numbers between two intervals
void displayPrimes(int start, int end) {
    std::cout << "Prime numbers between " << start << " and " << end << " are:" << std::endl;

    for (int i = start; i <= end; ++i) {
        if (isPrime(i)) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;
}

int main() {
    int start, end;

    // Prompt the user to enter the start and end of the interval
    std::cout << "Enter the start of the interval: ";
    std::cin >> start;

    std::cout << "Enter the end of the interval: ";
    std::cin >> end;

    // Call the function to display prime numbers within the specified interval
    displayPrimes(start, end);

    return 0;
}

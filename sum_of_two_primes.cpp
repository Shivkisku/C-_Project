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

int main() {
    int n;

    // Prompt the user to enter an integer
    std::cout << "Enter an integer: ";
    std::cin >> n;

    bool found = false;

    // Check if the number can be expressed as the sum of two prime numbers
    for (int i = 2; i <= n / 2; ++i) {
        if (isPrime(i) && isPrime(n - i)) {
            std::cout << n << " can be expressed as the sum of " << i << " and " << n - i << std::endl;
            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << n << " cannot be expressed as the sum of two prime numbers." << std::endl;
    }

    return 0;
}

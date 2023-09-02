#include <iostream>

using namespace std;

// Recursive function to calculate the power of a number
double power(double base, int exponent) {
    // Base case: If the exponent is 0, the result is 1.
    if (exponent == 0) {
        return 1.0;
    }

    // Recursive case: Calculate the power recursively
    if (exponent > 0) {
        return base * power(base, exponent - 1);
    } else {
        // If the exponent is negative, calculate the reciprocal of the power
        return 1.0 / (base * power(base, -exponent - 1));
    }
}

int main() {
    double base;
    int exponent;

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;

    double result = power(base, exponent);
    cout << "Result: " << result << endl;

    return 0;
}

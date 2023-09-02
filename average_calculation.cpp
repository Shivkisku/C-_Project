#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // Check if the number of elements is non-negative
    if (n <= 0) {
        cout << "Invalid input. Number of elements must be positive." << endl;
        return 1; // Return a non-zero value to indicate an error
    }

    double sum = 0.0;
    double* numbers = new double[n]; // Dynamic array to store numbers

    // Input: Prompt the user to enter the numbers
    cout << "Enter " << n << " numbers, one per line:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
        sum += numbers[i];
    }

    // Calculate the average
    double average = sum / n;

    // Output: Display the result
    cout << "Average: " << average << endl;

    // Deallocate dynamic array memory
    delete[] numbers;

    return 0;
}

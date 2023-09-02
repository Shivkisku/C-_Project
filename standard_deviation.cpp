#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the dataset: ";
    cin >> n;

    // Check if the number of elements is non-negative
    if (n <= 0) {
        cout << "Invalid input. Number of elements must be positive." << endl;
        return 1; // Return a non-zero value to indicate an error
    }

    double* dataset = new double[n]; // Dynamic array to store data

    // Input: Prompt the user to enter the dataset
    cout << "Enter " << n << " data points, one per line:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> dataset[i];
    }

    // Calculate the mean (average) of the dataset
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += dataset[i];
    }
    double mean = sum / n;

    // Calculate the sum of squares of differences from the mean
    double sumOfSquares = 0.0;
    for (int i = 0; i < n; i++) {
        double diff = dataset[i] - mean;
        sumOfSquares += diff * diff;
    }

    // Calculate the variance
    double variance = sumOfSquares / n;

    // Calculate the standard deviation (square root of variance)
    double standardDeviation = sqrt(variance);

    // Output: Display the standard deviation
    cout << "Standard Deviation: " << standardDeviation << endl;

    // Deallocate dynamic array memory
    delete[] dataset;

    return 0;
}

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

    // Allocate memory dynamically for an array to store the elements
    int* arr = new int[n];

    // Input: Prompt the user to enter the elements
    cout << "Enter " << n << " elements, one per line:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Find the largest element in the dynamically allocated array
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Output: Display the largest element
    cout << "Largest element: " << largest << endl;

    // Deallocate dynamically allocated memory
    delete[] arr;

    return 0;
}

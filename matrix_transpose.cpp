#include <iostream>

using namespace std;

int main() {
    int rows, cols;

    // Input: Ask the user to enter the dimensions of the matrix
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Check if the dimensions are valid (positive)
    if (rows <= 0 || cols <= 0) {
        cout << "Invalid input. Rows and columns must be positive." << endl;
        return 1; // Return a non-zero value to indicate an error
    }

    // Define the matrix with the given dimensions
    int matrix[rows][cols];

    // Input: Prompt the user to enter elements for the matrix
    cout << "Enter elements for the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    // Calculate the transpose of the matrix
    int transpose[cols][rows];
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    // Output: Display the transposed matrix
    cout << "Transpose of the Matrix:" << endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

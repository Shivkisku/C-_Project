#include <iostream>

using namespace std;

int main() {
    int rows, cols;

    // Input: Ask the user to enter the dimensions of the matrices
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Check if the dimensions are valid (both matrices should have the same dimensions)
    if (rows <= 0 || cols <= 0) {
        cout << "Invalid input. Rows and columns must be positive." << endl;
        return 1; // Return a non-zero value to indicate an error
    }

    // Define two matrices with the given dimensions
    int matrix1[rows][cols];
    int matrix2[rows][cols];

    // Input: Prompt the user to enter elements for the first matrix
    cout << "Enter elements for the first matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix1[i][j];
        }
    }

    // Input: Prompt the user to enter elements for the second matrix
    cout << "Enter elements for the second matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix2[i][j];
        }
    }

    // Perform matrix addition and store the result in a new matrix
    int result[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Output: Display the result matrix
    cout << "Resultant Matrix (Sum of the two matrices):" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

#include <iostream>

using namespace std;

int main() {
    int rows1, cols1, rows2, cols2;

    // Input: Ask the user to enter the dimensions of the first matrix
    cout << "Enter the number of rows for the first matrix: ";
    cin >> rows1;
    cout << "Enter the number of columns for the first matrix: ";
    cin >> cols1;

    // Input: Ask the user to enter the dimensions of the second matrix
    cout << "Enter the number of rows for the second matrix: ";
    cin >> rows2;
    cout << "Enter the number of columns for the second matrix: ";
    cin >> cols2;

    // Check if the dimensions are valid for matrix multiplication
    if (cols1 != rows2 || rows1 <= 0 || cols1 <= 0 || rows2 <= 0 || cols2 <= 0) {
        cout << "Invalid input. Matrix dimensions for multiplication must satisfy (cols1 == rows2) and be positive." << endl;
        return 1; // Return a non-zero value to indicate an error
    }

    // Define two matrices with the given dimensions
    int matrix1[rows1][cols1];
    int matrix2[rows2][cols2];

    // Input: Prompt the user to enter elements for the first matrix
    cout << "Enter elements for the first matrix:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cin >> matrix1[i][j];
        }
    }

    // Input: Prompt the user to enter elements for the second matrix
    cout << "Enter elements for the second matrix:" << endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cin >> matrix2[i][j];
        }
    }

    // Perform matrix multiplication and store the result in a new matrix
    int result[rows1][cols2];
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Output: Display the result matrix
    cout << "Resultant Matrix (Matrix Multiplication):" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

#include <iostream>

using namespace std;

// Function to swap numbers in cyclic order using call by reference
void cyclicSwap(int &a, int &b, int &c) {
    int temp = a;
    a = c;
    c = b;
    b = temp;
}

int main() {
    int num1, num2, num3;

    // Input: Ask the user to enter three numbers
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Call the cyclicSwap function to swap the numbers in cyclic order
    cyclicSwap(num1, num2, num3);

    // Output: Display the swapped numbers
    cout << "Swapped numbers in cyclic order: " << num1 << " " << num2 << " " << num3 << endl;

    return 0;
}

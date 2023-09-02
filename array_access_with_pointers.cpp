#include <iostream>

using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Pointer to int to store the address of the array elements
    int* ptr = arr;

    cout << "Accessing elements of the array using pointers:" << endl;

    // Accessing elements using a loop and pointer arithmetic
    for (int i = 0; i < size; i++) {
        cout << "Element " << i << ": " << *ptr << endl;
        // Increment the pointer to move to the next element
        ptr++;
    }

    return 0;
}

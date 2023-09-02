#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    cin.ignore(); // Consume the newline character left by cin

    vector<string> elements(n);

    // Input: Ask the user to enter the elements
    cout << "Enter the elements, one per line:" << endl;
    for (int i = 0; i < n; i++) {
        getline(cin, elements[i]);
    }

    // Sort the elements in lexicographical order
    sort(elements.begin(), elements.end());

    // Output: Display the sorted elements
    cout << "Elements in lexicographical order:" << endl;
    for (int i = 0; i < n; i++) {
        cout << elements[i] << endl;
    }

    return 0;
}

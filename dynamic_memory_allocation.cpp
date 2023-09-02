#include <iostream>
#include <string>

using namespace std;

// Define a structure to represent information
struct Information {
    string name;
    int age;
};

int main() {
    int n;

    // Input: Ask the user to enter the number of pieces of information
    cout << "Enter the number of pieces of information: ";
    cin >> n;

    // Create an array of Information structures dynamically
    Information* infoArray = new Information[n];

    // Input: Ask the user to enter information for each piece
    cout << "\nEnter Information:" << endl;
    for (int i = 0; i < n; i++) {
        cin.ignore(); // Consume the newline character left by cin
        cout << "Information " << i + 1 << ":" << endl;
        cout << "Name: ";
        getline(cin, infoArray[i].name);
        cout << "Age: ";
        cin >> infoArray[i].age;
    }

    // Output: Display the entered information
    cout << "\nEntered Information:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Information " << i + 1 << ":" << endl;
        cout << "Name: " << infoArray[i].name << endl;
        cout << "Age: " << infoArray[i].age << endl;
    }

    // Deallocate the dynamically allocated memory
    delete[] infoArray;

    return 0;
}

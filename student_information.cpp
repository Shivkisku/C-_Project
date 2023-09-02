#include <iostream>
#include <string>

using namespace std;

// Define a structure to represent student information
struct Student {
    string name;
    int rollNumber;
    float marks;
};

int main() {
    int n;

    // Input: Ask the user to enter the number of students
    cout << "Enter the number of students: ";
    cin >> n;

    // Create an array of Student structures to store information for n students
    Student students[n];

    // Input: Ask the user to enter student information for each student
    cout << "\nEnter Student Information:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << ":" << endl;
        cin.ignore(); // Consume the newline character left by cin
        cout << "Name: ";
        getline(cin, students[i].name);
        cout << "Roll Number: ";
        cin >> students[i].rollNumber;
        cout << "Marks: ";
        cin >> students[i].marks;
    }

    // Output: Display the entered student information
    cout << "\nStudent Information:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << ":" << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Roll Number: " << students[i].rollNumber << endl;
        cout << "Marks: " << students[i].marks << endl;
    }

    return 0;
}

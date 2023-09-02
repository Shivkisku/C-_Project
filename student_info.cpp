#include <iostream>
#include <string>

using namespace std;

// Define a structure to represent a student
struct Student {
    string name;
    int rollNumber;
    float marks;
};

int main() {
    Student student; // Declare a variable of type Student to store student information

    // Input: Ask the user to enter student information
    cout << "Enter Student Information:" << endl;
    cout << "Name: ";
    getline(cin, student.name);
    cout << "Roll Number: ";
    cin >> student.rollNumber;
    cout << "Marks: ";
    cin >> student.marks;

    // Output: Display the entered student information
    cout << "\nStudent Information:" << endl;
    cout << "Name: " << student.name << endl;
    cout << "Roll Number: " << student.rollNumber << endl;
    cout << "Marks: " << student.marks << endl;

    return 0;
}

#include <iostream>

using namespace std;

// Define a structure to represent distance in inch-feet system
struct Distance {
    int feet;
    float inches;
};

// Function to add two distances and return the result
Distance addDistances(const Distance& d1, const Distance& d2) {
    Distance result;
    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;

    // If the sum of inches is greater than or equal to 12, convert to feet and adjust inches
    if (result.inches >= 12.0) {
        result.feet += static_cast<int>(result.inches / 12);
        result.inches = fmod(result.inches, 12.0);
    }

    return result;
}

int main() {
    Distance distance1, distance2, sum;

    // Input: Ask the user to enter the first distance
    cout << "Enter the first distance:" << endl;
    cout << "Feet: ";
    cin >> distance1.feet;
    cout << "Inches: ";
    cin >> distance1.inches;

    // Input: Ask the user to enter the second distance
    cout << "\nEnter the second distance:" << endl;
    cout << "Feet: ";
    cin >> distance2.feet;
    cout << "Inches: ";
    cin >> distance2.inches;

    // Add the two distances
    sum = addDistances(distance1, distance2);

    // Output: Display the sum of distances
    cout << "\nSum of distances:" << endl;
    cout << "Feet: " << sum.feet << endl;
    cout << "Inches: " << sum.inches << endl;

    return 0;
}

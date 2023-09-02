#include <iostream>

using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function to calculate the difference between two time periods
Time calculateTimeDifference(const Time& startTime, const Time& endTime) {
    Time difference;
    int totalSecondsStart = startTime.hours * 3600 + startTime.minutes * 60 + startTime.seconds;
    int totalSecondsEnd = endTime.hours * 3600 + endTime.minutes * 60 + endTime.seconds;

    int secondsDifference = totalSecondsEnd - totalSecondsStart;

    difference.hours = secondsDifference / 3600;
    secondsDifference %= 3600;
    difference.minutes = secondsDifference / 60;
    difference.seconds = secondsDifference % 60;

    return difference;
}

int main() {
    Time startTime, endTime, timeDifference;

    // Input: Ask the user to enter the start time
    cout << "Enter the start time:" << endl;
    cout << "Hours: ";
    cin >> startTime.hours;
    cout << "Minutes: ";
    cin >> startTime.minutes;
    cout << "Seconds: ";
    cin >> startTime.seconds;

    // Input: Ask the user to enter the end time
    cout << "\nEnter the end time:" << endl;
    cout << "Hours: ";
    cin >> endTime.hours;
    cout << "Minutes: ";
    cin >> endTime.minutes;
    cout << "Seconds: ";
    cin >> endTime.seconds;

    // Calculate the time difference
    timeDifference = calculateTimeDifference(startTime, endTime);

    // Output: Display the time difference
    cout << "\nTime Difference:" << endl;
    cout << "Hours: " << timeDifference.hours << endl;
    cout << "Minutes: " << timeDifference.minutes << endl;
    cout << "Seconds: " << timeDifference.seconds << endl;

    return 0;
}

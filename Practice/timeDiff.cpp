#include <iostream>

using namespace std;

class Time {
public:
    int hours;
    int minutes;
    int seconds;

    // Default constructor
    Time() : hours(0), minutes(0), seconds(0) {}

    // Parameterized constructor
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    // Function to display the time
    void displayTime() const {
        cout << hours << " hours, " << minutes << " minutes, " << seconds << " seconds";
    }

    // Function to calculate the difference between two time objects
    Time difference(const Time& otherTime) const {
        Time diff;
        int totalSeconds1 = hours * 3600 + minutes * 60 + seconds;
        int totalSeconds2 = otherTime.hours * 3600 + otherTime.minutes * 60 + otherTime.seconds;
        int diffSeconds = totalSeconds1 - totalSeconds2;

        // Ensure the difference is positive
        if (diffSeconds < 0) {
            diffSeconds = -diffSeconds;
        }

        // Convert the difference back to hours, minutes, and seconds
        diff.hours = diffSeconds / 3600;
        diff.minutes = (diffSeconds % 3600) / 60;
        diff.seconds = (diffSeconds % 3600) % 60;

        return diff;
    }
};

int main() {
    Time time1(5, 30, 45);
    Time time2(3, 15, 20);

    cout << "Time 1: ";
    time1.displayTime();
    cout << endl;

    cout << "Time 2: ";
    time2.displayTime();
    cout << endl;

    Time timeDiff = time1.difference(time2);

    cout << "Time difference: ";
    timeDiff.displayTime();
    cout << endl;

    return 0;
}

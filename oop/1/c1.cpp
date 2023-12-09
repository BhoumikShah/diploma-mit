
#include <iostream>

class Time {
public:
    int hours;
    int minutes;
    int seconds;

    // Method to accept time input in HH:MM:SS format
    void acceptTime() {
        std::cout << "Enter time (HH:MM:SS): ";
        std::cin >> hours;
        std::cin.ignore(); // Ignore the ':' character
        std::cin >> minutes;
        std::cin.ignore(); // Ignore the ':' character
        std::cin >> seconds;
    }

    // Method to convert time to total seconds
    int convertToSeconds() {
        return hours * 3600 + minutes * 60 + seconds;
    }

    // Method to display the total seconds
    void displayTotalSeconds() {
        int total_seconds = convertToSeconds();
        std::cout << "Total seconds: " << total_seconds << " seconds" << std::endl;
    }
};

int main() {
    Time time;

    // Accept time input
    time.acceptTime();

    // Display the total seconds
    time.displayTotalSeconds();

    return 0;
}


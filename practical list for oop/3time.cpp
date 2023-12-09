#include <iostream>
#include <sstream>

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Method to accept time in HH:MM:SS format
    void accept_time() {
        char colon;
        std::cout << "Enter time in HH:MM:SS format: ";
        std::cin >> hours >> colon >> minutes >> colon >> seconds;
    }

    // Method to convert time into total seconds
    int to_seconds() const {
        return hours * 3600 + minutes * 60 + seconds;
    }
};

int main() {
    Time myTime;

    // Accepting time from the user
    myTime.accept_time();

    // Converting and displaying total seconds
    std::cout << "Total seconds: " << myTime.to_seconds() << std::endl;

    return 0;
}

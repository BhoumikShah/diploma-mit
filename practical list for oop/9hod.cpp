#include <iostream>
#include <cstring>

class Staff {
public:
    char name[100];
    char post[100];

    // Method to accept staff data
    void acceptStaffData() {
        std::cout << "Enter Staff Name: ";
        std::cin.getline(name, sizeof(name));
        std::cout << "Enter Staff Post: ";
        std::cin.getline(post, sizeof(post));
    }

    // Method to check if the staff is HOD
    bool isHOD() {
        return (strcasecmp(post, "HOD") == 0);
    }
};

int main() {
    Staff staff[5]; // Array to store data for 5 staff members

    // Accept data for 5 staff members
    for (int i = 0; i < 5; i++) {
        std::cout << "\nEnter data for Staff Member " << i + 1 << ":" << std::endl;
        staff[i].acceptStaffData();
    }

    // Display names of staff who are HOD
    std::cout << "\nStaff Members Who Are HOD:" << std::endl;
    for (int i = 0; i < 5; i++) {
        if (staff[i].isHOD()) {
            std::cout << staff[i].name << std::endl;
        }
    }

    return 0;
}

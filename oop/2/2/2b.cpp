#include <iostream>

class Student {
private:
    int roll_no;
    float percentage;

public:
    // Member function to accept data using 'this' pointer
    void acceptData() {
        std::cout << "Enter Roll No: ";
        std::cin >> this->roll_no;
        std::cout << "Enter Percentage: ";
        std::cin >> this->percentage;
    }

    // Member function to display data using 'this' pointer
    void displayData() {
        std::cout << "\nStudent Information:" << std::endl;
        std::cout << "Roll No: " << this->roll_no << std::endl;
        std::cout << "Percentage: " << this->percentage << "%" << std::endl;
    }
};

int main() {
    Student student1;

    // Accept data for one student object
    student1.acceptData();

    // Display the student information
    student1.displayData();

    return 0;
}

#include <iostream>

class Student {
private:
    int roll_no;
    float percentage;

public:
    // Method to accept data for one object
    void accept_data() {
        std::cout << "Enter Roll Number: ";
        std::cin >> this->roll_no;  // Using 'this' pointer to access the member variable
        std::cout << "Enter Percentage: ";
        std::cin >> this->percentage;  // Using 'this' pointer to access the member variable
    }

    // Method to display data for one object
    void display_data() const {
        std::cout << "\nStudent Information:" << std::endl;
        std::cout << "Roll Number: " << this->roll_no << std::endl;  // Using 'this' pointer to access the member variable
        std::cout << "Percentage: " << this->percentage << std::endl;  // Using 'this' pointer to access the member variable
    }
};

int main() {
    // Creating an object of the Student class
    Student studentObject;

    // Invoking member function using the 'this' pointer to accept data
    studentObject.accept_data();

    // Invoking member function using the 'this' pointer to display data
    studentObject.display_data();

    return 0;
}

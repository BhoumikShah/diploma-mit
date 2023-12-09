#include <iostream>

class Student {
public:
    int roll_no;
    char name[100];
    char class_name[50];

    void acceptStudentData() {
        std::cout << "Enter Roll No: ";
        std::cin >> roll_no;
        std::cout << "Enter Name: ";
        std::cin.ignore(); // Clear the newline character from the input buffer
        std::cin.getline(name, sizeof(name));
        std::cout << "Enter Class: ";
        std::cin.getline(class_name, sizeof(class_name));
    }

    void displayStudentData() {
        std::cout << "\nStudent Information:" << std::endl;
        std::cout << "Roll No: " << roll_no << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Class: " << class_name << std::endl;
    }
};

int main() {
    Student student1;

    // Accept data for one student object
    student1.acceptStudentData();

    // Display the student information
    student1.displayStudentData();

    return 0;
}

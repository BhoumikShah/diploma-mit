#include <iostream>
#include <string>

class Student {
private:
    int roll_no;
    std::string name;
    std::string student_class;

public:
    // Method to initialize data members
    void initialize_data(int rno, const std::string& n, const std::string& cls) {
        roll_no = rno;
        name = n;
        student_class = cls;
    }

    // Method to display data
    void display_data() {
        std::cout << "Roll Number: " << roll_no << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Class: " << student_class << std::endl;
    }
};

int main() {
    // Creating an object of the Student class
    Student student_object;

    // Accepting data for one object
    int roll_no;
    std::string name, student_class;

    std::cout << "Enter Roll Number: ";
    std::cin >> roll_no;
    std::cin.ignore(); // Clear the newline character from the buffer

    std::cout << "Enter Name: ";
    std::getline(std::cin, name);

    std::cout << "Enter Class: ";
    std::getline(std::cin, student_class);

    // Initializing data for the object
    student_object.initialize_data(roll_no, name, student_class);

    // Displaying data for the object
    std::cout << "\nStudent Data:" << std::endl;
    student_object.display_data();

    return 0;
}

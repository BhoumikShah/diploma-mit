#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    float percentage;

public:
Student() : name(""), percentage(0.0) {}

    // Constructor to initialize data members
    Student(const std::string& studentName, float studentPercentage) : name(studentName), percentage(studentPercentage) {}

    // Method to accept data for one student
    void acceptData() {
        std::cout << "Enter Student Name: ";
        std::getline(std::cin, name);
        std::cout << "Enter Percentage: ";
        std::cin >> percentage;
    }

    // Method to display data for one student
    void displayData() const {
        std::cout << "\nStudent Information:" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Percentage: " << percentage << std::endl;
    }
};

int main() {
    // Using the constructor to create a Student object
  

    // Displaying initial data using constructor values


    // Accepting and displaying data for one student
    Student student2;
    student2.acceptData();
    student2.displayData();

    return 0;
}

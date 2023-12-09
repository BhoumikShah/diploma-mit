#include <iostream>

class Result1 {
public:
    int marks1;

    // Method to accept marks for Result1
    void acceptMarks1() {
        std::cout << "Enter Marks for Result1: ";
        std::cin >> marks1;
    }
};

class Result2 {
public:
    int marks2;

    // Method to accept marks for Result2
    void acceptMarks2() {
        std::cout << "Enter Marks for Result2: ";
        std::cin >> marks2;
    }
};

int main() {
    Result1 result1; // Create an object of Result1
    Result2 result2; // Create an object of Result2

    // Accept marks for both class objects
    result1.acceptMarks1();
    result2.acceptMarks2();

    // Compute the average of two results
    double average = (result1.marks1 + result2.marks2) / 2.0;

    // Display the average
    std::cout << "Average Marks: " << average << std::endl;

    return 0;
}

#include <iostream>
using namespace std;

// Function to calculate the area of a rectangular laboratory
float calculateArea(float length, float width) {
    return length * width;
}

// Function overloading to calculate the area of a square classroom
float calculateArea(float side) {
    return side * side;
}

int main() {
    // Rectangular laboratory
    float labLength, labWidth;
    cout << "Enter length and width of the laboratory: ";
    cin >> labLength >> labWidth;

    // Square classroom
    float classSide;
    cout << "Enter side length of the classroom: ";
    cin >> classSide;

    // Calculate and display areas
    cout << "Area of Laboratory: " << calculateArea(labLength, labWidth) << " square units" << endl;
    cout << "Area of Classroom: " << calculateArea(classSide) << " square units" << endl;

    return 0;
}

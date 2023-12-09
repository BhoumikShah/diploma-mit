#include <iostream>
using namespace std;

// Base class 1
class Shape {
public:
    void displayShape() {
        cout << "This is a Shape." << endl;
    }
};

// Base class 2
class Color {
public:
    void displayColor() {
        cout << "This is a Color." << endl;
    }
};

// Derived class inheriting from both Shape and Color
class ColoredShape : public Shape, public Color {
public:
    void displayColoredShape() {
        cout << "This is a Colored Shape." << endl;
    }
};

int main() {
    ColoredShape coloredShape;

    coloredShape.displayShape();      // Accessing method from Shape
    coloredShape.displayColor();      // Accessing method from Color
    coloredShape.displayColoredShape();// Accessing its own method

    return 0;
}

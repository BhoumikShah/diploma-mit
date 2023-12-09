#include <iostream>
using namespace std;

// Virtual Base Class
class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape." << endl;
    }
};

// Derived class 1
class Circle : virtual public Shape {
public:
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
};

// Derived class 2
class Square : virtual public Shape {
public:
    void draw() override {
        cout << "Drawing a square." << endl;
    }
};

// Derived class 3
class CircleSquareCombo : public Circle, public Square {
public:
    // The draw method is ambiguous here, so we need to provide a new implementation
    void draw() override {
        cout << "Drawing a combination of Circle and Square." << endl;
    }
};

int main() {
    CircleSquareCombo combo;
    combo.draw(); // Accessing the draw method from CircleSquareCombo

    return 0;
}

#include <iostream>
#include <cmath>     // For sqrt
using namespace std;

class triangle {
private:
    float side1, side2, side3;    // Triangle sides
    float base, height;           // Base and height for alt area

public:
    void getSides(float a, float b, float c) {
        side1 = a;
        side2 = b;
        side3 = c;
    }

    void setBaseHeight(float b, float h) {
        base = b;
        height = h;
    }

    float perimeter() {
        return side1 + side2 + side3;
    }

    float areaFromSides() {
        float s = perimeter() / 2.0;  // semi-perimeter
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));  // Heron's formula
    }

    float areaWithBaseHeight() {
        return 0.5 * base * height;
    }
};

int main() {
    const int size = 2;  // Number of triangles
    triangle t[size];
    float a, b, c, base, height;

    for (int i = 0; i < size; i++) {
        cout << "Enter 3 sides for triangle " << i + 1 << ": ";
        cin >> a >> b >> c;
        t[i].getSides(a, b, c);

        cout << "Enter base and height for triangle " << i + 1 << ": ";
        cin >> base >> height;
        t[i].setBaseHeight(base, height);
    }
}
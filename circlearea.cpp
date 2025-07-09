#include <iostream>
using namespace std;

class circle {
private:
    float radius;

public:
    void getradius(float r) {
        radius = r;
    }

    float area() {
        return 3.14 * radius * radius;
    }

    float circumference() {
        return 2 * 3.14 * radius;
    }
};

int main() {
    const int size = 3;           // Number of circles
    circle c[size];               // Array of circle objects
    float r;

    // Input loop
    for (int i = 0; i < size; i++) {
        cout << "Enter radius for circle " << i + 1 << ": ";
        cin >> r;
        c[i].getradius(r);
    }

    // Output loop
    for (int i = 0; i < size; i++) {
        cout << "\n--- Circle " << i + 1 << " ---" << endl;
        cout << "Circumference: " << c[i].circumference() << endl;
        cout << "Area: " << c[i].area() << endl;
    }

    return 0;
}
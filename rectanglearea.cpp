#include <iostream>
using namespace std;

class rect {
private:
    float length;
    float breadth;

public:
    void getlength(float l) {
        length = l;
    }

    void getbreadth(float b) {
        breadth = b;
    }

    float area() {
        return length * breadth;
    }

    float circumference() {
        return 2 * (length + breadth);
    }
};

int main() {
    const int size = 3;   // Number of circles
    rect c[size];         // Array of circle objects
    float l;
    float b;

    // Input loop
    for (int i = 0; i < size; i++) {
        cout << "Enter length for rectangle " << i + 1 << ": ";
        cin >> l;
        c[i].getlength(l);
        cout << "Enter breadth for rectangle " << i + 1 << ": ";
        cin >> b;
        c[i].getbreadth(b);
    }

    // Output loop
    for (int i = 0; i < size; i++) {
        cout << "\nRectangle " << i + 1 << endl;
        cout << "Perimeter = " << c[i].circumference() << endl;
        cout << "Area = " << c[i].area() << endl;
    }

    return 0;
}
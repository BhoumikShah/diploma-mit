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
    float r;
    circle c;
    cout << "Enter radius: ";
    cin >> r;

    c.getradius(r);
    cout << "Circumference of circle is: " << c.circumference() << endl;
    cout << "Area of circle is: " << c.area() << endl;

    return 0;
}
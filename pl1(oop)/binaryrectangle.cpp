#include <iostream>
using namespace std;

class rectangle {
private:
    int length, breadth;

public:
    rectangle() { length = 0; breadth = 0; }  // Default constructor
    rectangle(int l, int b) { length = l; breadth = b; } // Param constructor

    rectangle operator+(rectangle rec) {
        rectangle R;
        R.length = length + rec.length;
        R.breadth = breadth + rec.breadth;
        return R;
    }

    void display(void) {
        cout << "length = " << length << endl;
        cout << "breadth = " << breadth << endl;
    }
}; // <-- semicolon required

int main() {
    rectangle R1(4, 8), R2(6, 9), R3;
    R3 = R1 + R2;

    cout << "\nRectangle 1:" << endl;
    R1.display();

    cout << "\nRectangle 2:" << endl;
    R2.display();

    cout << "\nRectangle 3:" << endl;
    R3.display();

    return 0;
}
#include <iostream>
using namespace std;

class Swap {
    int a;
    int b;

public:
    void get1(int a, int b) {
        this->a = a;
        this->b = b;
    }

    friend void swap(Swap &s1); // Corrected the friend function declaration
} s1;

void swap(Swap &s1) { // Corrected the friend function definition
    int temp;
    cout << endl;
    cout << "Before Swapping: " << s1.a << " " << s1.b;
    temp = s1.a;
    s1.a = s1.b;
    s1.b = temp;
    cout << endl;
    cout << "After Swapping: " << s1.a << " " << s1.b;
}

int main() {
    int a, b;
    cout << "Enter Number 1: ";
    cin >> a;
    cout << "Enter Number 2: ";
    cin >> b;

    s1.get1(a, b);
    swap(s1);
    return 0;
}

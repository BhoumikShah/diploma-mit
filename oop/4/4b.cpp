#include <iostream>

using namespace std;

class num2; // Forward declaration for num2 class

class num1 {
private:
    int a;

public:
    void get1(int a) {
        this->a = a;
    }

    void disp() {
        cout << a;
    }

    friend void comp(num1 n1, num2 n2); // Declare comp as a friend function
} n1;

class num2 {
private:
    int b;

public:
    void get1(int b) {
        this->b = b;
    }

    void disp() {
        cout << b;
    }

    friend void comp(num1 n1, num2 n2); // Declare comp as a friend function
} n2;

void comp(num1 n1, num2 n2) {
    if (n1.a > n2.b) {
        cout << "The Number 1 is greatest";
    } else {
        cout << "The Number 2 is greatest";
    }
}

int main() {
    int a, b;
    cout << "Enter Number 1: ";
    cin >> a;
    cout << "Enter Number 2: ";
    cin >> b;
    cout << endl;

    n1.get1(a);
    n2.get1(b);
    comp(n1, n2);

    return 0;
}

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class number {
private:
    int real, imag;

public:
    number() : real(0), imag(0) {}
    number(int r, int i) : real(r), imag(i) {}

    void read() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    void display(string operation) const {
        cout << operation << ": " << real 
             << (imag >= 0 ? "+" : "") << imag << "i" << endl;
    }

    // Friend functions for operator overloading
    friend number operator+(const number& n1, const number& n2);
    friend number operator-(const number& n1, const number& n2);
    friend number operator*(const number& n1, const number& n2);
    friend number operator/(const number& n1, const number& n2);
};

// Addition
number operator+(const number& n1, const number& n2) {
    return number(n1.real + n2.real, n1.imag + n2.imag);
}

// Subtraction
number operator-(const number& n1, const number& n2) {
    return number(n1.real - n2.real, n1.imag - n2.imag);
}

// Multiplication
number operator*(const number& n1, const number& n2) {
    return number((n1.real * n2.real) - (n1.imag * n2.imag),
                  (n1.real * n2.imag) + (n1.imag * n2.real));
}

// Division
number operator/(const number& n1, const number& n2) {
    int denominator = (n2.real * n2.real) + (n2.imag * n2.imag);
    if (denominator == 0) {
        cout << "Division by zero not possible!" << endl;
        return number(0, 0);
    }
    return number((n1.real * n2.real + n1.imag * n2.imag) / denominator,
                  (n1.imag * n2.real - n1.real * n2.imag) / denominator);
}

int main() {
    number c1, c2, result;
    cout << "Enter details of number1" << endl;
    c1.read();
    cout << "Enter details of number2" << endl;
    c2.read();

    (c1 + c2).display("Addition");
    (c1 - c2).display("Subtraction");
    (c1 * c2).display("Multiplication");
    (c1 / c2).display("Division");

    return 0;
}
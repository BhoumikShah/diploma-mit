#include <iostream>
using namespace std;

class number {
private:
    int real, imag;

public:
    void read() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    void add(number c1, number c2) {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }

    void subtract(number c1, number c2) {
        real = c1.real - c2.real;
        imag = c1.imag - c2.imag;
    }

    void multiply(number c1, number c2) {
        real = (c1.real * c2.real) - (c1.imag * c2.imag);
        imag = (c1.real * c2.imag) + (c1.imag * c2.real);
    }

    void divide(number c1, number c2) {
        int denominator = (c2.real * c2.real) + (c2.imag * c2.imag);
        if (denominator == 0) {
            cout << "Division by zero not possible!" << endl;
            real = imag = 0;
            return;
        }
        real = (c1.real * c2.real + c1.imag * c2.imag) / denominator;
        imag = (c1.imag * c2.real - c1.real * c2.imag) / denominator;
    }

    void display(string operation) {
        cout << operation << ": " << real 
             << (imag >= 0 ? "+" : "") << imag << "i" << endl;
    }
};

int main() {
    number c1, c2, result;
    cout << "Enter details of number1" << endl;
    c1.read();
    cout << "Enter details of number2" << endl;
    c2.read();

    result.add(c1, c2);
    result.display("Addition");

    result.subtract(c1, c2);
    result.display("Subtraction");

    result.multiply(c1, c2);
    result.display("Multiplication");

    result.divide(c1, c2);
    result.display("Division");

    return 0;
}
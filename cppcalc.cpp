#include <iostream>
using namespace std;

class calculator {
private:
    int a, b;

public:
    calculator() {
        a = 20;
        b = 30;
    }

    calculator(int r, int s) {
        a = r;
        b = s;
    }

    void add() {
        cout << "Addition = " << a + b << endl;
    }

    void sub() {
        cout << "Subtraction = " << a - b << endl;
    }

    void multiply() {
        cout << "Multiplication = " << a * b << endl;
    }

    void divide() {
        if (b != 0)
            cout << "Division = " << float(a) / float(b) << endl;
        else
            cout << "Division by zero error!" << endl;
    }

    ~calculator() {
        cout << "Object destroyed" << endl;
    }
};

int main() {
    calculator c1;
    calculator c2;
    calculator c3(30, 40);

    cout << "\nc1 operations:" << endl;
    c1.add();
    c1.sub();
    c1.multiply();
    c1.divide();

    cout << "\nc2 operations:" << endl;
    c2.add();
    c2.sub();
    c2.multiply();
    c2.divide();

    cout << "\nc3 operations:" << endl;
    c3.add();
    c3.sub();
    c3.multiply();
    c3.divide();

    return 0;
}
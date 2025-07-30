// Online C compiler to run C program online
#include <iostream>
using namespace std;

class number {
    private:
        int real, imag;
    public:
        void read(){
            cout << "enter real part" << endl;
            cin >> real;
            cout << "enter imaginary part" << endl;
            cin >> imag;
        }

        void addr(number c1, number c2){
            real = c1.real + c2.real;
            imag = c1.imag + c2.imag;
        }

        void display(){
            cout << "Addition: " << real << "+" << imag << "i" << endl;
        }
};

int main() {
    // Write C code here
    number c1, c2, c3;
    cout << "enter details of number1" << endl;
    c1.read();
    cout << "enter details of number2" << endl;
    c2.read();
    c3.addr(c1, c2);
    c3.display();

    return 0;
}
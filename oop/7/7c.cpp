#include <iostream>
using namespace std;

class MyClass {
private:
    int numericData;

public:
    MyClass(int data) : numericData(data) {}

    // Unary - operator overloading
    MyClass operator-() {
        numericData = -numericData;
        return *this;
    }

    void display() {
        cout << "Numeric Data: " << numericData << endl;
    }
};

int main() {
    MyClass obj(5);

    cout << "Original Data:" << endl;
    obj.display();

    // Applying unary - operator
    obj = -obj;

    cout << "After Unary - Operator:" << endl;
    obj.display();

    return 0;
}

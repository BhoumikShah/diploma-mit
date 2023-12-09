#include <iostream>
using namespace std;

class MyClass {
private:
    int numericData;

public:
    MyClass(int data) : numericData(data) {}

    // Unary ++ (pre-increment) operator overloading
    MyClass operator++() {
        ++numericData;
        return *this;
    }

    // Unary ++ (post-increment) operator overloading
    MyClass operator++(int) {
        MyClass temp = *this;
        numericData++;
        return temp;
    }

    void display() {
        cout << "Numeric Data: " << numericData << endl;
    }
};

int main() {
    MyClass obj(5);

    cout << "Original Data:" << endl;
    obj.display();

    // Applying unary ++ operator (pre-increment)
    ++obj;
    cout << "After Unary ++ (pre-increment) Operator:" << endl;
    obj.display();

    // Applying unary ++ operator (post-increment)
    obj++;
    cout << "After Unary ++ (post-increment) Operator:" << endl;
    obj.display();

    return 0;
}

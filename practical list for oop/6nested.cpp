#include <iostream>

class Outer {
private:
    int outerData;

public:
    // Constructor for the outer class
    Outer(int data) : outerData(data) {}

    // Nested class declaration
    class Inner {
    private:
        int innerData;

    public:
        // Constructor for the nested class
        Inner(int data) : innerData(data) {}

        // Method to display data from the nested class
        void displayInnerData() const {
            std::cout << "Inner Data: " << innerData << std::endl;
        }
    };

    // Method to access and display data from the nested class
    void accessInnerData() const {
        Inner innerObject(42); // Creating an object of the nested class
        std::cout << "Outer Data: " << outerData << std::endl;
        innerObject.displayInnerData();
    }
};

int main() {
    // Creating an object of the outer class
    Outer outerObject(10);

    // Accessing and displaying data from the nested class
    outerObject.accessInnerData();

    return 0;
}

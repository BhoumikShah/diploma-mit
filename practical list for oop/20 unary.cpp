#include <iostream>

class MyClass {
private:
    int numericData;

public:
    // Constructor to initialize numericData
    MyClass(int value) : numericData(value) {}

    // Unary - operator overloading
    MyClass operator-() const {
        return MyClass(-numericData);
    }

    // Function to display the numericData
    void displayData() const {
        std::cout << "Numeric Data: " << numericData << std::endl;
    }
};

int main() {
    // Create an object of MyClass
    MyClass obj(42);

    // Display original data
    std::cout << "Original Data:" << std::endl;
    obj.displayData();

    // Use unary - operator to negate the numeric data
    MyClass negatedObj = -obj;

    // Display negated data
    std::cout << "\nNegated Data:" << std::endl;
    negatedObj.displayData();

    return 0;
}

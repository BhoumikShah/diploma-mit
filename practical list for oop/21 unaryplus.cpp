#include <iostream>

class MyClass {
private:
    int numericData;

public:
    // Constructor to initialize numericData
    MyClass(int value) : numericData(value) {}

    // Pre-increment operator overloading (++obj)
    MyClass operator++() {
        numericData++;
        return *this; // Return the updated object by reference
    }

    // Post-increment operator overloading (obj++)
    MyClass operator++(int) {
        MyClass temp(*this); // Create a temporary copy of the current object
        numericData++;
        return temp; // Return the original object (before increment) by value
    }

    // Function to display the numericData
    void displayData() const {
        std::cout << "Numeric Data: " << numericData << std::endl;
    }
};

int main() {
    // Create an object of MyClass
    MyClass obj(82);

    // Display original data
    std::cout << "Original Data:" << std::endl;
    obj.displayData();

    // Use pre-increment operator (++obj)
    ++obj;

    // Display data after pre-increment
    std::cout << "\nData after Pre-Increment:" << std::endl;
    obj.displayData();

    // Use post-increment operator (obj++)
    MyClass newObj = obj++;

    // Display data after post-increment
    std::cout << "\nData after Post-Increment:" << std::endl;
    newObj.displayData(); // Display the copied object
    obj.displayData();    // Display the original object

    return 0;
}

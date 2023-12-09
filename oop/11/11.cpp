#include <iostream>
#include <vector>

template <typename T>
class GenericVector {
private:
    std::vector<T> data;

public:
    // To create the vector
    void createVector(const std::vector<T>& elements) {
        data = elements;
    }

    // Modify the value of a given element
    void modifyElement(size_t index, T newValue) {
        if (index < data.size()) {
            data[index] = newValue;
        } else {
            std::cerr << "Index out of range." << std::endl;
        }
    }

    // Multiply by a scalar value
    void multiplyByScalar(T scalar) {
        for (size_t i = 0; i < data.size(); ++i) {
            data[i] *= scalar;
        }
    }

    // Display the vector in the form (10,20,30,...)
    void displayVector() const {
        std::cout << "(";
        for (size_t i = 0; i < data.size() - 1; ++i) {
            std::cout << data[i] << ",";
        }
        if (!data.empty()) {
            std::cout << data.back();
        }
        std::cout << ")" << std::endl;
    }
};

int main() {
    // Example usage with integers
    GenericVector<int> intVector;
    std::vector<int> intElements = {1, 2, 3, 4, 5};
    intVector.createVector(intElements);

    std::cout << "Original Integer Vector: ";
    intVector.displayVector();

    intVector.modifyElement(2, 10); // Modify element at index 2
    std::cout << "Modified Integer Vector: ";
    intVector.displayVector();

    intVector.multiplyByScalar(2); // Multiply by scalar value
    std::cout << "Multiplied Integer Vector: ";
    intVector.displayVector();

    // Example usage with doubles
    GenericVector<double> doubleVector;
    std::vector<double> doubleElements = {1.1, 2.2, 3.3, 4.4, 5.5};
    doubleVector.createVector(doubleElements);

    std::cout << "\nOriginal Double Vector: ";
    doubleVector.displayVector();

    doubleVector.modifyElement(3, 3.14); // Modify element at index 3
    std::cout << "Modified Double Vector: ";
    doubleVector.displayVector();

    doubleVector.multiplyByScalar(1.5); // Multiply by scalar value
    std::cout << "Multiplied Double Vector: ";
    doubleVector.displayVector();

    return 0;
}

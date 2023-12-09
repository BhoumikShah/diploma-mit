#include <iostream>

template<typename T>
T arraySum(T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    const int size = 10;

    int intArray[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float floatArray[size] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0};
    double doubleArray[size] = {1.111, 2.222, 3.333, 4.444, 5.555, 6.66, 7.777, 8.888, 9.999, 10.0};

    std::cout << "Sum of Integer Array: " << arraySum(intArray, size) << std::endl;
    std::cout << "Sum of Float Array: " << arraySum(floatArray, size) << std::endl;
    std::cout << "Sum of Double Array: " << arraySum(doubleArray, size) << std::endl;

    return 0;
}

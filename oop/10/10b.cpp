
#include <iostream>
#include <string>

template<typename T>
T square(T value) {
    return value * value;
}

// Template specialization for string
template <>
std::string square<std::string>(std::string value) {
    return value + value;  // Concatenate the string with itself
}

int main() {
    // Square of integer
    int intValue = 5;
    std::cout << "Square of Integer: " << square(intValue) << std::endl;

    // Square of string
    std::string stringValue = "bhoumik";
    std::cout << "Square of String: " << square(stringValue) << std::endl;

    return 0;
}

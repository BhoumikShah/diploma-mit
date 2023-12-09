#include <iostream>
#include <cstring>
using namespace std;

class StringConcatenator {
private:
    char str[100];

public:
    // Default constructor
    StringConcatenator() {
        strcpy(str, "");
    }

    // Parameterized constructor
    StringConcatenator(const char* initialStr) {
        strcpy(str, initialStr);
    }

    // Overloading '+' operator for string concatenation
    StringConcatenator operator+(const StringConcatenator& other) {
        StringConcatenator result;
        strcat(result.str, this->str);
        strcat(result.str, other.str);
        return result;
    }

    // Display the concatenated string
    void display() {
        cout << "Concatenated String: " << str << endl;
    }
};

int main() {
    // Create two StringConcatenator objects
    StringConcatenator str1("xyz");
    StringConcatenator str2("pqr");

    // Concatenate the strings using '+'
    StringConcatenator result = str1 + str2;

    // Display the result
    result.display();

    return 0;
}

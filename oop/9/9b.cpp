#include <iostream>
#include <fstream>
#include <cctype> // For isdigit() and isspace()

int main() {
    // Open the file in read mode
    std::ifstream inputFile("C:\\Users\\Bhoumik\\coding\\oop\\practical list\\input.txt", std::ios::in);

    // Check if the file is successfully opened
    if (!inputFile.is_open()) {
        std::cerr << "Error opening file 'input.txt' for reading." << std::endl;
        return 1; // Return an error code
    }

    // Variables to count digits and spaces
    int digitCount = 0;
    int spaceCount = 0;

    // Process each character in the file
    char ch;
    while (inputFile.get(ch)) {
        if (isdigit(ch)) {
            // Increment digit count if the character is a digit
            digitCount++;
        } else if (isspace(ch)) {
            // Increment space count if the character is a space
            spaceCount++;
        }
        // You can add more conditions to count other characters if needed
    }

    // Close the file
    inputFile.close();

    // Display the results
    std::cout << "Number of digits: " << digitCount << std::endl;
    std::cout << "Number of spaces: " << spaceCount << std::endl;

    return 0; // Return 0 for success
}
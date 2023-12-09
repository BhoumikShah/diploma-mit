#include <iostream>
#include <fstream>

int main() {
    // Open "First.txt" in read mode
    std::ifstream inputFile("C:\\Users\\Bhoumik\\coding\\oop\\practical list\\First.txt", std::ios::in);

    // Check if the file is successfully opened
    if (!inputFile.is_open()) {
        std::cerr << "Error opening file 'First.txt' for reading." << std::endl;
        return 1; // Return an error code
    }

    // Open "Second.txt" in write mode
    std::ofstream outputFile("C:\\Users\\Bhoumik\\coding\\oop\\practical list\\Second.txt", std::ios::out);

    // Check if the file is successfully opened
    if (!outputFile.is_open()) {
        std::cerr << "Error opening file 'Second.txt' for writing." << std::endl;
        inputFile.close(); // Close the input file
        return 1; // Return an error code
    }

    // Copy contents from "First.txt" to "Second.txt"
    char ch;
    while (inputFile.get(ch)) {
        outputFile.put(ch);
    }

    // Close the files
    inputFile.close();
    outputFile.close();

    std::cout << "File copied successfully." << std::endl;

    return 0; // Return 0 for success
}

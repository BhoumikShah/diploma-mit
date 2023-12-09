#include <iostream>

class Book {
public:
    char bookTitle[100];
    char authorName[100];
    double price;

    // Method to accept book information
    void acceptBookInfo() {
        std::cout << "Enter Book Title: ";
        std::cin.ignore(); // Clear the newline character from the input buffer
        std::cin.getline(bookTitle, sizeof(bookTitle));
        std::cout << "Enter Author Name: ";
        std::cin.getline(authorName, sizeof(authorName));
        std::cout << "Enter Price: ";
        std::cin >> price;
    }

    // Method to display book information
    void displayBookInfo() {
        std::cout << "\nBook Information:" << std::endl;
        std::cout << "Book Title: " << bookTitle << std::endl;
        std::cout << "Author Name: " << authorName << std::endl;
        std::cout << "Price: " << price << std::endl;
    }
};

int main() {
    Book book;

    // Accept book information
    book.acceptBookInfo();

    // Display the book information
    book.displayBookInfo();

    return 0;
}

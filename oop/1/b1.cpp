#include <iostream>

class Book {
public:
    char book_name[100];
    double price;
    int num_pages;

    // Method to accept book data
    void acceptBookData() {
        std::cout << "Enter Book Name: ";
        std::cin.ignore(); // Clear the newline character from the input buffer
        std::cin.getline(book_name, sizeof(book_name));
        std::cout << "Enter Price: ";
        std::cin >> price;
        std::cout << "Enter Number of Pages: ";
        std::cin >> num_pages;
    }
};

int main() {
    Book book1, book2;

    std::cout << "Enter data for Book 1:" << std::endl;
    book1.acceptBookData();

    std::cout << "\nEnter data for Book 2:" << std::endl;
    book2.acceptBookData();

    // Compare the prices and display the book with greater price
    if (book1.price > book2.price) {
        std::cout << "\nBook with greater price: " << book1.book_name << std::endl;
    } else if (book2.price > book1.price) {
        std::cout << "\nBook with greater price: " << book2.book_name << std::endl;
    } else {
        std::cout << "\nBoth books have the same price." << std::endl;
    }

    return 0;
}

#include <iostream>
#include <string>

class Book {
private:
    std::string book_title;
    std::string author_name;
    double price;

public:
    // Method to accept information for one object
    void accept_info() {
        std::cout << "Enter Book Title: ";
        std::getline(std::cin, book_title);
        std::cout << "Enter Author Name: ";
        std::getline(std::cin, author_name);
        std::cout << "Enter Price: ";
        std::cin >> price;
        std::cin.ignore(); // Clear the newline character from the buffer
    }

    // Method to display information for one object
    void display_info() const {
        std::cout << "\nBook Information:" << std::endl;
        std::cout << "Title: " << book_title << std::endl;
        std::cout << "Author: " << author_name << std::endl;
        std::cout << "Price: " << price << std::endl;
    }
};

int main() {
    // Creating an object of the Book class using a pointer
    Book* bookPtr = new Book;

    // Accepting information for the object through the pointer
    bookPtr->accept_info();

    // Displaying information for the object through the pointer
    bookPtr->display_info();

    // Deleting the dynamically allocated object
    delete bookPtr;

    return 0;
}

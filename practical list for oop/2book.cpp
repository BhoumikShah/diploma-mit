#include <iostream>
#include <string>

class Book {
public:
    std::string name;
    double price;
    int num_pages;
};

int main() {
    Book book1, book2;

    std::cout << "Enter name,price and no of pages for Book 1 respectively:" << std::endl;
    std::getline(std::cin, book1.name);
    std::cin >> book1.price >> book1.num_pages;
    std::cin.ignore();

    std::cout << "Enter name,price and no of pages for Book 2 respectively:" << std::endl;
    std::getline(std::cin, book2.name);
    std::cin >> book2.price >> book2.num_pages;
    std::cin.ignore();

    const Book& expensiveBook = (book1.price > book2.price) ? book1 : book2;

    std::cout << "\nThe book with greater price is: " << expensiveBook.name << std::endl;

    return 0;
}

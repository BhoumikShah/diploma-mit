#include <iostream>
#include <string>
using namespace std;

struct book {
    int id;
    string name;
    string author;
    int year;
    float price;
};

int main() {
    int size = 3;
    book mybook[size];

    for (int i = 0; i < size; i++) {
        mybook[i].id = i + 1;

        cout << "\nEnter details for Book " << i + 1 << endl;

        cout << "Enter the name of the book: " << endl;
        getline(cin, mybook[i].name);

        cout << "Enter the name of the author: " << endl;
        getline(cin, mybook[i].author);

        cout << "Enter the year of the book: " << endl;
        cin >> mybook[i].year;

        cout << "Enter the price of the book: " << endl;
        cin >> mybook[i].price;
        cin.ignore(); // To consume the newline character left by cin
    }

    cout << "\nBook Details:\n";
    for (int i = 0; i < size; i++) {
        cout << "\nBook ID: " << mybook[i].id << endl;
        cout << "Name: " << mybook[i].name << endl;
        cout << "Author: " << mybook[i].author << endl;
        cout << "Year: " << mybook[i].year << endl;
        cout << "Price: " << mybook[i].price << endl;
    }

    return 0;
}
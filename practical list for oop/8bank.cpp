#include <iostream>

class Account {
private:
    int accountNumber;
    double balance;

public:
    // Method to accept data for one account
    void accept_data() {
        std::cout << "Enter Account Number: ";
        std::cin >> accountNumber;
        std::cout << "Enter Balance: ";
        std::cin >> balance;
    }

    // Method to give interest if balance is equal or greater than 5000
    void give_interest() {
        if (balance >= 5000) {
            balance += balance * 0.10;  // Add 10% interest
        }
    }

    // Method to display account information
    void display_data() const {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Balance: " << balance << std::endl;
    }
};

int main() {
    const int numAccounts = 10;
    Account accounts[numAccounts];

    // Accepting data for 10 accounts
    for (int i = 0; i < numAccounts; ++i) {
        std::cout << "\nEnter details for Account " << i + 1 << ":" << std::endl;
        accounts[i].accept_data();
        accounts[i].give_interest();
    }

    // Displaying updated account information
    std::cout << "\nUpdated Account Information:" << std::endl;
    for (const Account& account : accounts) {
        account.display_data();
        std::cout << std::endl;
    }

    return 0;
}

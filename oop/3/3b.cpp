#include <iostream>

class Account {
public:
    int accountNo;
    double balance;

    void acceptData() {
        std::cout << "Enter Account Number: ";
        std::cin >> accountNo;
        std::cout << "Enter Balance: ";
        std::cin >> balance;
    }

    void applyInterest() {
        if (balance >= 5000) {
            balance *= 1.10; // 10% interest
        }
    }

    void displayData() {
        std::cout << "\nAccount Number: " << accountNo << std::endl;
        std::cout << "Balance: " << balance << std::endl;
    }
};

int main() {
    Account accounts[10];

    for (int i = 0; i < 10; i++) {
        std::cout << "\nEnter data for Account " << i + 1 << ":" << std::endl;
        accounts[i].acceptData();
        accounts[i].applyInterest();
    }

    std::cout << "\nAccount Details After Applying Interest:" << std::endl;
    for (int i = 0; i < 10; i++) {
        accounts[i].displayData();
    }

    return 0;
}

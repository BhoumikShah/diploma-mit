#include <iostream>
#include <string>
using namespace std;

class bank {
private:
    int acc_id;
    string acc_type;         // Add account type
    string acc_name;
    string cust_address;
    double acc_balance;
    string cust_contact;
    static int total_accounts;
    static int savings_accounts;
    static int current_accounts;

public:
    // Default constructor
    bank() {
        acc_id = 0;
        acc_type = "Unknown";
        acc_name = "Unknown";
        cust_address = "Unknown";
        acc_balance = 0.0;
        cust_contact = "Unknown";
        total_accounts++;
    }

    // Overloaded constructor
    bank(int id, string type, string name, string address, double balance, string contact) {
        acc_id = id;
        acc_type = type;
        acc_name = name;
        cust_address = address;
        acc_balance = balance;
        cust_contact = contact;
        total_accounts++;
        if (acc_type == "Saving") savings_accounts++;
        else if (acc_type == "Current") current_accounts++;
    }

    void deposit(double amount) {
        acc_balance += amount;
        cout << "Deposited: " << amount << ". New balance: " << acc_balance << endl;
    }

    void withdraw(double amount) {
        if (amount > acc_balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            acc_balance -= amount;
            cout << "Withdrawn: " << amount << ". New balance: " << acc_balance << endl;
        }
    }

    double getbalance() {
        return acc_balance;
    }

    void display_account_details() {
        cout << "Account ID: " << acc_id << endl;
        cout << "Type: " << acc_type << endl;
        cout << "Name: " << acc_name << endl;
        cout << "Address: " << cust_address << endl;
        cout << "Contact: " << cust_contact << endl;
        cout << "Balance: " << acc_balance << endl;
    }

    static void displayaccountcounts() {
        cout << "Total accounts: " << total_accounts << endl;
        cout << "Savings accounts: " << savings_accounts << endl;
        cout << "Current accounts: " << current_accounts << endl;
    }

    ~bank() {
        cout << "Account with ID " << acc_id << " is being destroyed." << endl;
        total_accounts--;
        if (acc_type == "Saving") savings_accounts--;
        else if (acc_type == "Current") current_accounts--;
    }
};

int bank::total_accounts = 0;
int bank::savings_accounts = 0;
int bank::current_accounts = 0;

int main() {
    {
        bank acc1; // default constructor
        bank acc2(1001, "Saving", "Alice", "123 Main St", 5000.0, "555-1234");
        bank acc3(1002, "Current", "Bob", "456 Side St", 3000.0, "555-5678");

        cout << "Account 1 details:" << endl;
        acc1.display_account_details();
        cout << endl;

        cout << "Account 2 details:" << endl;
        acc2.display_account_details();
        cout << endl;

        cout << "Account 3 details:" << endl;
        acc3.display_account_details();
        cout << endl;

        acc2.deposit(1500.0);
        acc2.withdraw(2000.0);
        acc2.withdraw(6000.0);

        cout << "Account 2 balance: " << acc2.getbalance() << endl << endl;

        bank::displayaccountcounts();
    } // accounts destroyed here

    cout << "All accounts destroyed. Program ending." << endl;
    return 0;
}
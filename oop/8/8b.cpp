#include <iostream>
#include <string>

class ILogin {
protected:
    std::string name;
    std::string password;

public:
    virtual void accept() {
        std::cout << "Enter name: ";
        std::cin >> name;
        std::cout << "Enter password: ";
        std::cin >> password;
    }
};

class EmailLogin : public ILogin {
public:
    void accept() override {
        std::cout << "Enter email address: ";
        std::cin >> name;
        std::cout << "Enter email password: ";
        std::cin >> password;
    }

    void display() {
        std::cout << "Email Login Details:\n";
        std::cout << "Email Address: " << name << "\n";
        std::cout << "Password: " << password << "\n";
    }
};

class MembershipLogin : public ILogin {
public:
    void accept() override {
        std::cout << "Enter membership username: ";
        std::cin >> name;
        std::cout << "Enter membership password: ";
        std::cin >> password;
    }

    void display() {
        std::cout << "Membership Login Details:\n";
        std::cout << "Username: " << name << "\n";
        std::cout << "Password: " << password << "\n";
    }
};

int main() {
    EmailLogin emailLogin;
    MembershipLogin membershipLogin;

    // Accept and display Email login details
    std::cout << "Enter Email Login Details:\n";
    emailLogin.accept();
    std::cout << "\n";
    emailLogin.display();
    std::cout << "\n";

    // Accept and display Membership login details
    std::cout << "Enter Membership Login Details:\n";
    membershipLogin.accept();
    std::cout << "\n";
    membershipLogin.display();

    return 0;
}

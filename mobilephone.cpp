#include <iostream>
#include <string.h>
using namespace std;

class mobilephone {
private:
    static int count;
    string brand, model;
    int price, batterylife, simnumber, budget;

public:
    mobilephone() {
        count++;
    }

    static void showcount() {
        cout << "number of objects: " << count << endl;
    }

    void read() {
        cout << "Enter brand : ";
        cin >> brand;
        cout << "Enter model : ";
        cin >> model;
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter battery life (in hours): ";
        cin >> batterylife;
        cout << "Enter number of SIMs: ";
        cin >> simnumber;
        cout << "Enter your budget: ";
        cin >> budget;
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: " << price << endl;
        cout << "Battery Life: " << batterylife << " hours" << endl;
        cout << "Number of SIMs: " << simnumber << endl;
        if (budget >= price)
            cout << "It is affordable" << endl;
        else
            cout << "It is not affordable" << endl;
    }
};

int mobilephone::count = 0;

int main() {
    mobilephone m1, m2, m3;
    m1.read();
    m1.display();

    m2.read();
    m2.display();

    m3.read();
    m3.display();

    mobilephone::showcount();

    return 0;
}
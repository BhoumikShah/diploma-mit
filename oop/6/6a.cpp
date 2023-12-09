#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    void display() {
        cout << "This is a Vehicle." << endl;
    }
};

// Derived class 1
class Car : public Vehicle {
public:
    void displayCar() {
        cout << "This is a Car." << endl;
    }
};

// Derived class 2
class SportsCar : public Car {
public:
    void displaySportsCar() {
        cout << "This is a Sports Car." << endl;
    }
};

int main() {
    SportsCar sportsCar;
    sportsCar.display();          // Accessing base class method
    sportsCar.displayCar();       // Accessing intermediate derived class method
    sportsCar.displaySportsCar(); // Accessing its own method
    return 0;
}

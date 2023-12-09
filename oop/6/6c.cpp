#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    void display() {
        cout << "This is a Vehicle." << endl;
    }
};

// Derived class 1 (Single Inheritance)
class Car : public Vehicle {
public:
    void displayCar() {
        cout << "This is a Car." << endl;
    }
};

// Derived class 2 (Multilevel Inheritance)
class SportsCar : public Car {
public:
    void displaySportsCar() {
        cout << "This is a Sports Car." << endl;
    }
};

// Another base class (Hierarchical Inheritance)
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Multiple Inheritance
class Pet : public Animal {
public:
    void play() {
        cout << "Pet is playing." << endl;
    }
};

// Hybrid Inheritance combining SportsCar, Pet
class Hybrid : public SportsCar, public Pet {
public:
    void hybridFunction() {
        cout << "This is a hybrid function." << endl;
    }
};

int main() {
    Hybrid hybrid;

    hybrid.display();          // Accessing base class method from Vehicle
    hybrid.displayCar();       // Accessing intermediate derived class method from Car
    hybrid.displaySportsCar(); // Accessing its own method from SportsCar

    hybrid.eat(); // Accessing base class method from Animal
    hybrid.play(); // Accessing its own method from Pet

    hybrid.hybridFunction(); // Accessing its own method from Hybrid

    return 0;
}

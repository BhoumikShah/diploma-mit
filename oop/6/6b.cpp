#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat is meowing." << endl;
    }
};

int main() {
    Dog dog;
    Cat cat;

    dog.eat();  // Accessing base class method
    dog.bark(); // Accessing its own method

    cat.eat();  // Accessing base class method
    cat.meow(); // Accessing its own method

    return 0;
}

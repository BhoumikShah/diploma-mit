#include <iostream>
#include <stack>

int main() {
    // Creating a stack of integers
    std::stack<int> intStack;

    // Pushing elements onto the stack
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    // Displaying the top element of the stack
    std::cout << "Top element of the stack: " << intStack.top() << std::endl;

    // Popping elements from the stack
    std::cout << "Popping elements from the stack:";
    while (!intStack.empty()) {
        std::cout << ' ' << intStack.top();
        intStack.pop();
    }
    std::cout << std::endl;

    // Checking if the stack is empty
    if (intStack.empty()) {
        std::cout << "The stack is empty." << std::endl;
    } else {
        std::cout << "The stack is not empty." << std::endl;
    }

    return 0;
}

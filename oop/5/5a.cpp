#include <iostream>

class SumCalculator {
public:
    int n;
    int sum;

    // Constructor that takes the value of n as a parameter
    SumCalculator(int num) : n(num), sum(0) {
        calculateSum();
    }

    // Function to calculate the sum of numbers from 1 to n
    void calculateSum() {
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
    }
};

int main() {
    int n;
    std::cout << "Enter a value for n: ";
    std::cin >> n;

    // Create an object of SumCalculator with n as a constructor argument
    SumCalculator calculator(n);

    // Display the sum
    std::cout << "The sum of numbers from 1 to " << n << " is: " << calculator.sum << std::endl;

    return 0;
}

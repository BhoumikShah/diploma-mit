#include <iostream>
using namespace std;

// Function to calculate the sum of 5 float values
float calculateSum(float a, float b, float c, float d, float e) {
    return a + b + c + d + e;
}

// Function overloading to calculate the sum of 10 integer values
int calculateSum(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j) {
    return a + b + c + d + e + f + g + h + i + j;
}

int main() {
    // Calculate and display sums
    cout << "Sum of 5 floats: " << calculateSum(1.5, 2.5, 3.5, 4.5, 5.5) << endl;
    cout << "Sum of 10 integers: " << calculateSum(1, 2, 3, 4, 5, 6, 7, 8, 9, 10) << endl;

    return 0;
}

#include <stdio.h>

int main() {
    double celsius = 25.0; // Change this to the desired temperature in Celsius
    double fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2lf degrees Celsius is equal to %.2lf degrees Fahrenheit\n", celsius, fahrenheit);
    return 0;
}

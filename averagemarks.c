// Online C compiler to run C program online
#include <stdio.h>

int sum = 0;
float average = 0.0;

void myFunction(int myNumbers[10]) {
    for (int i = 0; i < 10; i++) {
        sum += myNumbers[i];
    }
    average = sum / 10;
    printf("%lf\n", average);
}

int main() {
    // write C code here
    int myNumbers[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    myFunction(myNumbers);

    return 0;
}
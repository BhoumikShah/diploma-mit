#include <stdio.h>

int main() {
    int n = 88; // Change this to the desired positive integer
    int numDigits = 1;
    
    for (int i = 2; i <= n; i++) {
        numDigits += (int)(log10(i)) + 1;
    }
    
    printf("The factorial of %d has %d digits.\n", n, numDigits);
    return 0;
}

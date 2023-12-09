#include <stdio.h>

int main() {
    int n = 5; // Change this to the desired positive integer
    int fact = 1;
    
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    
    printf("The factorial of %d is %d\n", n, fact);
    return 0;
}

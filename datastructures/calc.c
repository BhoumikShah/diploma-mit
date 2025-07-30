// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // write C code here
    char op;
    int a, b, result;
    printf("Enter the operation: ");
    scanf("%c", &op);
    printf("Enter 2 numbers: ");
    scanf("%d%d", &a, &b);
    switch (op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        default:
            printf("Invalid Operation");
    }
    printf("result is: %d", result);
    return 0;
}
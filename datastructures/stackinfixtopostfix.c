
#include <stdio.h>
#include <ctype.h>

char stack[20];
int top = -1; // top doesn’t exist

// push
void push(char pushchar) {
    stack[++top] = pushchar;
}

// pop
char pop() {
    if (top == -1) {
        printf("empty stack");
        return -1;
    }
    return stack[top--];
}

// operator precedence: higher the return no, higher the precedence
int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    if (op == '^')
        return 3;
    return 0;
}

int right(char op) {
    return (op == '^');
}

int main() {
    char expression[100];
    char *ptr, tempchar;

    printf("Enter the expression : ");
    scanf("%s", expression);

    ptr = expression;

    while (*ptr != '\0') {
        if (isalnum(*ptr)) {
            printf("%c ", *ptr);
        }
        else if (*ptr == '(') {
            push(*ptr);
        }
        else if (*ptr == ')') {
            while ((tempchar = pop()) != '(') {
                printf("%c ", tempchar);
            }
        }
        else { // for operators
            while (top != -1 && stack[top] != '(' &&
                   ((!right(*ptr) && precedence(stack[top]) >= precedence(*ptr)) ||
                    ( right(*ptr) && precedence(stack[top]) >  precedence(*ptr)))) {
                printf("%c ", pop());
            }
            push(*ptr);
        }
        ptr++;
    }

    while (top != -1) {
        printf("%c ", pop());
    }

    printf("\n");
    return 0;
}
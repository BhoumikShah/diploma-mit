#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_SIZE 100

// Structure for stack
struct Stack {
    int top;
    int items[MAX_SIZE];
};

// Function to initialize the stack
void initialize(struct Stack *stack) {
    stack->top = -1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

// Function to push an element onto the stack
void push(struct Stack *stack, int value) {
    if (stack->top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        exit(EXIT_FAILURE);
    }
    stack->items[++stack->top] = value;
}

// Function to pop an element from the stack
int pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        exit(EXIT_FAILURE);
    }
    return stack->items[stack->top--];
}

// Function to evaluate a prefix expression
int evaluatePrefix(char expression[]) {
    struct Stack stack;
    initialize(&stack);

    int length = strlen(expression);

    // Process the expression from right to left
    for (int i = length - 1; i >= 0; i--) {
        char symbol = expression[i];

        if (isdigit(symbol)) {
            push(&stack, symbol - '0'); // Convert character to integer
        } else if (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/') {
            // Operator encountered, pop two operands, perform operation, and push result
            int operand1 = pop(&stack);
            int operand2 = pop(&stack);

            switch (symbol) {
                case '+':
                    push(&stack, operand1 + operand2);
                    break;
                case '-':
                    push(&stack, operand1 - operand2);
                    break;
                case '*':
                    push(&stack, operand1 * operand2);
                    break;
                case '/':
                    push(&stack, operand1 / operand2);
                    break;
            }
        }
    }

    // The final result will be at the top of the stack
    return pop(&stack);
}

int main() {
    char expression[] = "+-*+12/421$42";

    printf("Prefix Expression: %s\n", expression);

    int result = evaluatePrefix(expression);

    printf("Result: %d\n", result);

    return 0;
}

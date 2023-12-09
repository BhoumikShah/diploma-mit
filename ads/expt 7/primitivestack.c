#include <stdio.h>

#define MAX_SIZE 8

typedef struct {
    int top;
    int items[MAX_SIZE];
} Stack;

void initializeStack(Stack *stack) {
    stack->top = -1;
}

int isEmpty(Stack *stack) {
    return (stack->top == -1);
}

int isFull(Stack *stack) {
    return (stack->top == MAX_SIZE - 1);
}

void push(Stack *stack, int value) {
    if (isFull(stack)) {
        printf("Stack overflow. Cannot push element %d.\n", value);
        return;
    }

    stack->items[++stack->top] = value;
    printf("Pushed %d onto the stack.\n", value);
}

int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow. Cannot pop element.\n");
        return -1; // Return a default value indicating failure
    }

    int poppedValue = stack->items[stack->top--];
    printf("Popped %d from the stack.\n", poppedValue);
    return poppedValue;
}

void display(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty.\n");
        return;
    }

    printf("Elements in the stack: ");
    for (int i = 0; i <= stack->top; ++i) {
        printf("%d ", stack->items[i]);
    }
    printf("\n");
}

int main() {
    Stack stack;
    initializeStack(&stack);

    push(&stack, 10);
    push(&stack, 20);
    pop(&stack);
    push(&stack, 25);
    push(&stack, 50);
    push(&stack, 70);
    pop(&stack);
    pop(&stack);
    push(&stack, 100);
    pop(&stack);

    display(&stack);

    return 0;
}

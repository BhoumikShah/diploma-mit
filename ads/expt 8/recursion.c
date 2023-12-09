#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    int top;
    int items[MAX_SIZE];
} Stack;

// Function to initialize the stack
void initializeStack(Stack *stack) {
    stack->top = -1;
}

// Function to check if the stack is empty
int isEmpty(Stack *stack) {
    return (stack->top == -1);
}

// Function to check if the stack is full
int isFull(Stack *stack) {
    return (stack->top == MAX_SIZE - 1);
}

// Function to push an element onto the stack
void push(Stack *stack, int value) {
    if (isFull(stack)) {
        printf("Stack overflow. Cannot push element.\n");
        return;
    }

    stack->items[++stack->top] = value;
}

// Function to pop an element from the stack
int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow. Cannot pop element.\n");
        return -1;
    }

    return stack->items[stack->top--];
}

// Recursive function to insert an element at the bottom of the stack
void insertAtBottom(Stack *stack, int value) {
    if (isEmpty(stack)) {
        push(stack, value);
        return;
    }

    int temp = pop(stack);
    insertAtBottom(stack, value);
    push(stack, temp);
}

// Recursive function to reverse the stack
void reverseStack(Stack *stack) {
    if (!isEmpty(stack)) {
        int temp = pop(stack);
        reverseStack(stack);
        insertAtBottom(stack, temp);
    }
}

// Function to display the elements of the stack
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

    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);
    push(&stack, 4);
    pop(&stack);

    printf("Original stack:\n");
    display(&stack);

    reverseStack(&stack);

    printf("\nReversed stack:\n");
    display(&stack);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

typedef struct {
    int front, rear;
    int items[MAX_SIZE];
} LinearQueue;

// Function to initialize the linear queue
void initializeQueue(LinearQueue *queue) {
    queue->front = -1;
    queue->rear = -1;
}

// Function to check if the queue is empty
int isEmpty(LinearQueue *queue) {
    return (queue->front == -1);
}

// Function to check if the queue is full
int isFull(LinearQueue *queue) {
    return (queue->rear == MAX_SIZE - 1);
}

// Function to insert an element into the linear queue
void insert(LinearQueue *queue, int value) {
    if (isFull(queue)) {
        printf("Queue is full. Cannot insert element.\n");
        return;
    }

    if (isEmpty(queue)) {
        queue->front = 0;
    }

    queue->rear++;
    queue->items[queue->rear] = value;

    printf("Inserted %d into the queue.\n", value);
}

// Function to delete an element from the linear queue
void delete (LinearQueue *queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty. Cannot delete element.\n");
        return;
    }

    printf("Deleted %d from the queue.\n", queue->items[queue->front]);

    if (queue->front == queue->rear) {
        // Last element in the queue, reset front and rear
        queue->front = -1;
        queue->rear = -1;
    } else {
        queue->front++;
    }
}

// Function to display the elements of the linear queue
void display(LinearQueue *queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Elements in the queue: ");
    for (int i = queue->front; i <= queue->rear; i++) {
        printf("%d ", queue->items[i]);
    }

    printf("\n");
}

int main() {
    LinearQueue queue;
    initializeQueue(&queue);

    insert(&queue, 10);
    insert(&queue, 50);
    delete (&queue);
    insert(&queue, 100);
    insert(&queue, 20);
    delete (&queue);
    insert(&queue, 25);
    insert(&queue, 200);

    display(&queue);

    return 0;
}

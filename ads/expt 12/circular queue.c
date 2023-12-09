#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

typedef struct {
    int front, rear;
    int items[MAX_SIZE];
} CircularQueue;

// Function to initialize the circular queue
void initializeQueue(CircularQueue *queue) {
    queue->front = -1;
    queue->rear = -1;
}

// Function to check if the queue is empty
int isEmpty(CircularQueue *queue) {
    return (queue->front == -1 && queue->rear == -1);
}

// Function to check if the queue is full
int isFull(CircularQueue *queue) {
    return (queue->front == (queue->rear + 1) % MAX_SIZE);
}

// Function to insert an element into the circular queue
void insert(CircularQueue *queue, int value) {
    if (isFull(queue)) {
        printf("Queue is full. Cannot insert element.\n");
        return;
    }

    if (isEmpty(queue)) {
        queue->front = 0;
        queue->rear = 0;
    } else {
        queue->rear = (queue->rear + 1) % MAX_SIZE;
    }

    queue->items[queue->rear] = value;

    printf("Inserted %d into the queue.\n", value);
}

// Function to delete an element from the circular queue
void delete (CircularQueue *queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty. Cannot delete element.\n");
        return;
    }

    printf("Deleted %d from the queue.\n", queue->items[queue->front]);

    if (queue->front == queue->rear) {
        // Only one element in the queue, reset front and rear
        queue->front = -1;
        queue->rear = -1;
    } else {
        queue->front = (queue->front + 1) % MAX_SIZE;
    }
}

// Function to display the elements of the circular queue
void display(CircularQueue *queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Elements in the queue: ");
    int i = queue->front;

    do {
        printf("%d ", queue->items[i]);
        i = (i + 1) % MAX_SIZE;
    } while (i != (queue->rear + 1) % MAX_SIZE);

    printf("\n");
}

int main() {
    CircularQueue queue;
    initializeQueue(&queue);

    insert(&queue, 1);
    insert(&queue, 2);
    insert(&queue, 3);
    display(&queue);

    delete (&queue);
    display(&queue);

    insert(&queue, 4);
    insert(&queue, 5);
    display(&queue);

    insert(&queue, 6);
    delete (&queue);
display(&queue);
    return 0;
}

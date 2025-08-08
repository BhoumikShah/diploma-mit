#include <stdio.h>
#define MAX 5

struct Queue {
    int items[MAX];
    int front;
    int rear;
};

int isEmpty(struct Queue q) {
    return (q.front == -1 || q.front > q.rear);
}

int isFull(struct Queue q) {
    return (q.rear == MAX - 1);
}

struct Queue enqueue(struct Queue q, int value) {
    if (isFull(q)) {
        printf("Queue is full\n");
    } else {
        if (q.front == -1) {
            q.front = 0;
        }
        q.rear++;
        q.items[q.rear] = value;
        printf("%d enqueued\n", value);
    }
    return q;
}

struct Queue dequeue(struct Queue q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
    } else {
        printf("%d dequeued\n", q.items[q.front]);
        q.front++;
    }
    return q;
}

void printQueue(struct Queue q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
    } else {
        printf("Queue:\n");
        for (int i = q.front; i <= q.rear; i++) {
            printf("%d ", q.items[i]);
        }
        printf("\n");
    }
}

int main() {
    struct Queue q;
    q.front = -1;
    q.rear = -1;

    q = enqueue(q, 10);
    q = enqueue(q, 20);
    q = enqueue(q, 30);
    q = enqueue(q, 40);
    q = enqueue(q, 50);

    printQueue(q);

    q = dequeue(q);
    printQueue(q);

    q = dequeue(q);
    printQueue(q);

    q = dequeue(q);
    q = dequeue(q);
    q = dequeue(q);

    printQueue(q);

    q = dequeue(q);

    return 0;
}

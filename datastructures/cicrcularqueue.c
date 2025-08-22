#include <stdio.h>
#define MAX 4

struct Queue {
    int items[MAX];
    int front;
    int rear;
};

int isEmpty(struct Queue q) {
    return (q.front == -1);
}

int isFull(struct Queue q) {
    return ((q.rear + 1) % MAX == q.front);
}

struct Queue enqueue(struct Queue q, int value) {
    if (isFull(q)) {
        printf("Queue is full\n");
    } else {
        if (q.front == -1)
            q.front = 0;
        q.rear = (q.rear + 1) % MAX;
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
        if (q.front == q.rear) {
            q.front = -1;
            q.rear = -1;
        } else {
            q.front = (q.front + 1) % MAX;
        }
    }
    return q;
}

void printQueue(struct Queue q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
    } else {
        printf("Queue: ");
        int i = q.front;
        while (1) {
            printf("%d ", q.items[i]);
            if (i == q.rear)
                break;
            i = (i + 1) % MAX;
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
    q = enqueue(q, 50);  // should show "Queue is full"

    printQueue(q);

    q = dequeue(q);
    q = dequeue(q);

    printQueue(q);

    q = enqueue(q, 50);
    q = enqueue(q, 70);

    printQueue(q);

    q = dequeue(q);
    q = dequeue(q);
    q = dequeue(q);
    q = dequeue(q);

    printQueue(q);

    return 0;
}
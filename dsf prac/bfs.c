#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 10

// Structure for representing a graph
struct Graph {
    int numVertices;
    int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES];
};

// Queue structure for BFS
struct Queue {
    int front, rear;
    int capacity;
    int* array;
};

// Function to create a queue
struct Queue* createQueue(int capacity) {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->capacity = capacity;
    queue->front = queue->rear = -1;
    queue->array = (int*)malloc(queue->capacity * sizeof(int));
    return queue;
}

// Function to check if queue is empty
int isEmpty(struct Queue* queue) {
    return queue->front == -1;
}

// Function to check if queue is full
int isFull(struct Queue* queue) {
    return (queue->rear + 1) % queue->capacity == queue->front;
}

// Function to enqueue an element into the queue
void enqueue(struct Queue* queue, int item) {
    if (isFull(queue)) {
        printf("Queue is full\n");
        return;
    }
    if (isEmpty(queue)) {
        queue->front = queue->rear = 0;
    } else {
        queue->rear = (queue->rear + 1) % queue->capacity;
    }
    queue->array[queue->rear] = item;
}

// Function to dequeue an element from the queue
int dequeue(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return -1;
    }
    int item = queue->array[queue->front];
    if (queue->front == queue->rear) {
        queue->front = queue->rear = -1;
    } else {
        queue->front = (queue->front + 1) % queue->capacity;
    }
    return item;
}

// Function to perform Breadth-First Search (BFS) traversal
void BFS(struct Graph* graph, int startVertex) {
    int visited[MAX_VERTICES] = {0};
    struct Queue* queue = createQueue(graph->numVertices);
    visited[startVertex] = 1;
    enqueue(queue, startVertex);
    printf("BFS Traversal starting from vertex %d: ", startVertex);
    while (!isEmpty(queue)) {
        int currentVertex = dequeue(queue);
        printf("%d ", currentVertex);
        for (int i = 0; i < graph->numVertices; i++) {
            if (graph->adjacencyMatrix[currentVertex][i] && !visited[i]) {
                visited[i] = 1;
                enqueue(queue, i);
            }
        }
    }
    printf("\n");
}

int main() {
    int numVertices, numEdges, src, dest;

    printf("Enter the number of vertices in the graph: ");
    scanf("%d", &numVertices);

    // Create a graph with the given number of vertices
    struct Graph graph;
    graph.numVertices = numVertices;

    printf("Enter the number of edges: ");
    scanf("%d", &numEdges);

    // Initialize the adjacency matrix
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            graph.adjacencyMatrix[i][j] = 0;
        }
    }

    // Add edges to the graph
    printf("Enter the source and destination vertices for each edge:\n");
    for (int i = 0; i < numEdges; i++) {
        scanf("%d %d", &src, &dest);
        graph.adjacencyMatrix[src][dest] = 1;
        graph.adjacencyMatrix[dest][src] = 1; // Since it's an undirected graph
    }

    // Perform BFS traversal starting from vertex 0
    BFS(&graph, 0);

    return 0;
}

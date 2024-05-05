#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 10

// Structure for representing a graph
struct Graph {
    int numVertices;
    int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES];
};

// Function to initialize a graph with zero edges
void initGraph(struct Graph* graph, int numVertices) {
    graph->numVertices = numVertices;
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            graph->adjacencyMatrix[i][j] = 0;
        }
    }
}

// Function to add an edge between two vertices in the graph
void addEdge(struct Graph* graph, int src, int dest) {
    if (src >= 0 && src < graph->numVertices && dest >= 0 && dest < graph->numVertices) {
        graph->adjacencyMatrix[src][dest] = 1;
        graph->adjacencyMatrix[dest][src] = 1; // Since it's an undirected graph
    } else {
        printf("Invalid vertices\n");
    }
}

// Function to display the adjacency matrix of the graph
void displayGraph(struct Graph* graph) {
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < graph->numVertices; i++) {
        for (int j = 0; j < graph->numVertices; j++) {
            printf("%d ", graph->adjacencyMatrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int numVertices, numEdges, src, dest;

    printf("Enter the number of vertices in the graph: ");
    scanf("%d", &numVertices);

    // Create a graph with the given number of vertices
    struct Graph graph;
    initGraph(&graph, numVertices);

    printf("Enter the number of edges: ");
    scanf("%d", &numEdges);

    // Add edges to the graph
    printf("Enter the source and destination vertices for each edge:\n");
    for (int i = 0; i < numEdges; i++) {
        scanf("%d %d", &src, &dest);
        addEdge(&graph, src, dest);
    }

    // Display the graph
    displayGraph(&graph);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 10

// Structure for representing a graph
struct Graph {
    int numVertices;
    int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES];
};

// Function to perform Depth-First Search (DFS) traversal recursively
void DFSUtil(struct Graph* graph, int vertex, int visited[]) {
    visited[vertex] = 1;
    printf("%d ", vertex);
    for (int i = 0; i < graph->numVertices; i++) {
        if (graph->adjacencyMatrix[vertex][i] && !visited[i]) {
            DFSUtil(graph, i, visited);
        }
    }
}

// Function to perform Depth-First Search (DFS) traversal
void DFS(struct Graph* graph, int startVertex) {
    int visited[MAX_VERTICES] = {0};
    printf("DFS Traversal starting from vertex %d: ", startVertex);
    DFSUtil(graph, startVertex, visited);
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

    // Perform DFS traversal starting from vertex 0
    DFS(&graph, 0);

    return 0;
}

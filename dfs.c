#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100


void DFS(int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES], int vertices, int startVertex, int visited[MAX_VERTICES]) {
    printf("%d ", startVertex);
    visited[startVertex] = 1;

    for (int i = 0; i < vertices; i++) {
        if (adjacencyMatrix[startVertex][i] && !visited[i]) {
            DFS(adjacencyMatrix, vertices, i, visited);
        }
    }
}

int main() {
    int vertices, startVertex;
    printf("Ananta Walli, A2305221322");
    printf("\nEnter the number of vertices: ");
    scanf("%d", &vertices);

    int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES];
    int visited[MAX_VERTICES] = {0};

    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            scanf("%d", &adjacencyMatrix[i][j]);
        }
    }

    printf("Enter the starting vertex: ");
    scanf("%d", &startVertex);

    printf("Depth-First Search starting from vertex %d: ", startVertex);
    DFS(adjacencyMatrix, vertices, startVertex, visited);

    return 0;
}

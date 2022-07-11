/* Graphs */
#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 5

struct Graph {
    int vertices;
    int** adjacencyMatrix;
};

struct Graph* createGraph(int vertices) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->vertices = vertices;

    graph->adjacencyMatrix = (int**)malloc(vertices * sizeof(int*));
    for (int i = 0; i < vertices; i++) {
        graph->adjacencyMatrix[i] = (int*)malloc(vertices * sizeof(int));
        for (int j = 0; j < vertices; j++) {
            graph->adjacencyMatrix[i][j] = 0;
        }
    }

    return graph;
}

int main() {
    struct Graph* graph = createGraph(MAX_VERTICES);

    printf("Graph with %d vertices created successfully!\n", MAX_VERTICES);

    return 0;
}

/* Program 74: Graphs: Represent a graph using an adjacency list and perform operations like depth-first search (DFS) and breadth-first search (BFS). */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Define structure for adjacency list node
struct AdjListNode {
    int dest;
    struct AdjListNode *next;
};

// Define structure for adjacency list
struct AdjList {
    struct AdjListNode *head;
};

// Define structure for graph
struct Graph {
    int V;
    struct AdjList *array;
};

// Function to create a new adjacency list node
struct AdjListNode *newAdjListNode(int dest) {
    struct AdjListNode *newNode = (struct AdjListNode *)malloc(sizeof(struct AdjListNode));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->dest = dest;
    newNode->next = NULL;
    return newNode;
}

// Function to create a graph with V vertices
struct Graph *createGraph(int V) {
    struct Graph *graph = (struct Graph *)malloc(sizeof(struct Graph));
    if (graph == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    graph->V = V;
    graph->array = (struct AdjList *)malloc(V * sizeof(struct AdjList));
    if (graph->array == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    for (int i = 0; i < V; ++i)
        graph->array[i].head = NULL;
    return graph;
}

// Function to add an edge to the graph
void addEdge(struct Graph *graph, int src, int dest) {
    struct AdjListNode *newNode = newAdjListNode(dest);
    newNode->next = graph->array[src].head;
    graph->array[src].head = newNode;

    // For undirected graph, add an edge from dest to src as well
    newNode = newAdjListNode(src);
    newNode->next = graph->array[dest].head;
    graph->array[dest].head = newNode;
}

// Function to perform Depth-First Search (DFS) traversal of the graph
void DFSUtil(struct Graph *graph, int v, bool visited[]) {
    visited[v] = true;
    printf("%d ", v);

    struct AdjListNode *node = graph->array[v].head;
    while (node != NULL) {
        if (!visited[node->dest])
            DFSUtil(graph, node->dest, visited);
        node = node->next;
    }
}

void DFS(struct Graph *graph, int start) {
    bool *visited = (bool *)malloc(graph->V * sizeof(bool));
    if (visited == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    for (int i = 0; i < graph->V; i++)
        visited[i] = false;

    printf("Depth-First Search (DFS) traversal starting from vertex %d: ", start);
    DFSUtil(graph, start, visited);
    printf("\n");

    free(visited);
}

// Function to perform Breadth-First Search (BFS) traversal of the graph
void BFS(struct Graph *graph, int start) {
    bool *visited = (bool *)malloc(graph->V * sizeof(bool));
    if (visited == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    for (int i = 0; i < graph->V; i++)
        visited[i] = false;

    int queue[graph->V];
    int front = -1, rear = -1;
    queue[++rear] = start;
    visited[start] = true;

    printf("Breadth-First Search (BFS) traversal starting from vertex %d: ", start);
    while (front != rear) {
        int v = queue[++front];
        printf("%d ", v);

        struct AdjListNode *node = graph->array[v].head;
        while (node != NULL) {
            if (!visited[node->dest]) {
                visited[node->dest] = true;
                queue[++rear] = node->dest;
            }
            node = node->next;
        }
    }
    printf("\n");

    free(visited);
}

int main() {
    int V = 4;
    struct Graph *graph = createGraph(V);

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 3);

    DFS(graph, 2);
    BFS(graph, 2);

    return 0;
}

/* 
   Copyright (c) 2023
   Mahendra Mahara
*/

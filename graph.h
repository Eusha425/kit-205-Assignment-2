#include <stdio.h>
#include <stdlib.h>

// Structure to represent an edge in the graph
struct Edge {
    int src, dest, weight;
};

// Structure to represent a subset for the Union-Find data structure
struct Subset {
    int parent;
    int rank;
};

// Structure to represent the adjacency list for each vertex
struct Graph {
    int V;             // Number of vertices
    struct Node** array;  // Array of linked lists
};

#include <stdio.h>
#include <stdlib.h>

/* Directed graph */

#define MAX_NODES 50

typedef struct graph {
    int n; /* Number of vertices in graph */
    int adj[MAX_NODES][MAX_NODES]; /* Adjacency matrix */
} Graph;

void create_graph(Graph *);
void display(Graph *);

void append(int *, int, int *);

int bfs_con(Graph *, int, int);
int delete(int *, int *);

int main() {

    Graph adj_mat;

    int source, dest;

    printf("Enter the number of vertices: ");
    scanf("%d", &adj_mat.n);

    create_graph(&adj_mat);

    printf("Enter source vertex: ");
    scanf("%d", &source);

    printf("Enter destination vertex: ");
    scanf("%d", &dest);

    int exists = bfs_con(&adj_mat, source, dest);
    
    if (exists) {
        printf("There is a path from %d to %d\n", source, dest);
    }
    else {
        printf("There is no path from %d to %d\n", source, dest);
    }

    return 0;
}

void create_graph(Graph *adj_mat) {
    int i, j;

    for (int i = 0; i < adj_mat->n; ++i) {
        for (int j = 0; j < adj_mat->n; ++j) {
            adj_mat->adj[i][j] = 0;
        }
    }

    while (1) {
        printf("Enter source and destination vertices: ");
        scanf("%d %d", &i, &j);

        if (i < 0 && j <= 0 || i >= adj_mat->n || j >= adj_mat->n) {
            break;
        }

        adj_mat->adj[i][j] = 1;
    }
}



void display(Graph *adj_mat) {
    for (int i = 0; i < adj_mat->n; ++i) {
        for (int j = 0; j < adj_mat->n; ++j) {
            printf("%d ", adj_mat->adj[i][j]);
        }
        printf("\n");
    }
}

int bfs_con(Graph *adj_mat, int source, int dest) {
    int *visited, *queue, qr = -1;

    // Initialise visited list and queue (init 0)
    visited = (int *) calloc(adj_mat->n, sizeof(int));
    queue = (int *) calloc(adj_mat->n, sizeof(int));

    // Out of bounds
    if (source < 0 || source >= adj_mat->n) {
        printf("Source not in graph.\n");
        return 0;
    }
    if (dest < 0 || dest >= adj_mat->n) {
        printf("Destination not in graph.\n");
        return 0;
    }

    // Loop
    append(queue, source, &qr);
    visited[source] = 1;

    int vertex;

    // While queue is not empty
    while (qr != -1) {
        vertex = delete(queue, &qr);
        
        // Destination reached
        if (vertex == dest) {
            return 1;
        }

        for (int i = 0; i < adj_mat->n; ++i) {
            if (adj_mat->adj[vertex][i] && !visited[i]) {
                visited[i] = 1;
                append(queue, i, &qr);
            }
        }
    }
    
    // Free memory used by visited and queue
    free(visited);
    free(queue);
    return 0;
}

void append(int *queue, int v, int *pqr) {
    ++(*pqr);
    queue[*pqr] = v;
}

int delete(int *queue, int *pqr) {
    int res = queue[0];

    for (int i = 0; i < *pqr; ++i) {
        queue[i] = queue[i + 1];
    }
    --(*pqr);
    return res;
}
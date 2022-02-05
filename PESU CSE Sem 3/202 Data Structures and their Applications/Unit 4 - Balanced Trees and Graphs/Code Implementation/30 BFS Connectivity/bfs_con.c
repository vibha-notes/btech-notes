#include <stdio.h>
#include <stdlib.h>

/* Directed graph */

#define MAX_NODES 50

typedef struct graph {
    int n; /* Number of vertices in graph */
    int adj[MAX_NODES][MAX_NODES]; /* Adjacency matrix */
} Graph;

void create_graph(Graph *, char);
void display(Graph *);

void append(int *, int, int *);

int dfs_cycle(Graph *);
int delete(int *, int *);

int main() {

    Graph adj_mat;

    int source, dest;
    char junk, undir;

    printf("Enter the number of vertices: ");
    scanf("%d", &adj_mat.n);
    scanf("%c", &junk);

    printf("Is the graph undirected (y/n)? ");
    scanf("%c", &undir);


    create_graph(&adj_mat, undir);

    int con = dfs_cycle(&adj_mat);
    
    if (con) {
        printf("The graph is connnected\n");
    }
    else {
        printf("The graph is not connected\n");
    }

    return 0;
}

void create_graph(Graph *adj_mat, char undir) {
    int i, j;

    // Is graph undirected?
    int un = (undir == 'y' || undir == 'Y');

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
        if (un) {
            adj_mat->adj[j][i] = 1;
        }
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

int dfs_cycle(Graph *adj_mat) {
    int *visited, *queue, qr = -1;

    // Initialise visited list and queue (init 0)
    visited = (int *) calloc(adj_mat->n, sizeof(int));
    queue = (int *) calloc(adj_mat->n, sizeof(int));

    for (int start = 0; start < adj_mat->n; ++start) {

        // Initialise visited array
        for (int i = 0; i < adj_mat->n; ++i) {
            visited[i] = 0;
        }

        // Loop
        append(queue, start, &qr);
        visited[start] = 1;

        int vertex;

        // While queue is not empty
        while (qr != -1) {
            // Dequeue first element
            vertex = delete(queue, &qr);
            
            // Enqueue all unvisited connections
            for (int i = 0; i < adj_mat->n; ++i) {
                if (adj_mat->adj[vertex][i] && !visited[i]) {
                    visited[i] = 1;
                    append(queue, i, &qr);
                }
            }
        }

        // Check visited array
        for (int i = 0; i < adj_mat->n; ++i) {
            if (!visited[i]) {
                free(visited);
                free(queue);
                return 0;
            }
        }
    }
    
    // Free memory used by visited and queue
    free(visited);
    free(queue);
    return 1;
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
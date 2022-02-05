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


int dfs(Graph *, int, int *, int);
int dfs_cycle(Graph *);


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

    int cycle = dfs_cycle(&adj_mat);
    
    if (cycle) {
        printf("The graph has a cycle\n");
    }
    else {
        printf("The graph does not have a cycle\n");
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
    /* For a connected graph */
    int *visited;

    /* Initialise visited list and queue (init 0) */
    visited = (int *) calloc(adj_mat->n, sizeof(int));
        
    int res = dfs(adj_mat, 0, visited, -1);
    
    /* Free memory used by visited and queue */
    free(visited);
    return res;
}

int dfs(Graph *adj_mat, int vertex, int *visited, int parent) {
    int res;
    visited[vertex] = 1;
    for (int i = 0; i < adj_mat->n; ++i) {
        /* If the connection exists and is not the parent */
        if (adj_mat->adj[vertex][i] && i != parent) {
            /* If the child is visited */
            if (visited[i]) {
                return 1;
            }
            /* If child is not visited */
            else {
                res = dfs(adj_mat, i, visited, vertex);
                if (res) return res;
            }
        }
    }
    return 0;
}
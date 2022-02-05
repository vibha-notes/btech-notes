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
int indegree(Graph *, int);
int outdegree(Graph *, int);
void append(int *, int, int *);

void bfs(Graph *);
int delete(int *, int *);

int main() {

    Graph adj_mat;

    int ch, v, i;

    printf("Enter the number of vertices: ");
    scanf("%d", &adj_mat.n);

    create_graph(&adj_mat);


    do {

        printf("\n\nMAIN MENU\n");
        printf("1. Indegree of a vertex\n");
        printf("2. Outdegree of a vertex\n");
        printf("3. Display matrix\n");
        printf("4. BFS traversal\n");
        printf("5. Exit\n");

        scanf("%d", &ch);

        
        switch (ch) {
            case 1: {
                printf("Enter the vertex: ");
                scanf("%d", &v);
                i = indegree(&adj_mat, v);
                printf("\nIndegree of %d is %d\n", v, i);
                break;
            }
            case 2: {
                printf("Enter the vertex: ");
                scanf("%d", &v);
                i = outdegree(&adj_mat, v);
                printf("\nOutdegree of %d is %d\n", v, i);
                break;
            }
            case 3: {
                display(&adj_mat);
                break;
            }
            case 4: {
                bfs(&adj_mat);
                break;
            }
            case 5: {
                return 0;
            }
        }


    } while (1);

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

int indegree(Graph *adj_mat, int v) {
    int count = 0;
    for (int i = 0; i < adj_mat->n; ++i) {
        if (adj_mat->adj[i][v] == 1) {
            ++count;
        }
    }
    return count;
}

int outdegree(Graph *adj_mat, int v) {
    int count = 0;
    for (int j = 0; j < adj_mat->n; ++j) {
        if (adj_mat->adj[v][j] == 1) {
            ++count;
        }
    }
    return count;
}

void display(Graph *adj_mat) {
    for (int i = 0; i < adj_mat->n; ++i) {
        for (int j = 0; j < adj_mat->n; ++j) {
            printf("%d ", adj_mat->adj[i][j]);
        }
        printf("\n");
    }
}

void bfs(Graph *adj_mat) {
    int vertex, *visited, *queue, qr = -1;

    // Accept user input 
    printf("Enter source vertex: ");
    scanf("%d", &vertex);

    // Initialise visited list and queue (init 0)
    visited = (int *) calloc(adj_mat->n, sizeof(int));
    queue = (int *) calloc(adj_mat->n, sizeof(int));

    // Out of bounds
    if (vertex < 0 || vertex >= adj_mat->n) {
        printf("Vertex not in graph.\n");
        return;
    }

    // Loop
    append(queue, vertex, &qr);
    visited[vertex] = 1;

    // While queue is not empty
    while (qr != -1) {
        vertex = delete(queue, &qr);
        printf("%d ", vertex);
        for (int i = 0; i < adj_mat->n; ++i) {
            if (adj_mat->adj[vertex][i] == 1 && visited[i] == 0) {
                visited[i] = 1;
                append(queue, i, &qr);
            }
        }
    }

    printf("\n");

    // Free memory used by visited and queue
    free(visited);
    free(queue);
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
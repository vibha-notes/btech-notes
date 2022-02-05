#include <stdio.h>

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
        printf("4. Exit\n");

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
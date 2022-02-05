/* Print all the paths from source to 
destination using adjacency list and dfs */

#include <stdio.h>
#include <stdlib.h>

/* Directed graph */

#define MAX_NODES 50

typedef struct node {
    int data; /* Value of the column of the connection */
    struct node *next;
} Node;

void create_graph(Node * [], int);
void insert(Node *[], int, int);
void display(Node * [], int);


void dfs_path(Node *[], int, int, int);
void print_path(Node *[], int, int, int *, int *, int);

int main() {
    int n, source, dest;
    
    Node *adj_list[MAX_NODES];

    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    create_graph(adj_list, n);

    printf("Enter source vertex: ");
    scanf("%d", &source);

    printf("Enter destination vertex: ");
    scanf("%d", &dest);

    dfs_path(adj_list, n, source, dest);

    return 0;
}

void create_graph(Node *adj_list[], int n) {
    int i, j;

    for (int i = 0; i < n; ++i) {
        adj_list[i] = NULL;
    }

    while (1) {
        printf("Enter source and destination vertices: ");
        scanf("%d %d", &i, &j);

        if (i < 0 && j <= 0 || i >= n || j >= n) {
            break;
        }

        // Both for undirected
        insert(adj_list, i, j);
    }
}

// Insert to end
void insert(Node *adj_list[], int i, int j) {
    Node *new_node = (Node *) malloc(sizeof(Node));
    new_node->next = NULL;
    new_node->data = j;

    Node *traverse = adj_list[i];

    if (traverse == NULL) {
        adj_list[i] = new_node;
        return;
    }

    while (traverse->next != NULL) {
        traverse = traverse->next;
    }
    traverse->next = new_node;
}



void display(Node *adj_list[], int n) {
    for (int i = 0; i < n; ++i) {
        Node *traverse = adj_list[i];
        printf("%d->", i);
        while (traverse != NULL) {
            printf("%d ", traverse->data);
            traverse = traverse->next;
        }
        printf("\n");
    }
}

void dfs_path(Node *adj_list[], int n, int source, int dest) {
    int *visited, *path, count = 0;

    // Out of bounds
    if (source < 0 || source >= n) {
        printf("Source not in graph.\n");
        return;
    }
    if (dest < 0 || dest >= n) {
        printf("Destination not in graph.\n");
        return;
    }

    // Initialise visited list and set to 0s
    visited = (int *) calloc(n, sizeof(int));
    path = (int *) calloc(n, sizeof(int));  

    // Call recursive function
    print_path(adj_list, source, dest, visited, path, count);
    printf("\n");

    // Free memory used by visited and path
    free(visited);
    free(path);
}

// Recursive function
void print_path(Node *adj_list[], int source, int dest, int *visited, int *path, int count) {
    // Mark node as visited and display
    visited[source] = 1;
    path[count] = source;
    ++count;

    if (source == dest) {
        // Print array if destination reached
        for (int i = 0; i < count; ++i) {
            printf("%d ", path[i]);
        }
        printf("\n");

    }
    else {
        for (Node *t = adj_list[source]; t != NULL; t = t->next) {
            if (!visited[t->data]) {
                print_path(adj_list, t->data, dest, visited, path, count);
            }
        }
    }

    // Backtrack
    --count;
    visited[source] = 0;
}
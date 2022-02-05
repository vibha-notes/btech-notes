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
int indegree(Node * [], int, int);
int outdegree(Node * [], int, int);

int main() {
    int n, ch, v, i;
    
    Node *adj_list[MAX_NODES];

    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    create_graph(adj_list, n);


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
                i = indegree(adj_list, n, v);
                printf("\nIndegree of %d is %d\n", v, i);
                break;
            }
            case 2: {
                printf("Enter the vertex: ");
                scanf("%d", &v);
                i = outdegree(adj_list, n, v);
                printf("\nOutdegree of %d is %d\n", v, i);
                break;
            }
            case 3: {
                display(adj_list, n);
                break;
            }
            case 4: {
                return 0;
            }
        }


    } while (1);

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


int indegree(Node *adj_list[], int n, int v) {
    int count = 0;

    for (int i = 0; i < n; ++i) {
        Node *traverse = adj_list[i];

        while (traverse != NULL) {
            if (traverse->data == v) {
                ++count;
            }
            traverse = traverse->next;
        }
    }
    return count;
}

int outdegree(Node *adj_list[], int n, int v) {
    int count = 0;
    
    Node *traverse = adj_list[v];

    while (traverse != NULL) {
        ++count;
        traverse = traverse->next;
    }

    return count;
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
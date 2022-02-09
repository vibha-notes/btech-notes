#include <stdio.h>
#include <stdlib.h>

#define HEAP_SIZE 10

typedef struct node {
    int data, priority;
} Node;

void pq_insert(Node *, int, int, int*);
Node pq_delete(Node *, int *);
void display(Node *, int);
void adjust(Node *, int);

int main() {
    Node priority_queue[HEAP_SIZE];
    int n = 0, choice;

    do {
        printf("\n\nMAIN MENU\n\n");
        printf("1. Insert an element\n");
        printf("2. Delete an element\n");
        printf("3. Display heap\n");
        printf("4. Exit\n");

        printf("\nYour choice: ");

        scanf("%d", &choice);

        switch (choice) {
            int data, priority;
            case 1: {
                printf("Enter data: ");
                scanf("%d", &data);
                printf("Enter priority: ");
                scanf("%d", &priority);
                pq_insert(priority_queue, data, priority, &n);
                display(priority_queue, n);
                break;
            }
            case 2: {
                Node temp = pq_delete(priority_queue, &n);
                display(priority_queue, n);
                printf("Deleted: %d | %d\n", temp.priority, temp.data);
                break;
            }
            case 3: {
                display(priority_queue, n);
                break;
            }
            case 4: {
                return 0;
            }
        }

    } while (choice != 4);
    
    return 0;
}

void pq_insert(Node *heap, int data, int priority, int *pn) {
    int child, parent;
    
    Node temp;
    temp.data = data;
    temp.priority = priority;

    // Add new node to end of heap
    heap[*pn] = temp;
    ++(*pn);

    // Last node is the child node
    child = *pn - 1;
    // Its parent node
    parent = (child-1)/2;

    // Bottom up
    while ((child > 0) && temp.priority < heap[parent].priority) {
        heap[child] = heap[parent];
        child = parent;
        parent = (child-1)/2;
    }
    heap[child] = temp;
}

Node pq_delete(Node *heap, int *pn) {
    Node temp = heap[0];
    heap[0] = heap[*pn-1];
    --(*pn);
    adjust(heap, *pn);
    return temp;
}

void adjust(Node *heap, int n) {
    int child, parent;
    Node key;
    parent = 0;
    key = heap[parent];

    child = 2*parent+1;

    // If left child exists
    while (child < n) { 

        // Right child exists
        if (child+1 < n) {
            // If right node is greater than left
            if (heap[child+1].priority < heap[child].priority) {
                ++child;
            }
        }

        // Now child stores index of greater child
        if (key.priority > heap[child].priority) {
            heap[parent] = heap[child];
            parent = child;
            child = 2*parent+1;
        }
        else {
            break;
        }
    }
    heap[parent] = key;
}

void display(Node *heap, int n) {
    for (int i = 0; i < n; ++i) {
        printf("Priority:%d Data: %d\n", heap[i].priority, heap[i].data);
    }
    printf("\n");
}
#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 30

void display(int *, int);
void max_heapify(int *, int);
int max_remove(int *, int *);
void adjust(int *, int);

int main() {

    int n, heap[ARRAY_SIZE];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");

    for (int i = 0; i < n; ++i) {
        scanf("%d", &heap[i]);
    }

    // Before hepifying
    display(heap, n);

    max_heapify(heap, n);

    // After hepifying
    display(heap, n);

    int max = max_remove(heap, &n);
    display(heap, n);

    printf("Removed: %d\n", max);

    return 0;
}

int max_remove(int *heap, int *pn) {
    
    int top = heap[0];

    // Assign last element to first element of heap
    heap[0] = heap[*pn-1];
    // Reduce number of nodes
    --(*pn);
    adjust(heap, *pn);
    return top;
}

// More efficient than heapify
void adjust(int *heap, int n) {
    int child, parent, key;
    parent = 0;
    key = heap[parent];

    child = 2*parent+1;

    // If left child exists
    while (child < n) { 

        // Right child exists
        if (child+1 < n) {
            // If right node is greater than left
            if (heap[child+1] > heap[child]) {
                ++child;
            }
        }

        // Now child stores index of greater child
        if (key < heap[child]) {
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

void max_heapify(int *heap, int n) {
    int key, child, parent, k;

    for (k = 1; k < n; ++k) {
        child = k;
        key = heap[child];
        parent = (child-1)/2;

        while ((child > 0) && heap[parent] < key) {
            heap[child] = heap[parent];

            // Go up
            child = parent;
            parent = (child-1)/2;
        }
        heap[child] = key;
    }
}


void display(int *heap, int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d ", heap[i]);
    }
    printf("\n");
}
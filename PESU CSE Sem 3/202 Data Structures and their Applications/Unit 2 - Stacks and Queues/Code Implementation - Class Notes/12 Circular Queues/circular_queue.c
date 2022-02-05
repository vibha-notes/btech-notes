#include <stdio.h>
#include <stdlib.h>

#define QUEUE_SIZE 10

void queue_initialise(int *, int *, int *);
void queue_destroy(int *, int *, int *);
void enqueue(int *, int, int *, int *);
void display(int *, int, int);
int dequeue(int *, int *, int *);

int main() {
    int queue[QUEUE_SIZE];
    int front = -1, rear = -1;

    queue_initialise(queue, &front, &rear);

    int choice;

    do {
        printf("\n\nMAIN MENU\n\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("\nYour choice: ");

        scanf("%d", &choice);

        switch (choice) {
            int data;
            case 1: {
                printf("Enter data: ");
                scanf("%d", &data);
                enqueue(queue, data, &front, &rear);
                display(queue, front, rear);
                break;
            }
            case 2: {
                int ans = dequeue(queue, &front, &rear);
                printf("Removed: %d\n", ans);
                display(queue, front, rear);
                break;
            }
            case 3: {
                display(queue, front, rear);
                break;
            }
            case 4: {
                queue_destroy(queue, &front, &rear);
                return 0;
            }
           
        }

    } while (choice != 4);
    queue_destroy(queue, &front, &rear);
    return 0;
}

void queue_initialise(int *queue, int *pfront, int *prear) {
    for (int i = 0; i < QUEUE_SIZE; ++i) {
        queue[i] = 0;
    }
    *pfront = -1;
    *prear = -1;
}

void queue_destroy(int *queue, int *pfront, int *prear) {
    if (*prear == -1 || *pfront == -1) {
        return;
    }
    else if (*prear >= *pfront) {
        for (int i = *pfront; i <= *prear; ++i) {
            queue[i] = 0;
        }
    }
    else {
        for (int i = *pfront; i < QUEUE_SIZE; ++i) {
            queue[i] = 0;
        }
        for (int i = 0; i < *prear; ++i) {
            queue[i] = 0;
        }
    }
    *pfront = -1;
    *prear = -1;
}

void enqueue(int *queue, int data, int *pfront, int *prear) {

    if (*prear + 1 == *pfront || (*prear == QUEUE_SIZE - 1 && *pfront == 0)) {
        printf("Queue is full\n");
    }

    else if (*prear == -1) {
        *prear = 0;
        *pfront = 0;
        queue[*prear] = data;
    }

    else if (*prear == QUEUE_SIZE - 1) {
        *prear = 0;
        queue[*prear] = data;
    }

    else {
        *prear += 1;
        queue[*prear] = data;
    }
}

void display(int *queue, int front, int rear) {
    if (rear == -1 || front == -1) {
        printf("NULL");
        return;
    }
    else if (rear >= front) {
        for (int i = front; i <= rear; ++i) {
            printf("%d->", queue[i]);
        }
    }
    else {
        for (int i = front; i < QUEUE_SIZE; ++i) {
            printf("%d->", queue[i]);
        }
        for (int i = 0; i <= rear; ++i) {
            printf("%d->", queue[i]);
        }
    }
    printf("NULL");
}

int dequeue(int *queue, int *pfront, int *prear) {
    int removed;
    if (*pfront == -1) {
        return -1;
    }

    else if (*pfront == *prear) {
        removed = queue[*prear];
        *pfront = -1;
        *prear = -1;
    }

    else if (*pfront + 1 == QUEUE_SIZE) {
        removed = queue[*pfront];
        *pfront = 0;
    }

    else {
        removed = queue[*pfront];
        *pfront += 1;
    }
    return removed;
    
}

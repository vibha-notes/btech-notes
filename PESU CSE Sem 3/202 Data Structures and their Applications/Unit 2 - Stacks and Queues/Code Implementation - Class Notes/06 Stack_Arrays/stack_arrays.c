#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 10

void stack_destroy(int *, int);
void push(int *, int, int *);
void display(int *, int);
int pop(int *, int *, int *);
int peek(int *, int top, int *);

int main(int argc, char *argv[]) {
    int stack[STACK_SIZE];
    // Stack empty, top = -1
    int top = -1;

    int choice, received;

    do {
        printf("\n\nMAIN MENU\n\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");  
        printf("4. Display\n");
        printf("5. Exit\n");

        printf("\nYour choice: ");

        scanf("%d", &choice);

        switch (choice) {
            int data;
            case 1: {
                printf("Enter number: ");
                scanf("%d", &data);
                push(stack, data, &top);
                display(stack, top);
                break;
            }
            case 2: {
                int is_empty = 0;
                received = pop(stack, &top, &is_empty);

                if (is_empty == 0) {
                    printf("Popped element: %d\n", received);
                }
                display(stack, top);
                break;
            }
            case 3: {
                int is_empty = 0;
                received = peek(stack, top, &is_empty);

                if (is_empty == 0) {
                    printf("Peeked element: %d\n", received);
                }
                display(stack, top);
                break;
            }
            case 4: {
                display(stack, top);
                break;
            }
            case 5: {
                stack_destroy(stack, top);
                return 0;
            }
            default: {
                printf("Invalid input\n");
                continue;
            }
        }

    } while (choice != 5);
    stack_destroy(stack, top);
    return 0;
}

void push(int *stack, int data, int *ptop) {
    if (*ptop == STACK_SIZE - 1) {
        printf("Stack overflow\n");
        return;
    }
    ++(*ptop);
    stack[*ptop] = data;
}

int pop(int *stack, int *ptop, int *pempty) {
    if (*ptop == -1) {
        *pempty = 1;
        printf("Stack is empty\n");
        return -1;
    }
    int val = stack[*ptop];
    stack[*ptop] = 0;
    --(*ptop);
    return val;
}

int peek(int *stack, int top, int *pempty) {
    if (top == -1) {
        *pempty = 1;
        printf("Stack is empty\n");
        return -1;
    }

    return stack[top];
}

void display(int *stack, int top) {
    for (int i = top; i >= 0; --i) {
        printf("%d->", stack[i]);
    }
    printf("NULL\n");
}

void stack_destroy(int *stack, int top) {
    for (int i = 0; i <= top; ++i) {
        stack[i] = 0;
    }
}
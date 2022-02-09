// LIFO
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

typedef struct stack {
    Node *top;
} Stack;

// Helper functions
Stack* stack_initialise();
void stack_destroy(Stack *);
Node* create_node(int);
void display(Stack *);

// Stack functions
void push(Stack *, int);
int pop(Stack *);
int peek(Stack *);

int main(int argc, char const *argv[]) {
    int choice;
    Stack *stack = stack_initialise();

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
                printf("Enter data: ");
                scanf("%d", &data);
                push(stack, data);
                display(stack);
                break;
            }
            case 2: {
                int is_empty = (stack->top == NULL);
                if (!is_empty) {
                    data = pop(stack);
                    printf("The element popped is %d\n", data);
                }
                else {
                    printf("The stack is empty");
                }
                display(stack);
                break;
            }
            case 3: {
                int is_empty = (stack->top == NULL);
                if (!is_empty) {
                    data = peek(stack);
                    printf("The element peeked is %d\n", data);
                }
                else {
                    printf("The stack is empty\n");
                }
                display(stack);
                break;
            }
            case 4: {
                display(stack);
                break;
            }
            case 5: {
                stack_destroy(stack);
                return 0;
            }
        }

    } while (choice != 5);
    stack_destroy(stack);
    return 0;
}

Node* create_node(int data) {
    Node *new_node = (Node*) malloc(sizeof(Node));
    new_node->next = NULL;
    new_node->data = data;
    return new_node;
}

Stack* stack_initialise() {
    Stack *stack = (Stack *) malloc(sizeof(Stack));
    stack->top = NULL;
    return stack;
}

void stack_destroy(Stack *stack) {
    if (stack == NULL) {
        return;
    }
    if (stack->top == NULL) {
        return;
    }

    Node *traverse = stack->top, *to_del = NULL;

    while (traverse->next != NULL) {
        to_del = traverse;
        traverse = traverse->next;
        free(to_del);
    }
    stack->top = NULL;
    free(stack);
}

void push(Stack *stack, int data) {
    // Insert to the front
    Node *new_node = create_node(data);
    new_node->next = stack->top;
    stack->top = new_node;
}

int pop(Stack *stack) {
    // Delete from the front
    if (stack->top == NULL) {
        return -1;
    }

    Node *to_del = stack->top;
    int popped = to_del->data;

    stack->top = stack->top->next;
    free(to_del);

    return popped;
}

int peek(Stack *stack) {
    // Delete from the front
    if (stack->top == NULL) {
        return -1;
    }
    return stack->top->data;
}

void display(Stack *stack) {
    Node *traverse = stack->top;
    while (traverse != NULL) {
        printf("%d->", traverse->data);
        traverse = traverse->next;
    }
    printf("NULL\n");
}
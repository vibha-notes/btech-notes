#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 30

typedef struct node {
    int data;
    struct node *left, *right;
} Node;

typedef struct tree {
    Node *root;
} Tree;

// Stack functions
void stack_destroy(Node **, int);
void push(Node **, Node *, int *);
Node *pop(Node **, int *);

// Helper functions
Node *create_node(int);
Tree *initialise_tree(void);
void destroy_tree(Tree *);
void destroy_leaves(Node *);


// Traversal
void iter_preorder(Tree *);
void iter_inorder(Tree *);
void iter_postorder(Tree *);


// Insertion functions
void lex_insert(Tree *, int);

int main() {
    int choice;
    Tree *binary_tree = initialise_tree();

    do {
        printf("\n\nMAIN MENU\n\n");
        printf("1. Insert an element lexically\n");
        printf("2. Preorder\n");
        printf("3. Inorder\n");
        printf("4. Postorder\n");
        printf("5. Exit\n");

        printf("\nYour choice: ");

        scanf("%d", &choice);

        switch (choice) {
            int data, priority;
            case 1: {
                printf("Enter data: ");
                scanf("%d", &data);
                lex_insert(binary_tree, data);
                break;
            }
            case 2: {
                iter_preorder(binary_tree);
                break;
            }
            case 3: {
                iter_inorder(binary_tree);
                break;
            }
            case 4: {
                iter_postorder(binary_tree);
                break;
            }
            case 5: {
                destroy_tree(binary_tree);
                return 0;
            }
        }

    } while (choice != 5);
    destroy_tree(binary_tree);
    return 0;
}


void lex_insert(Tree *tree, int data) {
    Node *new_node = create_node(data);
    
    if (tree->root == NULL) {
        tree->root = new_node;
        return;
    }

    Node *temp = tree->root;

    while (1) {
        if (data < temp->data) {
            if (temp->left == NULL) {
                temp->left = new_node;
                return;
            }
            else {
                temp = temp->left;
            }
        }
        else {
            if (temp->right == NULL) {
                temp->right = new_node;
                return;
            }
            else {
                temp = temp->right;
            }
        }
    }
}


void iter_preorder(Tree *tree) {
    Node *stack[STACK_SIZE];
    int top = -1;

    Node *temp = tree->root;
    push(stack, temp, &top);

    while (top != -1) {
        temp = pop(stack, &top);
        printf("%d ", temp->data);

        // Right child is pushed first so that 
        // left is processed first
        if (temp->right != NULL) {
            push(stack, temp->right, &top);
        }
        
        if (temp->left != NULL) {
            push(stack, temp->left, &top);
        }
    }
    printf("\n");
}

void iter_inorder(Tree *tree) {
    Node *stack[STACK_SIZE];
    int top = -1;

    Node *temp = tree->root;

    while (top != -1 || temp != NULL) {
        while (temp != NULL) {
            push(stack, temp, &top);
            temp = temp->left;
        }
        temp = pop(stack, &top);
        printf("%d ", temp->data);
        temp = temp->right;
    }
    printf("\n");
}


void iter_postorder(Tree *tree) {
    Node *s1[STACK_SIZE], *s2[STACK_SIZE];
    int t1 = -1, t2 = -1;

    Node *temp = tree->root;
    push(s1, temp, &t1);

    while (t1 != -1) {
        temp = pop(s1, &t1);
        push(s2, temp, &t2);

        if (temp->left != NULL) {
            push(s1, temp->left, &t1);
        }
        
        if (temp->right != NULL) {
            push(s1, temp->right, &t1);
        }
    }

    while (t2 != -1) {
        temp = pop(s2, &t2);
        printf("%d ", temp->data);
    }
    printf("\n");
}


Node *create_node(int data) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

Tree *initialise_tree() {
    Tree *new_tree = (Tree *)malloc(sizeof(Tree));
    new_tree->root = NULL;
    return new_tree;
}

void destroy_tree(Tree *tree) {
    if (tree == NULL) return;
    destroy_leaves(tree->root);
    free(tree);
}

void destroy_leaves(Node *root) {
    if (root == NULL) return;
    if (root->left == NULL && root->right == NULL) {
        free(root);
        return;
    }
    if (root->left != NULL) {
        destroy_leaves(root->left);
    }

    if (root->right != NULL) {
        destroy_leaves(root->right);
    }
}

void push(Node **stack, Node *temp, int *ptop) {
    if (*ptop == STACK_SIZE - 1) {
        printf("Stack overflow\n");
        return;
    }
    ++(*ptop);
    stack[*ptop] = temp;
}

Node *pop(Node **stack, int *ptop) {
    if (*ptop == -1) {
        return NULL;
    }
    Node *temp = stack[*ptop];
    stack[*ptop] = NULL;
    --(*ptop);
    return temp;
}


void stack_destroy(Node **stack, int top) {
    for (int i = 0; i <= top; ++i) {
        stack[i] = NULL;
    }
}


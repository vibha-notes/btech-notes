#include <stdio.h>
#include <stdlib.h>

#define EXP_LEN 100
#define STACK_SIZE 10

typedef struct node {
    char ch;
    struct node *left, *right;
} Node;

typedef struct tree {
    Node *root;
} Tree;


void stack_destroy(Node **, int);
void push(Node **, Node *, int *);
void display(Node **, int);
Node *pop(Node **, int *);

// Helper functions
Node *create_node(char);
Tree *initialise_tree(void);
void destroy_tree(Tree *);
void destroy_leaves(Node *);
int powerof(int, int);

// Traversal
void exp_preorder(Tree *);
void exp_inorder(Tree *);
void exp_postorder(Tree *);

// Traversal helpers
void exp_preorder_helper(Node *);
void exp_inorder_helper(Node *);
void exp_postorder_helper(Node *);


void create_exp_tree(Tree *, char *);
int is_oper(char);

int evaluate_helper(Node *);
int evaluate(Tree *);

int main() {
    Tree *exp_tree = initialise_tree();
    char exp[EXP_LEN];

    printf("Enter postfix expression: ");
    scanf("%s", exp);

    create_exp_tree(exp_tree, exp);

    printf("Inorder form:\n");
    exp_inorder(exp_tree);

    printf("Preorder form:\n");
    exp_preorder(exp_tree);

    printf("Postorder form:\n");
    exp_postorder(exp_tree);

    int result = evaluate(exp_tree);
    printf("Evaluated expression: %d\n", result);

    return 0;
}

void create_exp_tree(Tree *tree, char *exp) {
    char ch;
    Node *stack[STACK_SIZE];
    int top = -1;

    Node *temp = NULL;

    for (int i = 0; exp[i] != 0; ++i) {
        ch = exp[i];
        temp = create_node(ch);
        
        if (is_oper(ch)) {
            temp->right = pop(stack, &top);
            temp->left = pop(stack, &top);
            push(stack, temp, &top);
        }
        else {
            push(stack, temp, &top);
        }

        
    }
    tree->root = pop(stack, &top);
    stack_destroy(stack, top);
}


int is_oper(char ch) {
    switch (ch) {
        case '+':
        case '-':
        case '*': 
        case '/':
        case '^':
            return 1;
        default:
            return 0;
    }
}

int evaluate(Tree *tree) {
    if (tree == NULL || tree->root == NULL) return 0;
    return evaluate_helper(tree->root);
}

int evaluate_helper(Node *root) {
    int x;
    if (root == NULL) return 0;
    switch (root->ch) {
        case '+': {
            return evaluate_helper(root->left) + evaluate_helper(root->right);
        }
        case '-': {
            return evaluate_helper(root->left) - evaluate_helper(root->right);
        }
        case '^': {
            return powerof(evaluate_helper(root->left), evaluate_helper(root->right));
        }
        case '/': {
            return evaluate_helper(root->left) / evaluate_helper(root->right);
        }
        case '*': {
            return evaluate_helper(root->left) * evaluate_helper(root->right);
        }
        default: {
            printf("Enter value of %c: ", root->ch);
            scanf("%d", &x);
            return x;
        }
    }
}

void exp_preorder(Tree *tree) {
    exp_preorder_helper(tree->root);
    printf("\n");
}

void exp_preorder_helper(Node *root) {
    if (root != NULL) {
        printf("%c ", root->ch);
        exp_preorder_helper(root->left);
        exp_preorder_helper(root->right);
    }
}

void exp_inorder(Tree *tree) {
    exp_inorder_helper(tree->root);
    printf("\n");
}

void exp_inorder_helper(Node *root) {
    if (root != NULL) {
        exp_inorder_helper(root->left);
        printf("%c ", root->ch);
        exp_inorder_helper(root->right);
    }
}

void exp_postorder(Tree *tree) {
    exp_postorder_helper(tree->root);
    printf("\n");
}

void exp_postorder_helper(Node *root) {
    if (root != NULL) {
        exp_postorder_helper(root->left);
        exp_postorder_helper(root->right);
        printf("%c ", root->ch);
    }
}

Node *create_node(char ch) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->ch = ch;
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

void display(Node **stack, int top) {
    for (int i = top; i >= 0; --i) {
        printf("%c->", stack[i]->ch);
    }
    printf("NULL\n");
}

void stack_destroy(Node **stack, int top) {
    for (int i = 0; i <= top; ++i) {
        stack[i] = NULL;
    }
}

int powerof(int a, int b) {
    int res = 1;
    for (int i = 0; i < b; ++i) {
        res *= a;
    }
    return res;
}
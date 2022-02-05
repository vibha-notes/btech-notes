#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *left, *right;
    int left_thread, right_thread;
} Node;

typedef struct tree {
    Node *root;
} Tree;

// Insert
void thread_insert(Tree *tree, int data);

// Traverse
void thread_inorder(Tree *tree);
void thread_preorder(Tree *tree);
void thread_postorder(Tree *tree);

Node *inorder_successor(Node *root);

void destroy_tree(Tree *);
void destroy_leaves(Node *);
Tree *initialise_tree();
Node *create_node(int);


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
                thread_insert(binary_tree, data);
                break;
            }
            case 2: {
                // thread_preorder(binary_tree);
                break;
            }
            case 3: {
                thread_inorder(binary_tree);
                break;
            }
            case 4: {
                // thread_postorder(binary_tree);
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

void thread_insert(Tree *tree, int data) {
    Node *new_node = create_node(data), *temp = tree->root;

    if (temp == NULL) {
        tree->root = new_node;
        return;
    }

    while (1) {
        if (data < temp->data) {
            if (temp->left_thread == 0) {
                temp = temp->left;
            }
            else {
                break;
            }
            
        }
        else {
            if (temp->right_thread == 0) {
                temp = temp->right;
            }
            else {
                break;
            }
        }
    }
    if (data < temp->data) {
        new_node->left = temp->left;
        new_node->right = temp;

        temp->left_thread = 0;
        temp->left = new_node;            
    }
    else {
        new_node->right = temp->right;
        new_node->left = temp;

        temp->right_thread = 0;
        temp->right = new_node;   
    }

}

void thread_inorder(Tree *tree) {
    Node *temp = tree->root;

    if (temp == NULL) {
        printf("Empty tree\n");
        return;
    }

    // Go to leftmost node
    while (temp->left_thread == 0) {
        temp = temp->left;
    }

    // Print inorder successors
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = inorder_successor(temp);
    }

}

Node *inorder_successor(Node *root) {
    if (root == NULL) {
        return NULL;
    }
    
    if (root->right_thread == 1) {
        root = root->right;
    }
    else {
        root = root->right;
        while (root->left != NULL && root->left_thread == 0) {
            root = root->left;
        }
    }
    return root;
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
    if (root->left != NULL && root->left_thread == 0) {
        destroy_leaves(root->left);
    }

    if (root->right != NULL && root->right_thread == 0) {
        destroy_leaves(root->right);
    }
}

Node *create_node(int data) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    new_node->left_thread = 1;
    new_node->right_thread = 1;
    return new_node;
}

Tree *initialise_tree() {
    Tree *new_tree = (Tree *)malloc(sizeof(Tree));
    new_tree->root = NULL;
    return new_tree;
}
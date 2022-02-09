/*
Non-linear data structure

Terminology:
Node - parent or offspring
Nodes can be siblings

Strictly binary tree: 2 or 0 children
Fully binary: All leaf nodes at same level

2^(d+1) - 1 nodes in fully binary tree

Complete binary tree (not fully) - adding to left
Used for creating heaps
Left complete
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *left, *right;
} Node;

typedef struct tree {
    Node *root;
} Tree;

// Helper functions
Node *create_node(int);
Tree *initialise_tree(void);
void destroy_tree(Tree *);
void destroy_leaves(Node *);

// Tree level traversals
void tree_preorder(Tree *);
void tree_inorder(Tree *);
void tree_postorder(Tree *);

// Recursive functions for traversal from Node
void preorder_leaves(Node *);
void inorder_leaves(Node *);
void postorder_leaves(Node *);

// Insert values
void lex_insert(Tree *, int);
void lex_insert_leaf(Node *, int data);

// Find the minimum value
int min_val(Tree *);
int min_val_leaves(Node *);

// Find the maximum value
int max_val(Tree *);
int max_val_leaves(Node *);

// Number of nodes
int no_of_nodes(Tree *);
int no_of_nodes_leaves(Node *);

// Number of leaf nodes
int no_of_leaf_nodes_leaves(Node *);
int no_of_leaf_nodes(Tree *);

// Delete node
void delete_node(Tree *, int);

int main() {
    int choice;
    Tree *binary_tree = initialise_tree();

    do {
        printf("\n\nMAIN MENU\n\n");
        printf("1. Insert an element lexically\n");
        printf("2. Delete an element\n");
        printf("3. Preorder\n");
        printf("4. Inorder\n");
        printf("5. Postorder\n");
        printf("6. Minimum value\n");
        printf("7. Maximum value\n");
        printf("8. Number of nodes\n");
        printf("9. Number of leaf nodes\n");
        printf("10. Exit\n");

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
                printf("Enter value to delete: ");
                scanf("%d", &data);
                delete_node(binary_tree, data);
                break;
            }
            case 3: {
                tree_preorder(binary_tree);
                break;
            }
            case 4: {
                tree_inorder(binary_tree);
                break;
            }
            case 5: {
                tree_postorder(binary_tree);
                break;
            }
            case 6: {
                int x = min_val(binary_tree);
                printf("Minimum: %d\n", x);
                break;
                
            }
            case 7: {
                int x = max_val(binary_tree);
                printf("Maximum: %d\n", x);
                break;
            }
            case 8: {
                int x = no_of_nodes(binary_tree);
                printf("Number of nodes: %d\n", x);
                break;
            }
            case 9: {
                int x = no_of_leaf_nodes(binary_tree);
                printf("Number of leaf nodes: %d\n", x);
                break;
            }
            case 10: {
                destroy_tree(binary_tree);
                return 0;
            }
        }

    } while (choice != 10);
    destroy_tree(binary_tree);
    return 0;
}

void delete_node(Tree *tree, int value) {
    Node *temp = tree->root, *parent = NULL, *grandchild = NULL, *inorder_suc = NULL;

    // Search for a given node in a tree
    while (temp != NULL && temp->data != value) {

        // if value is greater than root node
        if (value > temp->data) {
            parent = temp;
            temp = temp->right;
        }

        // if value is less than root node
        else if (value < temp->data) {
            parent = temp;
            temp = temp->left;
        }
    }

    // value not found in tree
    if (temp == NULL) {
        printf("%d is not in the tree\n", value);
        return;
    }

    // temp has only one child (right)
    else if (temp->left == NULL) {
        grandchild = temp->right;
    }

    // temp has only one child (left)
    else if (temp->right == NULL) {
        grandchild = temp->left;
    }
        
    // temp has two children nodes
    else {
        // Find the inorder successor (next number in ascending 
        // order). It will be the min of the right subtree
        inorder_suc = temp->right;

        while (inorder_suc->left != NULL) {
            inorder_suc = inorder_suc->left;
        }

        // Once found, the left subtree of temp gets assigned 
        // to the inorder successor of temp

        inorder_suc->left = temp->left;

        // grandchild becomes temp->right
        grandchild = temp->right;
    }

    // Attach grandchild

    // If root node is being deleted
    if (parent == NULL) {
        tree->root = grandchild;
    }
    else if (temp == parent->right) {
        parent->right = grandchild;
    }
    else if (temp == parent->left) {
        parent->left = grandchild;
    }
    
    // Delete temp
    free(temp);
}

int no_of_leaf_nodes(Tree *tree) {
    if (tree->root == NULL) {
        return 0;
    }
    return no_of_leaf_nodes_leaves(tree->root);
}

int no_of_leaf_nodes_leaves(Node *root) {
    if (root == NULL) {
        return 0;
    }
    if (root->left == NULL && root->right == NULL) {
        return 1;
    }
    return no_of_leaf_nodes_leaves(root->left) + no_of_leaf_nodes_leaves(root->right);
}

int no_of_nodes(Tree *tree) {
    if (tree->root == NULL) {
        return 0;
    }
    return no_of_nodes_leaves(tree->root);
}

int no_of_nodes_leaves(Node *root) {
    if (root == NULL) {
        return 0;
    } 
    return 1 + no_of_nodes_leaves(root->left) + no_of_nodes_leaves(root->right);
}

int min_val(Tree *tree) {
    if (tree->root == NULL) {
        return -1;
    }
    return min_val_leaves(tree->root);
}   

int min_val_leaves(Node *root) {
    if (root->left == NULL) {
        return root->data;
    }
    return min_val_leaves(root->left);
}

int max_val(Tree *tree) {
    if (tree->root == NULL) {
        return -1;
    }
    return max_val_leaves(tree->root);
}

int max_val_leaves(Node *root) {
    if (root->right == NULL) {
        return root->data;
    }
    return max_val_leaves(root->right);
}

void lex_insert(Tree *tree, int data) {
    
    if (tree->root == NULL) {
        Node *new_node = create_node(data);
        tree->root = new_node;
        return;
    }

    lex_insert_leaf(tree->root, data);
}


void lex_insert_leaf(Node *root, int data) {
    if (data < root->data) {
        if (root->left == NULL) {
            Node *new_node = create_node(data);
            root->left = new_node;
        }
        else {
            lex_insert_leaf(root->left, data);
        }
    }
    else {
        if (root->right == NULL) {
            Node *new_node = create_node(data);
            root->right = new_node;
        }
        else {
            lex_insert_leaf(root->right, data);
        }
    }
}


void tree_preorder(Tree *tree) {
    preorder_leaves(tree->root);
    printf("\n");
}

void preorder_leaves(Node *root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder_leaves(root->left);
        preorder_leaves(root->right);
    }
}

void tree_inorder(Tree *tree) {
    inorder_leaves(tree->root);
    printf("\n");
}

void inorder_leaves(Node *root) {
    if (root != NULL) {
        inorder_leaves(root->left);
        printf("%d ", root->data);
        inorder_leaves(root->right);
    }
}

void tree_postorder(Tree *tree) {
    postorder_leaves(tree->root);
    printf("\n");
}

void postorder_leaves(Node *root) {
    if (root != NULL) {
        postorder_leaves(root->left);
        postorder_leaves(root->right);
        printf("%d ", root->data);
    }
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

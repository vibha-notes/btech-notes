#include <stdio.h>
#include <stdlib.h>

#define TREE_SIZE 40


void bst_insert(int *, int);

// Traversal
void bst_preorder(int *);
void bst_inorder(int *);
void bst_postorder(int *);

// Traversal helpers
void bst_preorder_helper(int *, int);
void bst_inorder_helper(int *, int);
void bst_postorder_helper(int *, int);

// Helper functions
void bst_initialise(int *);

int main() {
    int choice;
    int binary_tree[TREE_SIZE];

    bst_initialise(binary_tree);

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
                bst_insert(binary_tree, data);
                break;
            }
            case 2: {
                printf("Enter value to delete: ");
                scanf("%d", &data);
                // delete_node(binary_tree, data);
                break;
            }
            case 3: {
                bst_preorder(binary_tree);
                break;
            }
            case 4: {
                bst_inorder(binary_tree);
                break;
            }
            case 5: {
                bst_postorder(binary_tree);
                break;
            }
            case 6: {
                // int x = min_val(binary_tree);
                // printf("Minimum: %d\n", x);
                break;
                
            }
            case 7: {
                // int x = max_val(binary_tree);
                // printf("Maximum: %d\n", x);
                break;
            }
            case 8: {
                // int x = no_of_nodes(binary_tree);
                // printf("Number of nodes: %d\n", x);
                break;
            }
            case 9: {
                // int x = no_of_leaf_nodes(binary_tree);
                // printf("Number of leaf nodes: %d\n", x);
                break;
            }
            case 10: {
                return 0;
            }
        }

    } while (choice != 10);
    return 0;
}


void bst_initialise(int *bst) {
    for (int i = 0; i < TREE_SIZE; ++i) {
        bst[i] = 0;
    }
}

void bst_insert(int *bst, int data) {
    int i = 0;

    // Empty tree
    if (bst[i] == 0) {
        bst[i] = data;
    }

    // Tree not empty
    else {
        while (i < TREE_SIZE && bst[i] != 0) {
            if (data < bst[i]) {
                i = 2*i + 1;
            }
            else {
                i = 2*i + 2;
            }
        }
        if (i >= TREE_SIZE) {
            printf("Tree is full\n");
            return;
        }
        bst[i] = data;
    }
}

void bst_preorder(int *bst) {
    bst_preorder_helper(bst, 0);
}

void bst_preorder_helper(int *bst, int i) {
    if (bst[i] != 0) {
        printf("%d ", bst[i]);
        bst_preorder_helper(bst, 2*i+1);
        bst_preorder_helper(bst, 2*i+2);
    }
}

void bst_inorder(int *bst) {
    bst_inorder_helper(bst, 0);
}

void bst_inorder_helper(int *bst, int i) {
    if (bst[i] != 0) {
        bst_inorder_helper(bst, 2*i+1);
        printf("%d ", bst[i]);
        bst_inorder_helper(bst, 2*i+2);
    }
}

void bst_postorder(int *bst) {
    bst_postorder_helper(bst, 0);
}

void bst_postorder_helper(int *bst, int i) {
    if (bst[i] != 0) {
        bst_postorder_helper(bst, 2*i+1);
        bst_postorder_helper(bst, 2*i+2);
        printf("%d ", bst[i]);
    }
}

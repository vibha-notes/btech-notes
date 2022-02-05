#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

// Column node structure
typedef struct col_node {
    int col;
    int data;
    struct col_node *next_col;
} ColNode;

// Row node structure
typedef struct row_node {
    int row;
    struct col_node *next_col;
    struct row_node *next_row;
} RowNode;

RowNode *create_multi_list(int [][SIZE], int, int);
RowNode *insert_into_list(int, RowNode *, int, int);
RowNode *create_row(int);
ColNode *create_col(int, int);
void display(RowNode *top);

int main() {
    int mat[SIZE][SIZE], rows, cols;

    printf("Enter order of matrix (rows, columns): ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements:\n");

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &mat[i][j]);
        }
    }

    RowNode *top = create_multi_list(mat, rows, cols);
    display(top);
    return 0;
}

RowNode *create_row(int row) {
    RowNode *new_top = (RowNode *)malloc(sizeof(RowNode));
    new_top->next_col = NULL;
    new_top->next_row = NULL;
    new_top->row = row;
    return new_top;
}

ColNode *create_col(int col, int data) {
    ColNode *new_col = (ColNode *)malloc(sizeof(ColNode));
    new_col->col = col;
    new_col->data = data;
    new_col->next_col = NULL;
    return new_col;
}

// Create a multi list from matrix
RowNode *create_multi_list(int mat [][SIZE], int rows, int cols) {
    RowNode *top_row = create_row(0);

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (mat[i][j] != 0) {
                top_row = insert_into_list(mat[i][j], top_row, i, j);
            }
        }
    }
    return top_row;
}

// Insert a non-zero element into the multilist
RowNode *insert_into_list(int el, RowNode *top, int row, int col) {
    RowNode *trav_row = top, *prev = NULL, *new_row = NULL;

    // Find the row to insert in
    while (trav_row != NULL && trav_row->row != row) {
        prev = trav_row;
        trav_row = trav_row->next_row;
    }

    // If row not yet created
    if (trav_row == NULL) {

        new_row = create_row(row);
        new_row->next_col = create_col(col, el);
        prev->next_row = new_row;
    }

    // If row exists
    else {
        ColNode *trav_col = trav_row->next_col, *new_col;
        
        // If no columns yet
        if (trav_col == NULL) {
            new_col = create_col(col, el);
            trav_row->next_col = new_col;
        }

        // If columns exist
        else {

            // Find last column
            while (trav_col->next_col != NULL) {
                trav_col = trav_col->next_col;
            }
            new_col = create_col(col, el);
            trav_col->next_col = new_col;
        }
        
    }
    return top;
}

void display(RowNode *top) {
    ColNode *trav_col = NULL;
    while (top != NULL) {
        trav_col = top->next_col;
        printf("Row %d\n", top->row);
        while (trav_col != NULL) {
            printf("column %d: %d->", trav_col->col, trav_col->data);
            trav_col = trav_col->next_col;
        }
        printf("NULL");
        top = top->next_row;
        printf("\n\n");
    }
}
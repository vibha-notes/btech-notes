// Ordered insertion
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *prev, *next;
} Node;

typedef struct list {
    Node* head;
    int no_of_elements;
} List;

List* init_list();
void display(List*);
void destroy_list(List*);
void ordered_insert(List*, int);
void delete_val(List*, int);

int main() {
    List *list = NULL;

    list = init_list();
    

    int ch;
    int data;

    while (1) {
        printf("\n\nMAIN MENU\n\n");
        printf("1. Insert element in ascending order\n"); 
        printf("2. Delete first occurance of value\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("\nYour choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: {
                // Ordered insertion
                printf("Enter number: ");
                scanf("%d", &data);
                ordered_insert(list, data);
                display(list);
                break;
            }
            
            case 2: {
                // Delete val
                int val;
                printf("Enter value: ");
                scanf("%d", &val);
                delete_val(list, val);
                display(list);
                break;
            }
            case 3: {
                // Display
                display(list);
                break;
            }
            case 4: {
                // Exit
                destroy_list(list);
                return 0;
            }
            default: {
                printf("Invalid input\n");
                continue;
            }
        }
    }
    destroy_list(list);
    return 0;
}

List* init_list() {
    List *list = (List*) malloc(sizeof(List));
    list->head = NULL;
    list->no_of_elements = 0;
    return list;
}

void destroy_list(List *list) {
    Node *temp = list->head, *to_delete = NULL;

    if (list == NULL) {
        return;
    }

    while (temp != NULL) {
        if (to_delete != NULL) {
            free(to_delete);
        } 
        to_delete = temp;
        temp = temp->next;
        
    }

    if (list != NULL) {
        free(list);
    }

}

void insert_pos(List *list, int pos, int val) {
    Node *traverse = list->head;
    Node* new_node = NULL;

    // List is empty
    if (traverse == NULL) {
        new_node = (Node*) malloc(sizeof(Node));
        new_node->data = val;
        new_node->next = NULL;
        new_node->prev = NULL;
        list->head = new_node;
        ++list->no_of_elements;
        return;
    }
    int counter = 1;

    while (traverse != NULL) {
        // Position found, insert after
        if (pos == counter) {
            new_node = (Node*) malloc(sizeof(Node));
            new_node->data = val;

            // Set next and next's prev
            new_node->next = traverse->next;
            if (traverse->next != NULL) {
                (traverse->next)->prev = new_node;
            }
            
            // Set prev and prev's next
            traverse->next = new_node;
            new_node->prev = traverse;
            ++list->no_of_elements;
            return;

        }
        traverse = traverse->next;
        ++counter;
    }
}

void ordered_insert(List* list, int val) {
    Node *traverse = list->head;

    // Create new node
    Node *new_node = (Node*) malloc(sizeof(Node));
    new_node->next = NULL;
    new_node->prev = NULL;
    new_node->data = val;
    ++list->no_of_elements;

    // If list is empty
    if (traverse == NULL) {
        list->head = new_node;
        return;
    }

    while (val > traverse->data){
        if (traverse->next == NULL) {
            new_node->prev = traverse;
            traverse->next = new_node;
            new_node->next = NULL;
            return;
        }
        traverse = traverse->next;
    }

    // Insert before traverse

    // If not before the first node
    if (traverse->prev != NULL) {
        new_node->prev = traverse->prev;
        traverse->prev->next = new_node;
        new_node->next = traverse;
        traverse->prev = new_node;
    }
    // If before first node
    else {
        new_node->prev = NULL;
        new_node->next = traverse;
        traverse->prev = new_node;
        list->head = new_node;
    }
}

void delete_val(List *list, int val) {
    // List is empty
    if (list->head == NULL) {
        return;
    }

    Node *traverse = list->head;
    Node* to_del = NULL;


    while (traverse != NULL) {
        // Value found, delete
        if (val == traverse->data) {
            to_del = traverse;

            // If not first node
            if (traverse->prev != NULL) {
                traverse->prev->next = traverse->next;
            }
            // First node
            else {
                list->head = list->head->next;
            }
            // If not last node
            if (traverse->next != NULL) {
                traverse->next->prev = traverse->prev;
            }
            
            free(to_del);
            --list->no_of_elements;
            return;

        }
        traverse = traverse->next;
    }
}

void display(List *list) {
    Node *traverse = list->head;

    while (traverse != NULL) {
        printf("%d->", traverse->data);
        traverse = traverse->next;
    }
    printf("NULL\n");
}
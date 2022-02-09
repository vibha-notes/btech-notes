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
void insert_front(List*, int);
void insert_end(List*, int);
void insert_pos(List*, int, int);
void delete_front(List*);
void delete_end(List*);
void delete_pos(List*, int);
void delete_val(List*, int);

int main() {
    List *list = NULL;

    list = init_list();
    
    int ch;
    int data;

    while (1) {
        printf("\n\nMAIN MENU\n\n");
        printf("1. Insert element to front\n");
        printf("2. Insert element to end\n");
        printf("3. Insert into any position\n");   
        printf("4. Delete element at front\n");
        printf("5. Delete element at end\n");
        printf("6. Delete element from any position\n"); 
        printf("7. Delete first occurance of value\n");
        printf("8. Display\n");
        printf("9. Exit\n");

        printf("\nYour choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: {
                // Front insert
                printf("Enter number: ");
                scanf("%d", &data);
                insert_front(list, data);
                display(list);
                break;
            }
            case 2: {
                // End insert
                printf("Enter number: ");
                scanf("%d", &data);
                insert_end(list, data);
                display(list);
                break;
            }
            case 3: {
                // Insert pos
                int pos, val;
                printf("Enter position (1-based index): ");
                scanf("%d", &pos);
                printf("Enter value: ");
                scanf("%d", &val);
                insert_pos(list, pos, val);
                display(list);
                break;
            }
            case 4: {
                // Delete front
                delete_front(list);
                display(list);
                break;
            }
            case 5: {
                // Delete end
                delete_end(list);
                display(list);
                break;
            }
            case 6: {
                // Delete pos
                int pos;
                printf("Enter position (1-based index): ");
                scanf("%d", &pos);
                delete_pos(list, pos);
                display(list);
                break;
            }
            case 7: {
                // Delete val
                int val;
                printf("Enter value: ");
                scanf("%d", &val);
                delete_val(list, val);
                display(list);
                break;
            }
            case 8: {
                // Display
                display(list);
                break;
            }
            case 9: {
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

    if (temp == NULL) {
        return;
    }

    do {
        to_delete = temp;
        if (to_delete != NULL) {
            free(to_delete);
        } 
        temp = temp->next;
    } while (temp != list->head);

    if (list != NULL) {
        free(list);
    }

}

void insert_front(List *list, int val) {
    Node *traverse = list->head;
    Node* new_node = NULL;

    new_node = (Node*) malloc(sizeof(Node));
    new_node->data = val;
    
    ++list->no_of_elements;

    // If not first node
    if (traverse != NULL) {
        new_node->next = traverse;
        

        // Find last node
        traverse = traverse->prev;
        
        new_node->prev = traverse;
        traverse->next = new_node;

        list->head->prev = new_node;
    }
    
    else {
        new_node->next = new_node;
        new_node->prev = new_node;
    }
    
    list->head = new_node;
    
}

void insert_end(List *list, int val) {
    // Same as front insert; do not change list head
    Node *traverse = list->head;
    Node* new_node = NULL;

    new_node = (Node*) malloc(sizeof(Node));
    new_node->data = val;
    
    ++list->no_of_elements;

    // If not first node
    if (traverse != NULL) {
        new_node->next = traverse;
        

        // Find last node
        traverse = traverse->prev;
        
        new_node->prev = traverse;
        traverse->next = new_node;

        list->head->prev = new_node;
    }
    
    else {
        new_node->next = new_node;
        new_node->prev = new_node;
        list->head = new_node;
    }
    
}   

void insert_pos(List *list, int pos, int val) {
    Node *traverse = list->head;
    Node* new_node = NULL;

    // List is empty
    if (traverse == NULL) {
        new_node = (Node*) malloc(sizeof(Node));
        new_node->data = val;
        new_node->next = new_node;
        new_node->prev = new_node;
        list->head = new_node;
        ++list->no_of_elements;
        return;
    }

    if (pos == 0) {
        insert_front(list, val);
    }

    int counter = 1;
    do {
        // Position found, insert after
        if (pos == counter) {
            new_node = (Node*) malloc(sizeof(Node));
            new_node->data = val;

            // Set next and next's prev
            new_node->next = traverse->next;
            (traverse->next)->prev = new_node;

            // Set prev and prev's next
            traverse->next = new_node;
            new_node->prev = traverse;
            ++list->no_of_elements;
            return;

        }
        traverse = traverse->next;
        ++counter;
    } while (traverse != list->head);
}

void delete_front(List *list) {
    if (list->head == NULL) {
        return;
    }

    Node* to_del = list->head;

    if (list->head->next != list->head) {
        // Correct prev and next links
        list->head->next->prev = list->head->prev;
        list->head->prev->next = list->head->next;
        list->head = list->head->next;
    }
    // Only one element
    else {
        list->head = NULL;
    }

    free(to_del);
    --list->no_of_elements;
}

void delete_end(List *list) {
    if (list->head == NULL) {
        return;
    }

    Node *to_del = list->head->prev;

    // More than one element
    if (list->head != list->head->prev) {
        // Correct prev and next links
        to_del->prev->next = list->head;
        list->head->prev = to_del->prev;
    }
    // Only one element
    else {
        list->head = NULL;
    }

    free(to_del);
    --list->no_of_elements;
    
}

void delete_pos(List *list, int pos) {
    // List is empty
    if (list->head == NULL) {
        return;
    }

    Node *traverse = list->head;
    Node* to_del = NULL;

    int counter = 1;

    do {
        // Position found, value
        if (pos == counter) {
            to_del = traverse;

            if (to_del == list->head) {
                list->head = list->head->next;
            }

            // If not only node
            if (traverse != traverse->next) {
                to_del->prev->next = to_del->next;
                to_del->next->prev = to_del->prev;
            }
            // Only node
            else {
                list->head = NULL;
            }
            
            free(to_del);
            --list->no_of_elements;
            return;

        }
        traverse = traverse->next;
        ++counter;
    } while (traverse != list->head);
}


void delete_val(List *list, int val) {
    // List is empty
    if (list->head == NULL) {
        return;
    }

    Node *traverse = list->head;
    Node* to_del = NULL;


    do {
        // Value found, delete
        if (val == traverse->data) {
            to_del = traverse;

            if (to_del == list->head) {
                list->head = list->head->next;
            }

            // If not only node
            if (traverse != traverse->next) {
                to_del->prev->next = to_del->next;
                to_del->next->prev = to_del->prev;
            }
            // Only node
            else {
                list->head = NULL;
            }
            
            free(to_del);
            --list->no_of_elements;
            return;

        }
        traverse = traverse->next;
    } while (traverse != list->head);
}

void display(List *list) {
    Node *traverse = list->head;

    if (traverse == NULL) {
        printf("END\n");
        return;
    }
    do {
        printf("%d->", traverse->data);
        traverse = traverse->next;
    } while (traverse != list->head);

    printf("END\n");
}
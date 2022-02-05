#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int info;
    struct node *next;
} Node;


Node* front_add(int, Node*);
Node* end_add(int, Node*);
Node* front_del(Node*);
Node* end_del(Node*);
Node* pos_add(int, int, Node*);
Node* pos_del(int, Node*);

void display(Node*);

int main() {
    Node *list = NULL;

    int ch;
    int data;
    while (1) {
        printf("\n\nMAIN MENU\n\n");
        printf("1. Insert element to front\n");
        printf("2. Insert element to end\n");
        printf("3. Delete element at front\n");
        printf("4. Delete element at end\n");
        printf("5. Insert into any position\n");   
        printf("6. Delete element from any position\n");   
        printf("7. Display\n");
        printf("8. Exit\n");

        printf("\nYour choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: {
                printf("Enter number: ");
                scanf("%d", &data);
                list = front_add(data, list);
                display(list);  
                break;
            }
            case 2: {
                printf("Enter number: ");
                scanf("%d", &data);
                list = end_add(data, list);
                display(list);  
                break;
            }
            case 3: {
                list = front_del(list);
                display(list);
                break;
            }
            case 4: {
                list = end_del(list);
                display(list);
                break;
            }
            case 5: {
                int pos, val;
                printf("Enter position (1-based index): ");
                scanf("%d", &pos);
                printf("Enter value: ");
                scanf("%d", &val);
                list = pos_add(pos, val, list);
                display(list);
                break;
            }
            case 6: {
                int pos, val;
                printf("Enter position (1-based index): ");
                scanf("%d", &pos);
                list = pos_del(pos, list);
                display(list);
                break;
            }
            case 7: {
                display(list);
                break;
            }
            case 8: {
                return 0;
            }
            default: {
                printf("Invalid input\n");
                continue;
            }
        }
    }

    return 0;
}

Node* front_del(Node* list) {
    if (list == NULL) {
        printf("List is empty\n");
        return list;
    }
    Node* temp = list;
    list = list->next;
    free(temp);
    return list;
}

Node* end_del(Node* list) {
    if (list == NULL) {
        printf("List is empty\n");
        return list;
    }

    Node *temp = list, *prev = NULL;
    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }
    if (prev != NULL) {
        prev->next = NULL;
        free(temp);
    }
    else {
        free(temp);
        list = NULL;
    }
    return list;
}

Node* pos_del(int pos, Node* list) {
    if (list == NULL) {
        printf("List is empty\n");
        return list;
    }

    Node *temp = list, *prev = NULL;

    if (pos == 1 || temp->next == NULL) {
        list = temp->next;
        free(temp);
        return list;
    }



    int counter = 1;
    while (temp != NULL) {

        // Delete node at pos
        if (counter == pos) {
            prev->next = temp->next;
            free(temp);
            return list;
        }

        prev = temp;
        temp = temp->next;
    
        ++counter;
    }

    printf("Position entered is out of bounds.\n");
    return list;

}

Node* front_add(int x, Node* list) {
    Node *temp;

    temp = (Node*) malloc(sizeof(Node));
    temp->info = x;
    temp->next = list;

    list = temp;
    return list;
}

Node* end_add(int x, Node* list) {
    Node *temp = list;

    if (temp == NULL) {
        temp = (Node*) malloc(sizeof(Node));
        temp->info = x;
        temp->next = NULL;
        list = temp;
    }
    else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        Node *old = temp;
        temp = (Node *) malloc(sizeof(Node));
        old->next = temp;
        temp->info = x;
        temp->next = NULL;
    }
    
    return list;
}

Node* pos_add(int pos, int val, Node* list) {
    
    // Empty list regardless of pos
    if (list == NULL) {
        Node* new_node = (Node *) malloc(sizeof(Node));
        new_node->info = val;
        new_node->next = NULL;
        list = new_node;
        return list;
    }

    Node *temp = list;
    int counter = 1;

    if (pos == 0) {
        Node* new_node = (Node *) malloc(sizeof(Node));
        new_node->info = val;
        new_node->next = temp;
        list = new_node;
        return list;
    }

    while (temp != NULL) {
        // Insert a node after pos
        if (counter == pos) {
            Node *new_node = (Node *) malloc(sizeof(Node));
            new_node->info = val;
            new_node->next = temp->next;
            temp->next = new_node;
            ++counter;
            return list;
        }   
        ++counter;
        temp = temp->next;
    }
    printf("Position entered is out of bounds.\n");
    return list;
}

void display(Node *list) {
    Node *temp = list;

    while (temp) {
        printf("%d->", temp->info);
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("NULL\n");
    }
}
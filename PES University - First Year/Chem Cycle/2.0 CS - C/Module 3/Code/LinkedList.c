/*				LinkedList.c					*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "s_list.h"

/* Create a new node */
S_LIST *CreateNode (void)
{
    S_LIST *p_node;

    p_node = (S_LIST *) malloc (sizeof (S_LIST));
    if (p_node == NULL)
    {
        printf ("malloc failed in create_node() function\n");
        exit (2);
    }
    printf ("Key in the data value:");
    scanf ("%d", &p_node->data);
    p_node -> next = NULL;
    return p_node;
}

// Insert a new node as the first member of the list
S_LIST *InsertBefore (S_LIST *p_head, S_LIST *p_new)
{
    if (p_head != NULL)
        p_new -> next = p_head;
    return p_new;
}

// Insert a new node at the end of the list
S_LIST *InsertAfter (S_LIST *p_head, S_LIST *p_new)
{
    S_LIST *p_ret_node = p_new;
    S_LIST *p_temp = p_head, *p_prev = p_head;

    if (p_head != NULL)
    {
        while (p_temp != NULL)
        {
            p_prev = p_temp;
            p_temp = p_temp -> next;
        }
        p_prev->next = p_new;
        p_ret_node = p_head;
    }
    return p_ret_node;
}

// Get the length (number of nodes) of the list
short GetListLength (S_LIST *p_head)
{
    short list_len = 0;
    S_LIST *ptemp;

    for (ptemp = p_head; ptemp != NULL; list_len ++)
        ptemp=ptemp->next;
    return list_len;
}

/* Insert a mode at the given position */
S_LIST *InsertAnyWhere (S_LIST *p_head, S_LIST *p_mem, short position)
{
    S_LIST *p_temp, *p_prev = NULL;
    short tmp;
    short l_len = GetListLength (p_head);
    
    if (position == 0)
    {
        p_mem->next = p_head;
        p_temp = p_mem;
    }
    else if (position == l_len)
    {
         for (p_temp = p_head; p_temp != NULL;
                  p_prev=p_temp,p_temp=p_temp->next);
         p_prev->next = p_mem;
         p_mem->next = NULL;
         p_temp = p_head;
    }

    else
    {
        for (p_temp = p_head, tmp = 0; p_temp != NULL;
                  tmp++, p_prev=p_temp,p_temp=p_temp->next)
        {
            if (tmp == position)
            {
                p_prev->next = p_mem;
                p_mem->next = p_temp;
                break;
            }
        }
        
        p_temp=p_head;
     }

    return p_temp;
}

// Delete the first node in the list
S_LIST *DeleteFirst (S_LIST *p_head)
{
    S_LIST *p_mem = NULL;

    if (p_head != NULL)
    {
        p_mem = p_head -> next;
        free (p_head);
    }
    return (p_mem);
}

// Deletes the last node in the list
S_LIST *DeleteLast (S_LIST *p_head)
{
    S_LIST *p_cur, *p_prev;

    if (p_head != NULL)
    {
        if (p_head->next == NULL) // This is the only node
        {
            free (p_head);
            p_head = NULL;
        }
        else
        {
            for (p_cur = p_head; p_cur->next != NULL; p_prev=p_cur,p_cur = p_cur->next)
                ;   
            p_prev -> next = NULL;        
            free (p_cur);
        }
    }
    return (p_head);
}


// Delete any node
S_LIST *DeleteAny (S_LIST *p_head, short node_num)
{
    S_LIST *p_temp = NULL, *p_prev=NULL;
    short tmp;
    short l_len = GetListLength (p_head);
    
    if (p_head != NULL)
    {
        // Deleting the first node or the only node 
        if (node_num == 0 || p_head->next == NULL)
        {
            p_temp=p_head->next;
            free (p_head);
        }
        else
        {
            for (p_temp = p_head, tmp = 0; p_temp->next != NULL && tmp < (node_num + 1);
                      	tmp++, p_prev=p_temp,p_temp=p_temp->next)
                ;
            if (p_temp->next == NULL)
            {
                p_prev->next = NULL;
                free (p_temp);
            }
            else
            {
                p_prev->next = p_temp->next;
                free (p_temp);
            }
            p_temp=p_head;
         }
    }
    return p_temp;
}


/* Free memory allocated to all the nodes of the list */
void DeleteList (S_LIST *p_head)
{
    S_LIST *p_mem = p_head;
    S_LIST *next;

    while (p_mem != NULL)  
    { 
       next = p_mem->next; 
       free(p_mem); 
       p_mem = next; 
    } 
}

/* Display the content of the list (student record details) */
void ShowList (S_LIST *p_head)
{
    S_LIST *p_ele;

    for (p_ele = p_head; p_ele != NULL; p_ele = p_ele -> next)
    {
        printf ("Data is %d\n", p_ele->data);
    }
}


/* Function to reverse the linked list */
S_LIST *ReverseList(S_LIST *p_head) 
{ 
    S_LIST *prev = NULL; 
    S_LIST *current = p_head; 
    S_LIST *next = NULL; 
    while (current != NULL) 
    { 
        // Store next 
        next = current->next; 
  
        // Reverse current node's pointer 
        current->next = prev; 
  
        // Move pointers one position ahead. 
        prev = current; 
        current = next; 
    } 
    p_head = prev; 
    return p_head;
}

/* function to swap data of two nodes first and second */
void SwapData(S_LIST *first, S_LIST *second) 
{ 
    int data = second->data;

    second->data = first->data;
    first->data = data;
} 


/* Bubble sort the given linked list */
void SortList(S_LIST *head) 
{ 
    int swapped; 
    S_LIST *ptr1 = head; 
    S_LIST *lptr = NULL; 
  
    do
    { 
        swapped = 0; 
        ptr1 = head; 
  
        while (ptr1->next != lptr) 
        { 
            if (ptr1->data > ptr1->next->data) 
            {  
                SwapData(ptr1, ptr1->next); 
                swapped = 1; 
            } 
            ptr1 = ptr1->next; 
        } 
        lptr = ptr1; 
    } 
    while (swapped); 
} 

bool KeySearch_Iterative (S_LIST *p_head, int key)
{
    /* Checks whether the key is present in linked list */
    S_LIST* current = p_head; 
    bool ret_val = false;
    while (current != NULL) 
    { 
        if (current->data == key)
        {
            ret_val = true;
            break;
        }
        current = current->next; 
    } 
    return ret_val;
} 

/* Checks whether the value key is present in linked list */
bool KeySearch_Recursive (S_LIST* head, int key) 
{ 
    // Base case 
    if (head == NULL) 
        return false; 
      
    // If key is present in current node, return true 
    if (head->data == key) 
        return true; 
  
    // Recur for remaining part of the list 
    return KeySearch_Recursive (head->next, key); 
} 

S_LIST *AddNode (S_LIST *head)
{
    S_LIST *tmp;
    char option;
    short position;

    printf ("Key in b - beginnning e - end a - anywhere:");
    scanf (" %c", &option);
    tmp = CreateNode ();
    if (tmp == NULL)
    {
        printf ("malloc failure\n");
        exit (3);
    }

    switch (option)
    {
        case 'b':
            head = InsertBefore (head, tmp);
        break;

        case 'e':  // At the end of the list
            head = InsertAfter (head, tmp);
        break;

        case 'a':  // Any position in the list
            printf ("Key in the position to insert the node:");
            scanf ("%d", &position);
            head = InsertAnyWhere (head, tmp, position); 
        break;

        default:
        break;
    }
    return head;
}

S_LIST *DeleteNode (S_LIST *head)
{
    char del_opt;
    short position;
    printf ("Key in f - first node l - last node n - any node:");
    scanf (" %c", &del_opt);
    switch (del_opt)
    {
        case 'f':
            head = DeleteFirst (head);
        break;

        case 'l':
            head = DeleteLast (head);
        break;

        case 'n':
            printf ("Key in the number of the node to delete:");
            scanf ("%d", &position);
            head = DeleteAny (head, position); 
        break;
        default:
            printf ("Wrong option keyed in\n");
        break;
    }
    return head;
}


int main (void)
{
    S_LIST *head = NULL;
    char choice;
    int key;
    
    while (1)
    {
        printf ("\nKey in your choice \na - add \nd - delete \nr - reverse \nl - list \no - sort \ns - search \nq - quit :");
        scanf (" %c", &choice);
        if (choice == 'q')
            break;
        switch (choice)
        {
            case 'a':	// Add a node
                head = AddNode (head);
            break;

            case 'd':  // Delete a node
                head = DeleteNode (head);
            break;

            case 'l':  // List the contents of all the nodes
                ShowList (head);
            break;

            case 'r':  // Reverse the nodes in the list
                head = ReverseList (head);
            break;
            
            case 'o':  // (Bubble) Sort  the nodes in the list
                SortList (head);
            break;

            case 's':  // Search for a given key
                printf ("Key to be searched:");
                scanf ("%d", &key);
                if (KeySearch_Recursive (head, key))
                    printf ("Key found in the list\n");
                else
                    printf ("Key not found\n");
            break;

            default:
                printf ("Unrecognized option\n");
            break;
        }
    }
    DeleteList (head);
    return 0;
}

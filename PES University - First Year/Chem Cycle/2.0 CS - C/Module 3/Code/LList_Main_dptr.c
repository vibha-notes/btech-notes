/*				LinkedList_Main.c					*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "s_list_dptr.h"

int main (void)
{
    S_LIST *head = NULL;
    char choice;
    int key;
    
    // Create the first node
    head = CreateNode ();
    while (1)
    {
        printf ("\nKey in your choice \na - add \nd - delete \nr - reverse \nl - list \no - sort \ns - search \nq - quit :");
        scanf (" %c", &choice);
        if (choice == 'q')
            break;
        switch (choice)
        {
            case 'a':	// Add a node
                AddNode (&head);
            break;

            case 'd':  // Delete a node
                DeleteNode (&head);
            break;

            case 'l':  // List the contents of all the nodes
                ShowList (head);
            break;

            case 'r':  // Reverse the nodes in the list
                ReverseList (&head);
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

/*		s_list.h			*/

typedef struct s_list
{
    int data;
    struct s_list *next;
} S_LIST;

/* Create a new node */
S_LIST *CreateNode (void);

// Insert a new node as the first member of the list
S_LIST *InsertBefore (S_LIST *, S_LIST *);
// Insert a new node at the end of the list
S_LIST *InsertAfter (S_LIST *, S_LIST *);

// Get the length (number of nodes) of the list
short GetListLength (S_LIST *);

/* Insert a mode at the given position */
S_LIST *InsertAnyWhere (S_LIST *, S_LIST *, short);

// Delete the first node in the list
S_LIST *DeleteFirst (S_LIST *);

// Deletes the last node in the list
S_LIST *DeleteLast (S_LIST *);

// Delete any node
S_LIST *DeleteAny (S_LIST *, short);

/* Free memory allocated to all the nodes of the list */
void DeleteList (S_LIST *);

/* Display the content of the list (student record details) */
void ShowList (S_LIST *);

/* Function to reverse the linked list */
S_LIST *ReverseList(S_LIST *);
/* function to swap data of two nodes first and second */
void SwapData(S_LIST *, S_LIST *);

/* Bubble sort the given linked list */
void SortList(S_LIST *);

bool KeySearch_Iterative (S_LIST *, int);

/* Checks whether the value key is present in linked list */
bool KeySearch_Recursive (S_LIST*, int);

S_LIST *AddNode (S_LIST *);

S_LIST *DeleteNode (S_LIST *);

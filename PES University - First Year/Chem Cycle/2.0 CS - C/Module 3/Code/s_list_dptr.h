/*		s_list_dptr.h			*/

typedef struct s_list
{
    int data;
    struct s_list *next;
} S_LIST;

/* Create a new node */
S_LIST *CreateNode (void);

// Get the length (number of nodes) of the list
short GetListLength (S_LIST *);

/* Free memory allocated to all the nodes of the list */
void DeleteList (S_LIST *);

/* Display the content of the list (student record details) */
void ShowList (S_LIST *);

/* Function to reverse the linked list */
void ReverseList(S_LIST **);

/* Bubble sort the given linked list */
void SortList(S_LIST *);

bool KeySearch_Iterative (S_LIST *, int);

/* Checks whether the value key is present in linked list */
bool KeySearch_Recursive (S_LIST*, int);

void AddNode (S_LIST **);

void DeleteNode (S_LIST **);
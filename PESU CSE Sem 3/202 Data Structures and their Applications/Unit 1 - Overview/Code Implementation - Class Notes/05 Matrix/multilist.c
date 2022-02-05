#include <stdio.h>
#include <stdlib.h>

struct col_node{
	int col;
	int data;
	struct col_node *next_col;
	};
	
struct row_node{
	int row;
	struct col_node *next_col;
	struct row_node *next_row;
};

struct row_node *create_rows(int);
void insert_list(struct row_node*, int, int);
void display(struct row_node*);

void main()
{
  int a[10][10];
  int i,j,row,col;
  struct row_node *first,*p;
  
  first = NULL;
  
  printf("Enter the order of the matrix..");
  scanf("%d %d", &row, &col);
  
  printf("Enter the elements of the matrix..");
  for(i=0; i<row; i++)
	  for(j=0;j<col;j++)
		  scanf("%d",&a[i][j]);
	  
// Create a multi list for the matrix.

first = create_rows(row);

p=first;

for(i=0;i<row;i++)
  {
	for(j=0;j<col;j++)
	{
		if(a[i][j]!=0)
			insert_list(p,j,a[i][j]);
		
	}
	p=p->next_row;
  }
  display(first);
}

struct row_node* create_rows(int r)
{int i;
 struct row_node *temp,*p,*q;
 p=NULL;q=NULL;
 
	for(i=0;i<r;i++)
	{
		temp=(struct row_node*)(malloc(sizeof(struct row_node)));
		temp->row=i;
		temp->next_row=NULL;
		temp->next_col=NULL;
		
		if(p==NULL){p=temp;
		            q=temp;
		           }
		else {
			q->next_row=temp;
			q=temp;
		}
		
	}
	return p; // return address of the first node
}

void insert_list(struct row_node *p, int col, int x)
{
	 struct col_node *q,*temp;
	
	 temp = (struct col_node *)(malloc(sizeof(struct col_node)));
	 temp->col = col;
	 temp->data = x;
	 temp->next_col = NULL;
	 
	 q=p->next_col;
	 
	 if(q==NULL)p->next_col=temp;
	 else{
		 while(q->next_col!=NULL)
			 q=q->next_col;
		 q->next_col = temp; 
	 }
}
    
void display(struct row_node *p)
{
	struct col_node *q;
	printf("\n");
	
	while(p!=NULL)
	{
		printf("Row - %d ," ,p->row);
		q=p->next_col;
		while(q!=NULL)
		{
		printf("col - %d",q->col);
		printf("%d\t",q->data);
		q=q->next_col;
		}
	 p=p->next_row;
	 printf("\n");
   }
}
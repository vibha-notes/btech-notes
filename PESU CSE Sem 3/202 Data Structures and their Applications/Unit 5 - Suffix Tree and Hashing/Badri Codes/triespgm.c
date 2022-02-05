// program on trie trees 
// insert strings and display the strings
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

struct trienode {
	struct trienode *child[255];
	int endofword;
};

struct stack{
	struct trienode *m;
	int index;
};

struct trienode *getnode();
void insert(struct trienode*, char *);
void display(struct trienode*);
void push(struct trienode *,int);
struct stack pop();
int check(struct trienode *);
int search(struct trienode *, char *);
void delete_trie(struct trienode *root, char *key);

int length,top;
char word[100];  // made global variable then it is working.

struct stack s[255]; // stack 

void main()
{  char key[100];
	struct trienode *root;
	int ch,k;
	
	root=getnode();
	while(1)
	{
	printf("\n1. Insert..");
    printf("\n2. Display..");
    printf("\n3. Search..");
    printf("\n4. Delete..");

    scanf("%d",&ch);
    switch(ch)
    { 
	case 1: {
			   printf("Enter the string..");
			   scanf("%s",key);
			   insert(root, key);
			}break;
	case 2: {length=0;
			 printf("The strings stored in the trie are..");
			 display(root); 
			}break;
	case 3: {
			   printf("Enter the string for search ..");
			   scanf("%s",key);
			   k=search(root, key);
			   if(k)
				   printf("\n Word Found..");
			   else 
				   printf("\n Word Not Found..");
			}break;
	case 4: {
			printf("Enter the word for deletion..\n");
			scanf("%s",key);
			top=0;
			delete_trie(root,key);
			}break;
	default: exit(0);

    }
  }
}

struct trienode* getnode()
{
  struct trienode* temp;
  int i;	
  temp=(struct trienode *)(malloc(sizeof( struct trienode)));
  for(i=0;i<255;i++)
    temp->child[i]=NULL;
  temp->endofword=0;
  return temp;
}

void insert(struct trienode* root, char *key)
{
  struct trienode *curr;
  int i, index;
  
  curr = root;
  for(i=0;key[i]!='\0';i++)
   { index=key[i];
	  if(curr->child[index]==NULL)
		curr->child[index]=getnode();
	curr=curr->child[index];
   }
  curr->endofword=1;	
}

void display(struct trienode *curr)
{int i,j;

	for(i=0;i<255;i++)
	{
		if(curr->child[i]!=NULL)
		{
			word[length++]=i;
			if(curr->child[i]->endofword==1)
			{
				//print the word
				printf("\n");
				for(j=0;j<length;j++)
					printf("%c",word[j]);
			}
			display(curr->child[i]);
		}
	}
	length--;
	return;
}

void push(struct trienode *x,int k)
{
	++top;
	s[top].m=x;
	s[top].index=k;
}

struct stack pop()
{ 
	struct stack temp;
	temp=s[top--];
	return temp;
}

int search(struct trienode * root, char *key)
{
 int i,index;	
 struct trienode *curr;
 curr=root;
  for(i=0;key[i]!='\0';i++)
   { index=key[i];
	  if(curr->child[index]==NULL)
		  return 0;
	  curr=curr->child[index];
   }
   if(curr->endofword==1)
	   return 1;
   return 0;
}

void delete_trie(struct trienode *root,char *key)
{
 int i,k,index;	
 struct trienode *curr;
 struct stack x;
 
 curr =root;
 for(i=0;key[i]!='\0';i++)
   { index=key[i];
	  if(curr->child[index]==NULL)
	  {
		 printf("Word not found..");
         return;		 
	  }
	  push(curr,index);
      curr=curr->child[index];
	}
	curr->endofword=0;
	push(curr,-1);
	
	while(1)
	{
		x=pop();
		if(x.index!=-1)
			x.m->child[x.index]=NULL;
		if(x.m==root)//if root
		break;
		k=check(x.m);
		if((k>=1)|| (x.m->endofword==1))break;
		else free(x.m);
	}
	return;
}	

int check(struct trienode *x)
{
	int i,count=0;
	for(i=0;i<255;i++)
	{
		if(x->child[i]!=NULL) count++;
	}
	return count;
}
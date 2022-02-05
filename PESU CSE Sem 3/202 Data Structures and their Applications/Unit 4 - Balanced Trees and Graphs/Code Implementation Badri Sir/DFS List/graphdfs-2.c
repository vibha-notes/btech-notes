// creation of a graph using adjacency list 

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

void creategraph(struct node **, int);
void printgraph(struct node **, int);
int indegree(struct node **,int,int);
int outdegree(struct node **,int,int);
void insert(struct node **,int,int);

//void dfs(int );

void main()
{int ch,v,i,n;
	printf("Enter the number of nodes or vertices..");
	scanf("%d",&n);
	creategraph();
	printf("The graph is..");
	printgraph();
	
	while(1)
	{
	printf("Enter 1-> indegree\n\t2->outdegree\n\t3->display\n\t4->Exit");
    switch(ch)
	{
case 1:{		
	printf("Enter the vertex to find the indegree ..");
    scanf("%d",&v);
	printf("The indegree is %d",indegree(v));
	}break;
case 2: {
	printf("Enter the vertex to find the indegree ..");
    scanf("%d",&v);
	printf("The indegree is %d",outdegree(v));
	}break;
case 3:{printgraph(struct node **, int);}break;
default: exit(0);
	}
}

void creategraph(struct node **a,int n)
{
 int i,j;
  for(i=1;i<=n;i++)
	  a[i]=NULL;
  
  while(1)
  {
  printf("Enter the source and destination ..");
  scanf("%d %d",&i,&j);
	
  if((i==-9)&&(j==-9))break;
  	insert(a,i,j);
    }
}

void printgraph()
{int i,j;
  for(i=1;i<n;i++)
	  for(j=1;j<n;j++)
		  printf("a[%d][%d] = %d\t ",i,j,a[i][j]);
	  printf("\n");
}

int indegree(int v)
{ int i, count=0;
	for(i=1;i<n;i++)
		if(a[i][v]==1) count++;
	return count;
	
}

int outdegree(int v)
{ int i, count=0;
	for(i=0;i<n;i++)
		if(a[v][i]==1) count++;
	return count;
}

void insert(struct node **a,int i, int j)
{  
	// node created with j as destination node value
	// source vertex is i
	struct node *temp, *p;
	temp->data = j;
	temp->next=NULL;
	
	p=a[i];
	if(p==NULL)a[i]=temp;
	else{
		while(p->next!=NULL)
			p=p->next;
		p->next=temp;
	}
	
}




/*graph traversal technique
void dfs(int v)
{
	int i;
	visit[v]=1; // visited v node.
	printf("%d",v);
	
	for(i=1;i<=n;i++)
		if((a[v][i]==1)&& visit[i]==0)
			dfs(i);
}
	*/
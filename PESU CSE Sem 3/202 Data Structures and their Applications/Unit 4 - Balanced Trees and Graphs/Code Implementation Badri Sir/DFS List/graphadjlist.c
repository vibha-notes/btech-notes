// creation of a graph using adjacency list 

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

int visit[100];
void creategraph(struct node **, int);
void printgraph(struct node **, int);
int indegree(struct node **,int,int);
int outdegree(struct node **,int,int);
void insert(struct node **,int,int);

void dfs(struct node **,int,int);

void main()
{int ch,v,i,n;
 struct node *a[100];
	printf("Enter the number of nodes or vertices..");
	scanf("%d",&n);
	creategraph(a,n);
	printf("The graph is..");
	printgraph(a,n);
	
	while(1)
	{
	printf("Enter 1-> indegree\n\t2->outdegree\n\t3->display\n\t4->Exit");
	scanf("%d", &ch);
    switch(ch)
	{
    case 1:{		
	printf("Enter the vertex to find the indegree ..");
    scanf("%d",&v);
	printf("The indegree is %d",indegree(a,n,v));
	}break;
    case 2: {
	printf("Enter the vertex to find the outdegree ..");
    scanf("%d",&v);
	printf("The outdegree is %d",outdegree(a,n,v));
	}break;
    case 3:{printgraph(a,n);}break;
    
	case 4: {printf("Enter the start vertex..");
			 scanf("%d",&v);
  
			 for(int j=1;j<=100;j++)
	          visit[j]=0;
  
             dfs(a,n,v);
	} break;
	default: exit(0);
	}
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
	
  if((i==0)&&(j==0))break;
  	insert(a,i,j);
    }
}

void printgraph(struct node **a, int n)
{int i;
 struct node *temp;
  for(i=1;i<=n;i++)
  { printf("%d ->",i);
      temp=a[i];
	  while(temp!=NULL)
	  {printf("%d , \t",temp->data);
	   temp=temp->next;
	  }
	  printf("\n");
   }
}


int indegree(struct node **a,int n,int v)
{ 
struct node *temp;
int i, count=0;
	for(i=1;i<=n;i++)
	{
	temp=a[i];
    while(temp!=NULL)
	{
		if(temp->data==v) count++;
		temp=temp->next;
	}
	}
	return count;
}

int outdegree(struct node **a,int n,int v)
{struct node *temp; 
 int i, count=0;
	temp=a[v];
    while(temp!=NULL)
	{
	    count++;
		temp=temp->next;
	}
	return count;
}

void insert(struct node **a,int i, int j)
{   
	// node created with j as destination node value
	// source vertex is i
	
	struct node *temp, *p;
	temp=(struct node *)(malloc(sizeof(struct node)));
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


//graph traversal technique
void dfs(struct node **a,int n,int v)
{
	int i;
	struct node *temp;
	visit[v]=1; // visited v node.
	printf("%d",v);
	
	for(temp=a[v];temp!=NULL;temp=temp->next)
	{ i=temp->data;
      if( visit[i]==0)
			dfs(a,n,i);
    }
}
	
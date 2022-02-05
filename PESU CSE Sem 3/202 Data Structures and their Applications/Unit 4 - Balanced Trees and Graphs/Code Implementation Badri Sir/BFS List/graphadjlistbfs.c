// creation of a graph using adjacency list 

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

int visit[100];

void creategraph();
void printgraph();

void insert(int, int);

void bfs(int);
void qinsert(int);
int qdelete();
int qisempty();

struct node *a[100];
int q[20];
int n,f,r;

void main()
{
	int v,i;
    f=-1;r=-1;
	printf("Enter the number of nodes or vertices..");
	scanf("%d",&n);
	creategraph();
	printf("The graph is..");
	printgraph();
	
	printf("Enter the start vertex..");
			 scanf("%d",&v);
  
			bfs(v);
}

void creategraph()
{
 int i,j;

  for(i=1;i<=n;i++)
	  a[i]=NULL;
  
  while(1)
  {
  printf("Enter the source and destination ..");
  scanf("%d %d",&i,&j);
	
  if((i==0)&&(j==0))break;
  	insert(i,j);
    }
}

void printgraph()
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




void qinsert(int v)
{   
    if((f==-1)&&(r==-1)) f++;
    	q[++r]=v;
		
}

int qdelete()
{
	int w;
	w=q[f];
	if(f==r) {f=-1;r=-1;}
	else f++;
	return w;
}

int qisempty()
{
	if((f==-1) && (r==-1))return 1;
	else return 0;
}


void insert(int i, int j)
{   
 // insert node at the front of the list
    struct node *temp;
    temp=(struct node *)(malloc(sizeof(struct node)));
    temp->data = j;
    temp->next= a[i];
    
    a[i]=temp;
}	



//graph traversal technique

void bfs(int v)
{
	struct node *p;
	int w,j;
	
	visit[v]=1;
	printf("%d",v);
	qinsert(v);
	
	while(!qisempty())
	{
		w=qdelete();
		for(p=a[w];p!=NULL;p=p->next)
		{
			j=p->data;
			if(visit[j]==0)
			{
				visit[j]=1;
				printf("%d",j);
				qinsert(j);
			}
		}
		
	}
	
}
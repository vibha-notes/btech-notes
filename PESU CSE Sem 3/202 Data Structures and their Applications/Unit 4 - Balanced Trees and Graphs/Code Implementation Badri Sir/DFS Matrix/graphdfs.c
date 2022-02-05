#include <stdio.h>

void creategraph();
void printgraph();
int indegree(int );
int outdegree(int);
void dfs(int );

int n,a[11][11],visit[11];

void main()
{int v,i;
	printf("Enter the number of nodes or vertices..");
	scanf("%d",&n);
	creategraph();
	printf("The graph is..");
	printgraph();
	
	printf("Enter the vertex to find the indegree ..");
    scanf("%d",&v);
	printf("The indegree is %d",indegree(v));
	
	printf("Enter the vertex to find the indegree ..");
    scanf("%d",&v);
	printf("The indegree is %d",outdegree(v));
	while(1)
	{
	for(i=0;i<n;i++)
    visit[i]=0;	

	printf("Enter the start vertex for traversal....");
	scanf("%d",&v);
	printf("The graph traversed using DFS is ....");
	dfs(v);
  }
}

void creategraph()
{
 int i,j;
  while(1)
  {
  printf("Enter the source and destination ..");
  scanf("%d %d",&i,&j);
	
  if((i==-9)&&(j==-9))break;
  	a[i][j]=1;
    }
}

void printgraph()
{int i,j;
  for(i=0;i<n;i++)
	  for(j=0;j<n;j++)
		  printf("a[%d][%d] = %d\t ",i,j,a[i][j]);
	  printf("\n");
}

int indegree(int v)
{ int i, count=0;
	for(i=0;i<n;i++)
		if(a[i][v]==1) count++;
	return count;
	
}

int outdegree(int v)
{ int i, count=0;
	for(i=0;i<n;i++)
		if(a[v][i]==1) count++;
	return count;
}
//graph traversal technique
void dfs(int v)
{
	int i;
	visit[v]=1; // visited v node.
	printf("%d",v);
	
	for(i=1;i<=n;i++)
		if((a[v][i]==1)&& visit[i]==0)
			dfs(i);
}
	
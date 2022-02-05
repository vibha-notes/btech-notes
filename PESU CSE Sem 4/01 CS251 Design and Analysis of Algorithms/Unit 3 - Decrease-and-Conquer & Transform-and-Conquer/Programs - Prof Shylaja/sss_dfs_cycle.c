#include<stdio.h>
void read(int adj[10][10],int n);
int dfs(int sv,int adj[10][10],int *visited,int n,int parent);
main()
{
 int adj[10][10];
 int visited[10]={0};
 int stack[20],a[20]={0};
  int n,i,k=0,m=0;

 printf("enter number of vertices");
 scanf("%d",&n);
 read(adj,n);
 
 
  printf("\n%d",dfs(i,adj,visited,n,-1));

  
  
}

void read(int adj[10][10],int n)
{ printf("enter the adj matrix");
  for(int i=0;i<n;i++)
   for(int j=0;j<n;j++)
    scanf("%d",&adj[i][j]);
 
}
int dfs(int sv,int adj[10][10],int *visited,int n,int parent)
{
  //static int m=0;
  //printf("%d",sv);
  visited[sv]=1;
  
  for(int i=0;i<n;i++)
   {if(adj[sv][i]) 
     {
       if(!visited[i])
        {
          if(dfs(i,adj,visited,n,sv)) return 1;}
       else
        {   
          if(i!=parent)
          return 1;
         }
     }
    }
  return 0;
}



#include<stdio.h>
#define MAX 5
void read_matrix(int adj[MAX][MAX],int n)
{
  printf("enter the adjacenct matrix");
 for(int i=0;i<n;i++)
 for(int j=0;j<n;j++)
  scanf("%d",&adj[i][j]);
}
void dfs(int sv,int adj[MAX][MAX],int visited[MAX],int n)
{
 visited[sv]=1;
 printf("%d",sv);
 for(int i=0;i<n;i++)
  {
    if(adj[sv][i] && !visited[i])
      dfs(i,adj,visited,n);
   }
}

int main()
{
 int adj[MAX][MAX];
 int visited[MAX]={0};
 int n,i;
  printf("enter the no. of vertices");
  scanf("%d",&n);
  read_matrix(adj,n);
  dfs(0,adj,visited,n);
}
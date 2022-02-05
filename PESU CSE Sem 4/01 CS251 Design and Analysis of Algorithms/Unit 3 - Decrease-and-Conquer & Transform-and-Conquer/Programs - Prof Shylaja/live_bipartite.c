#include<stdio.h>
#define MAX 5
int is_bipartite(int sv,int adj[MAX][MAX],int n,int visited[MAX],int color[MAX]);
void read_matrix(int adj[MAX][MAX],int n)
{printf("enter the adj matrix");
 for(int i=0;i<n;i++)
  for(int j=0;j<n;j++)
    scanf("%d",&adj[i][j]);
}
int is_bipartite(int sv,int adj[MAX][MAX],int n,int visited[MAX],int color[MAX])
{
 for(int i=0;i<n;i++)
   {
    if(adj[sv][i])
     {
        if(!visited[i])
         {
           visited[i]=1;
           color[i]=!color[sv];
           
           return (is_bipartite(i,adj,n,visited,color));
          }
        else
         {
          
          if(color[i]==color[sv])
             return 0;
         }
      }
}
    return 1;
}

    
int main()
{
 int adj[MAX][MAX];
 int n;
 int visited[MAX]={0};
 int color[MAX];
 printf("enter the n");
 scanf("%d",&n);
 read_matrix(adj,n);
 visited[0]=1;
 color[0]=0;//0-one color 
 printf("%d",is_bipartite(0,adj,n,visited,color));
 } 
#include<stdio.h>
#include<stdlib.h>
#define Max 20
void initializegraph(int graph[][Max],int n){
    printf("\n Enter the adjacency Matrix :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            scanf("%d", &graph[i][j]);
    }
}

void dfs(int v,int graph[][Max],int n,int visited[],int topoorder[],int stack[],int *index){
    int i;
    visited[v]=1;
    stack[v]=1;
    for(i=0;i<n;i++){
        if(graph[v][i] && !visited[i]){
            printf("\n %d  --%d", v, i);
            dfs(i, graph,n,visited,topoorder,stack,index);
            stack[i]=0;
            topoorder[*index]=i;
            (*index)++;
        }
        else if(graph[v][i] && visited[i] && stack[i]){
            printf("\n GRaph has a cycle and hence there is no solution");
            exit(1);
        }
    }
    
}
int main(){
    int graph[Max][Max], visited[Max],topoorder[Max],stack[Max];
    int i,n;
    int index=0;
    printf("\n Enter the number of vertices :\n");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        visited[i]=0;
        topoorder[i]=0;
        stack[i]=0;
    }
    initializegraph(graph,n);
    for(i=0;i<n;i++){
        if(visited[i]==0){
            dfs(i,graph,n,visited,topoorder,stack,&index);
            stack[i]=0;
            topoorder[index]=i;
            index++;
        }

    }
    printf("\n Topological order :\n");
    for(i=n-1;i>=0;i--)
        printf("%d  ", topoorder[i]);
    

}
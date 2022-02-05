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
void indegree(int graph[][Max], int n,int indeg[]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(graph[j][i])
                indeg[i]++;
        }
    }
}
void insert_queue(int queue[], int *front, int *rear, int vertex){
    if (*rear == Max-1)
                printf("\nQueue Overflow\n");
        else        {
            if (*front == -1)  /*If queue is initially empty */
                *front = 0;
            *rear = (*rear)+1;
            queue[*rear] = vertex ;
        }
}

int isEmpty_queue(int queue[],int *front,int *rear){
    if(*front == -1 || *front > *rear )
                return 1;
        else
                return 0;

}
int delete_queue(int queue[], int *front, int *rear){
        int del_item;
        if ((*front) == -1 || (*front) > (*rear)){
            printf("\nQueue Underflow\n");
            exit(1);
        }
        else{
            del_item = queue[*front];
            *front = (*front)+1;
            return del_item;
        }
}/*End of delete_queue() */

void toposort(int graph[][Max],int topoorder[],int indeg[],int n){
    int queue[Max],front=-1,rear=-1;
    int index=0;
    int v;
    for(int i=0;i<n;i++){
        if(indeg[i]==0){
            insert_queue(queue, &front, &rear, i);
        }
    }
    while(!isEmpty_queue(queue,&front,&rear)){
        v=delete_queue(queue,&front,&rear);
        topoorder[index]=v;
        printf("\n %d",v);
        index++;
        for(int i=0;i<n;i++){
            if (graph[v][i]==1){
                graph[v][i]=0;
                indeg[i]=indeg[i]-1;
                if(indeg[i]==0)
                    insert_queue(queue,&front,&rear,i);
            }
        }

    }
    if(index<n){

        printf("\n Graph has a cycle and hence no solution exists");
        exit(1);
    }

}
int main(){
    int graph[Max][Max], topoorder[Max],indeg[Max];;
    int i,n;
    int index=0;
    printf("\n Enter the number of vertices :\n");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        indeg[i]=0;
        topoorder[i]=0;
        
    }
    initializegraph(graph,n);
    indegree(graph, n,indeg);
    toposort(graph,topoorder,indeg,n);
    printf("\n Topological order :\n");
    for(i=0;i<n;i++)
        printf("%d  ",topoorder[i]);

}

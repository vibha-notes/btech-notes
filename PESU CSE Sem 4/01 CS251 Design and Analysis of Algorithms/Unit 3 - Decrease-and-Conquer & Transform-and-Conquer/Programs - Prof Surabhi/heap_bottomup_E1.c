#include<stdio.h>
#include<stdlib.h>
#define Max 20

void heapify(int heap[],int n){
    int i,j,k,v;
    int flag;
    for(i=n/2;i>=1;i--){
        k=i;
        v=heap[k];
        flag=0;
        while(flag==0 && 2*k<=n){
            j=2*k;
            if(j<n){
                if(heap[j]<heap[j+1])
                    j=j+1;

            }
            if(v>heap[j])
                flag=1;
            else{
                heap[k]=heap[j];
                k=j;
            }
        }
        heap[k]=v;
    }
}

int main(){
    int i,n;
    int heap[Max];
    printf("\n Enter the number of elements: \n");
    scanf("%d",&n);
    printf("\n Enter the elements: \n");
    for(i=1;i<=n;i++)
        scanf("%d", &heap[i]);
    heapify(heap,n);
    printf("\n Heap :\n");
    for(i=1;i<=n;i++)
        printf("%d ", heap[i]);
}


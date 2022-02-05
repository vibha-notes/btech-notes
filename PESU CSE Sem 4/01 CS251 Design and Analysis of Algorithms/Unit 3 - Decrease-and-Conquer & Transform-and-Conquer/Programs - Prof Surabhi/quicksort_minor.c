#include<stdio.h>
#include<stdlib.h>
#define Max 20
void swap(int *ele1,int *ele2){
    int temp;
    temp=*ele1;
    *ele1=*ele2;
    *ele2=temp;
}
int partition(int arr[],int l,int r){
    int p;
    int i,j;
    p=arr[l];
    i=l;
    j=r+1;
    do{
        do{
            i++;

        }while(arr[i]<p);
        do{
            j--;
        }while(arr[j]>p);
        swap(&arr[i],&arr[j]);
    }while(i<j);
    swap(&arr[i],&arr[j]);
    swap(&arr[l],&arr[j]);
    return j;
}
void quicksort(int arr[],int l,int r){
    int s;
    if(l<r){
        s=partition(arr,l,r);
        quicksort(arr,l,s-1);
        quicksort(arr,s+1,r);
    }
}

int main(){
    int arr[]={12,14,5,3,7,9,29,34,33};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("\n Given Array :\n");
    for(int i=0;i<size;i++)
        printf("%d  ",arr[i]);
    quicksort(arr,0,size-1);
    printf("\n Sorted Array :\n");
    for(int i=0;i<size;i++)
        printf("%d  ",arr[i]);

}

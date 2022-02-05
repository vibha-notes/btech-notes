#include<stdio.h>
#include<stdlib.h>
#define Max 20
void print(int arr[], int size){
    for(int i=0;i<size;i++)
        printf("%d  ", arr[i]);
}
void insertionsort(int arr[], int size){
    int i,j;
    int v;
    for(i=1;i<size;i++){
        v=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>v){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=v;
    }
}
int main(){
    int arr[]={67,45,1,78,34,23,89,33,25};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("\n Given Array : \n");
    print(arr,size);
    insertionsort(arr,size);
    printf("\n Sorted array : \n");
    print(arr,size);
}
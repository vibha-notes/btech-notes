#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define Max 20

void print(int arr[],int size){
    for(int i=0;i<size;i++)
        printf("%d  ", arr[i]);
    printf("\n");
}

void merge(int B[], int lsize, int C[], int rsize, int A[]){
    int i=0,j=0,k=0;
    
    
    while(i<lsize && j<rsize){
        if(B[i]<C[j]){
            A[k]=B[i];
            i++;
        }
        else{
            A[k]=C[j];
            j++;
        }
        k++;
    }
    if(i==lsize){
        for(;j<rsize;j++){
            A[k]=C[j];
            k++;
        }
    }
    else{
        for(;i<lsize;i++){
            A[k]=B[i];
            k++;
        }
    }
    print(A,(lsize+rsize));
}

 void mergesort(int arr[],int size){
     int B[Max],C[Max];
     int lsize,rsize;
     int i,k=0;
     if(size>1){
         lsize=floor(size/2);
         rsize=size-lsize;
         printf("r size %d %d %d \n ", size, rsize,ceil(size/2));
         for(i=0;i<lsize;i++)
            B[i]=arr[i];
         print(B,lsize);
         for(i=lsize;i<size;i++){
             C[k]=arr[i];
             k++;
         }
         print(C,rsize);
         mergesort(B,lsize);
         mergesort(C,rsize);
         merge(B,lsize,C,rsize,arr);
         print(arr,size);
     }
 }

int main(){
    int arr[]={12,11,5,34,14,8,45};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("\n Array Contents: \n");
    print(arr,size);
    mergesort(arr,size);
    //printf("\n The Sorted Array Contents :\n");
    //print(arr,size);
    
}
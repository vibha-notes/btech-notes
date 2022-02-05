//implement heap using top down approach
 #include<stdio.h>
  void top_heap(int *h, int n)  {
    int i,j,k,key;
    for(k=1;k<=n;k++){
     i=k;
     key=h[i];
     j=(i)/2;//get the parent

     while((i>1)&&(key>h[j])) {
       h[i]=h[j];//move the parent down
       i=j;
       j=(i)/2;//find the new parent     
      }
    h[i]=key;//insert key
    }
 }


  int main(){
    int h[100];//heap;
    int i,n;//no of elements
    printf("Enter the no of elements..\n");
    scanf("%d",&n);
    printf("Enter the elements..\n");
    for(i=1;i<=n;i++)
      scanf("%d",&h[i]);
    top_heap(h,n);
    printf("Heap using Top down approach ..\n");
    for(i=1;i<=n;i++)
      printf("%d ",h[i]);
  }


  















  
  

























      























 #include<stdio.h>
 //programs for demonstrating functions of heap
void heapify(int *h, int n){//n is the no of elements
  
   int i,j,key;
     //start with the root
     j=0;
     key=h[j];
     i=2*j+1;//get the left child
   
     while(i<=n){//if left child exists
     
      if((i+1)<=n){//check whether the right child exists       
      
        if(h[i+1]>h[i])
          i++;//get the position of the largest child
      }
      if(key<h[i]){//if key is less than the child node
      
        h[j]=h[i];//move child up
        j=i;
        i=2*j+1;//find the position of left child
      }
      else
        break;
     }
     h[j]=key;//insert the key at correct position
}

void top_heap(int *h, int n)  {
    int i,j,k,key;
    for(k=1;k<=n;k++){
     i=k;
     key=h[i];
     j=(i-1)/2;//get the parent

     while((i>0)&&(key>h[j])) {
       h[i]=h[j];//move the parent down
       i=j;
       j=(i-1)/2;//find the new parent     
      }
    h[i]=key;//insert key
    }
 }

  void heapsort(int *h, int n)  {
    int i,t;
    //create initial heap;
    top_heap(h,n);
    for(i=n;i>0;i--)    {
      //swap the first and the last element
      t=h[0];
      h[0]=h[i];
      h[i]=t;
      heapify(h,i-1);//recreate a heap for remaining set of elements
    }
}

  int main()
  {
    int h[100];//heap;
    int i,n;//no of elements
    printf("Enter the no of elements..\n");
    scanf("%d",&n);
    printf("Enter the elements..\n");
    for(i=0;i<n;i++)
      scanf("%d",&h[i]);
    heapsort(h,n-1);
    printf("After sorting ..\n");
    for(i=0;i<n;i++)
      printf("%d ",h[i]);
  }



  

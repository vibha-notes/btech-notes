#include<stdio.h>
#include<stdlib.h>

 //implement heap by using bottom up technique

  void bot_heap(int*,int);
  void top_heap(int *, int);
  
  int main()
  {
    int h[100];//heap;
    int i,n,ch;//no of elements
  while(1)
 {
    printf("Enter the no of elements..\n");
    scanf("%d",&n);

    printf("Enter the elements..\n");
    for(i=0;i<n;i++)
      scanf("%d",&h[i]);
 
    printf("\n\tEnter 1-> Top Down Approach..\n\t");
    printf("\n\tEnter 2-> Bottom Up Approach..\n\t");
    scanf("%d",&ch);
       switch(ch)
  {
   case 1 : {top_heap(h,n-1);}break;
   case 2 : {bot_heap(h,n-1);}break;
   default: exit(0);
   
  }
   printf("After creating heap..\n");
    for(i=0;i<n;i++)
      printf("%d ",h[i]);
   
 }
}

/* This is very similar to heapify method that we have 
   discussed in the heap program.
If the parent node is smaller than the key node(child node)bring the child node up and the parent node down.
This is top down approach
*/


void top_heap(int *h, int n)
{
	int i,j,k,key;
	for(k=1;k<=n;k++)
	{
		i=k;
		
		key= h[i];
		
		j=(i-1)/2;
           //find the parent
		//while key is greater than the parent
		//or root is reached (i=0)

		while((i>0)&&(key > h[j]))
		{
			h[i]=h[j];//move the parent down
			i=j;
			j=(i-1)/2;
		}

		h[i]=key;
	}		
}


/* This is very similar to adjust method that we have 
   discussed in the heap program. But, observe that a for loop is used. 
   This initiaze the 'i' variable as the leaf node 
   and 'j' variable as its corresponding parent  node. 
   Further, if the parent node is smaller than its child nodes, 
   then the larger of the two child nodes is chosen to 
   replace with the parent node. This gets the child node move up. 
   This bottom-up approach */


void bot_heap(int *h, int n) 
{
  //n is the index of the last element
	
  int k,i,j,key;

	for(k=(n-1)/2; k>=0;k--)
	{
		j=k;
		key=h[j];
		
		i=2*j+1;              //get the index of left child
		
		while(i<=n)          //until left child exists
		{
			if((i+1)<=n)   //check if right chikd exists
			{
				if(h[i+1]>h[i])
				i++; //get the index of largest child
			}
			if(key<h[i])
			{
				h[j]=h[i];//move child up
				j=i;
				i=2*j+1; //get the left child
			}
			else
			 break;	
		}
     h[j]=key;//insert the key
	}	 
}

	
 














 













































      























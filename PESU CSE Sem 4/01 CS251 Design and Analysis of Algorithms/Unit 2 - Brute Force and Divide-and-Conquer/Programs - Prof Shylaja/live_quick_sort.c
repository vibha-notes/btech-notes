#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define MAX 50
void qs(int a[MAX],int low,int high);
int partition(int a[MAX],int low,int high);
int main()
{
 int n,a[MAX],*b;clock_t start,end;
 printf("enter the no. of elements");
 scanf("%d",&n);
 printf("enter the elements");
 
 for(int i=0;i<n;i++)
  scanf("%d",&a[i]);
 
 //invoke the quick sort
  b=(int*)malloc(sizeof(int)*n);
  for(int i=0;i<n;i++)
    b[i]=a[i];
 start=clock();
 for(long long int i=0;i<1000000;i++)
 {  b=a;
   qs(b,0,n-1);
  }
 end=clock();
 printf("sorted set is:\n");
 for(int i=0;i<n;i++)
  printf("%d ",b[i]);
 printf("\n %lf",(float)(end-start)/CLOCKS_PER_SEC);
}

void qs(int a[MAX],int low,int high)
{ int j;
  if(low<high)
    {
     j=partition(a,low,high);
     qs(a,low,j-1);
     qs(a,j+1,high);
    }
}
int partition(int a[MAX],int low,int high)
{
  int pivot=a[low];
  int i=low+1;
  int j=high;int temp;
  while(i<=j)//i & j don't cross over
   {
    while(i<=high && a[i]<=pivot) i++;
    while(j>low && a[j]>=pivot) j--;
    if(i<j)
     {
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
      }
  
    }

   if(j!=low)
    {
     a[low]=a[j];
     a[j]=pivot;
     }
   return j;
 }
  
    
    
     
  
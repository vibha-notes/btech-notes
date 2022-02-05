#include<stdio.h>
#define MAX 50
void qs(int a[MAX],int low,int high);
int partition(int a[MAX],int low,int high);
int main()
{
 int n,a[MAX];
 printf("enter the no. of elements");
 scanf("%d",&n);
 printf("enter the elements");
 for(int i=0;i<n;i++)
  scanf("%d",&a[i]);
 //invoke the quick sort
 qs(a,0,n-1);
 printf("sorted set is:\n");
 for(int i=0;i<n;i++)
  printf("%d ",a[i]);
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
  printf("%d %d test",i,j);
  getchar();
    }
printf("%d j=",j);
 getchar();
   if(j!=low)
    {
     a[low]=a[j];
     a[j]=pivot;
     }
   return j;
 }
  
    
    
     
  
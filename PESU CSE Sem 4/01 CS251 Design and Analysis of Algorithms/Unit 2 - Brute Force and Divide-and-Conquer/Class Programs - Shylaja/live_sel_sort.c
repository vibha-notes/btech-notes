#include<stdio.h>
int main()
{
int n,a[25];
 printf("enter the no. of elements");
 scanf("%d",&n);
 printf("enter the elements");
 for(int i=0;i<n;i++)
 scanf("%d",&a[i]);
 //sorting
 for(int i=0;i<n-1;i++)
  {
    int mp=i;
  for(int j=mp+1;j<n;j++)
    if(a[j]<a[mp])
      mp=j;

   if(mp!=i)
    {
     int temp=a[mp];
         a[mp]=a[i];
         a[i]=temp;
    }
  }
 for(int i=0;i<n;i++)
  printf("%d ",a[i]);
 }
   
    
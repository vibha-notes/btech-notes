#include<stdio.h>
int max(int a[50],int low, int high);
int main()
{
 int n,a[50],i;

 printf("enter n");
 scanf("%d",&n);
 for(int i=0;i<n;i++)
  scanf("%d",&a[i]);
 printf("%d",max(a,0,n-1));
 }
int max(int a[50],int low, int high)
{
 int mid=(low+high)/2;
 if(low<high)
  {
    int l1=max(a,low,mid);
    int l2=max(a,mid+1,high);
     if(l1>l2) return l1;
     else return l2;
   }
 return a[low];
}
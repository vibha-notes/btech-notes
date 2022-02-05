#include<stdio.h>
int search(int a[50],int low, int high,int key);
int main()
{
 int n,a[50],i,key;

 printf("enter n");
 scanf("%d",&n);
 for(int i=0;i<n;i++)
  scanf("%d",&a[i]);
 printf("enter the key");
 scanf("%d",&key);
 printf("%d",search(a,0,n-1,key));
 
 }
int search(int a[50],int low, int high,int key)
{
 int mid=(low+high)/2;
 if(low<=high)
  { if(key==a[mid]) return mid;
    int l1=search(a,low,mid-1,key);
    int l2=search(a,mid+1,high,key);
     if(l1==-1 && l2== -1)
      return -1;
     if(l1==-1) return l2; else return l1;
   }
 return -1;
}
#include<stdio.h>
int bs(int a[50],int low,int high,int key);
int main()
{
 int n,a[50];
 int key,i;
 printf("enter n");
 scanf("%d",&n);
 printf("eneter the elements");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("enter the key element");
 scanf("%d",&key);
 int k=bs(a,0,n-1,key);
 if(k==-1)
  printf("unsuccessful search");
 else
 printf("successful %d",k);
}
int bs(int a[50],int low,int high,int key)
{
 int mid;
 if(low<=high)
   {
     mid=(low+high)/2;
    if(key==a[mid])
     return mid;
   else
    if(key<a[mid])
     return bs(a,low,mid-1,key);
    else
      return bs(a,mid+1,high,key);
    }
  return -1;
}

 
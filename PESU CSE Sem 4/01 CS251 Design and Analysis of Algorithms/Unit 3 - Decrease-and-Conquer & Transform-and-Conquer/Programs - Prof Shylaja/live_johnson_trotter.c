#include<stdio.h>
int get_mobile(int a[10],int dir[10],int n)
{ int me=-1;int large=-1;
  for(int i=1;i<n;i++)
   { me=-1;
     if(a[i]>a[i-1])
      {  
       if (dir[i]==1)
          me=i;
      }
     else
      {
        if(dir[i-1]==0)
          me=i-1;
      }
   if(me!=-1) 
    {if(large==-1) large=me;
   else
      if(a[large]<a[me])
        large=me;
    }}
  return large;
      
}
int swap(int a[10],int dir[10],int n,int k)
{
    if(dir[k]==1)
      {
        int temp=a[k];
            a[k]=a[k-1];
            a[k-1]=temp;
        int temp1=dir[k];
            dir[k]=dir[k-1];
            dir[k-1]=temp1;
        k=k-1;
       }
     else
      {
        int temp=a[k];
            a[k]=a[k+1];
            a[k+1]=temp;
        int temp1=dir[k];
            dir[k]=dir[k+1];
            dir[k+1]=temp1;
        k=k+1;
       }
   return k;
  
}
void change_dir(int a[10],int dir[10],int n,int k)
{
  for(int i=0;i<n;i++)
    {
      if(a[i]>a[k])
        dir[i]=!dir[i];
     
     } 
  
}

int print_other(int a[10],int dir[10],int n)
{
 int cnt=1;
 while(1)
  {  int k=get_mobile(a,dir,n);
      if(k==-1) break;
      k=swap(a,dir,n,k);
      change_dir(a,dir,n,k);
      for(int i=0;i<n;i++)
      printf("%d",a[i]);
      printf("\n");   
      cnt++;
   }
 return cnt;
}

int main()
{
 int n,a[10],dir[10];
 printf("enter n");
 scanf("%d",&n);
 printf("enter the elements");
 for(int i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(int i=0;i<n;i++)
   dir[i]=1;//r to l
 //print the first permutation
 for(int i=0;i<n;i++)
  printf("%d",a[i]);
 printf("\n");
 int cnt=print_other(a,dir,n);
 }

 
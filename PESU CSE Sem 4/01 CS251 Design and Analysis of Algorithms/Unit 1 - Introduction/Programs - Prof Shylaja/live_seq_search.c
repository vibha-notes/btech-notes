#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
 int n;
 int a[50000];
 int i,key;
 clock_t start,end;

 printf("enter the number of elements");
 scanf("%d",&n);
 //printf("enter the elements");
 for(i=0;i<n;i++)
  a[i]=rand();
 printf("enter the key");
 key=1;
 
 start=clock();
 for(i=0;i<n;i++)
   if(a[i]==key)
     break;
 end=clock();
 if(i==n)
   printf("unsuccessful");
 else
  printf("successful");
 printf("%f",(float)(end-start)/CLOCKS_PER_SEC);
} 
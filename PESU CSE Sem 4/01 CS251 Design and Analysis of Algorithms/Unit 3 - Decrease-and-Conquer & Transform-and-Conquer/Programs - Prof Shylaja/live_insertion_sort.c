#include<stdio.h>
#include<time.h>
#define MAX 50
int main()
{clock_t start,end;
 int n,a[MAX],*b;
 int i,j,elt;
 printf("enter the no. of elements");
 scanf("%d",&n);
 printf("enter the elements");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 
//insertion sort
 start=clock();
for(long long int k=1;k<=1000000;k++)
{for(i=0;i<n;i++)
  a[i]=b[i];
for(i=1;i<n;i++)
 {
   j=i-1;
   elt=a[i];
   while(j>=0 && a[j]>elt)
    {
      a[j+1]=a[j];
      j--;
    }
   a[++j]=elt;
  }
}
 end=clock();
//output
 printf("Sorted set is:\n");
 for(i=0;i<n;i++)
  printf("%d ",a[i]);
 printf("%f",(float)(end-start)/CLOCKS_PER_SEC/1000000);
}

 
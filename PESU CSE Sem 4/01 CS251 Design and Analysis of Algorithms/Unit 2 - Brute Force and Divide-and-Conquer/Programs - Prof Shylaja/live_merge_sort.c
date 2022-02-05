#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void msort(int a[5000],int low,int high);
void merge(int a[5000],int low,int mid,int high);
int main()
{
 int a[5000],n;
 int i;clock_t start,end;
 printf("enter the no of elements");
 scanf("%d",&n);
 printf("enter the elements");
 for(i=0;i<n;i++)
  //scanf("%d",&a[i]);
 a[i]=rand();

 //merge sort
 start=clock();
 msort(a,0,n-1);
 end=clock();
 
 //result
 for(i=0;i<n;i++)
  printf("%d ",a[i]);
printf("%f",(float)(end-start)/CLOCKS_PER_SEC);
}

void msort(int a[5000],int low,int high)
{
 if(low<high)
   {
    int mid=(low+high)/2;
    msort(a,low,mid);
    msort(a,mid+1,high);
    merge(a,low,mid,high);
   }
}
void merge(int a[5000],int low,int mid,int high)
{
 int i=low;
 int j=mid+1;
 int k=0;
 int b[5000];  
 while(i<=mid && j<=high)
   {
    if(a[i]<a[j])
      { b[k++]=a[i];i++;} 
    else
      {
        b[k++]=a[j];j++;
      }
    }
 while(i<=mid)
  {
    b[k++]=a[i];i++;
   }
 while(j<=high)
  {
   b[k++]=a[j];j++;
   }
  int l=low;
 for(i=0;i<k;i++)
   a[l++]=b[i];//array a from low to high
}
  
   


   

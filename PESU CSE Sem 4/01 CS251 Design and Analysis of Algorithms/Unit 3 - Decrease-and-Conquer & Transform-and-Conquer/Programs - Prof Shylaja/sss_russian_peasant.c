#include<stdio.h>
int main()
{
 int m,n,sum=0;
 printf("enter m,n");
 scanf("%d %d",&m,&n);
 if(m!=0 || n!=0)
 {
 while(n!=1)
  {if(n%2!=0)
     sum=sum+m;
   n=n/2;
   m=m+m;
   }
  sum=sum+m;
  }
printf("%d",sum);
}
   
   
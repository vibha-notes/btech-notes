#include<stdio.h>
int gcd(int m,int n);
int main()
{
 int m,n;
 printf("enter two nonnegative numbers");
 scanf("%d %d",&m,&n);
 printf("%d",gcd(m,n));
 }
int gcd(int m,int n)
{
 while(n!=0)
  {
   int r=m%n;
    m=n;
    n=r;
  }
 return m;
}

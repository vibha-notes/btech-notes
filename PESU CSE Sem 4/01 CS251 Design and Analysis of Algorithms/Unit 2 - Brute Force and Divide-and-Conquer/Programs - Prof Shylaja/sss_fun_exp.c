#include<stdio.h>
#include<math.h>
#include<time.h>
long long int funexp(int a,int n,int *cnt);
int main()
{
 clock_t start,end;
 int a,n,c=0;
 printf("a,n");
 scanf("%d %d",&a,&n);
 start=clock();
 printf("%lld ",funexp(a,n,&c));
 end=clock();
 printf("\n%d %f",c,(float)(end-start)/CLOCKS_PER_SEC);
}
long long int funexp(int a,int n,int *cnt)
{
 if(n==1) return a;
 (*cnt)++;
 return(funexp(a,ceil((float)n/2),cnt)*funexp(a,floor((float)n/2),cnt));
}
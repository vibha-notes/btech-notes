#include<stdio.h>
#include<time.h>
int main()
{ long long int i,n=100000000000000019;
 time_t start,end;
  start=time(NULL);
  for(i=2;i<=n;i++)
    if(n%i) break;
  if(i<=n)
   printf("Prime");
  else
   printf("Not prime");
 end=time(NULL);
 float t=end-start;
 printf("%2f",t/CLOCKS_PER_SEC);
}
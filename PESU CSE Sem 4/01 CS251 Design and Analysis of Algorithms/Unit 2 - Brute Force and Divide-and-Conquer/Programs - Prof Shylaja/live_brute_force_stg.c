#include<stdio.h>
#include<string.h>
int main()
{
 char text[50],pattern[50];
  int m,n,i,j;
 printf("enter the text");
 gets(text);
 printf("enter the pattern");
 gets(pattern);
 n=strlen(text);
 m=strlen(pattern);
 for(i=0;i<=n-m;i++)
  {
    j=0;
   while(j<m && pattern[j]==text[i+j])
     j++;
   if(j==m) break;
  }
 if(i>n-m) printf("unsuccessful");
 else
   printf("Successful %d",i);
}
 
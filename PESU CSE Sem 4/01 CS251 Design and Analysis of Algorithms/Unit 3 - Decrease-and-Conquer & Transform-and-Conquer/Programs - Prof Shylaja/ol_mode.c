#include<stdio.h>
int main()
{
 int a[10],n,i,runlength,runvalue,modefreq,mv;
 printf("Enter n");
 scanf("%d",&n);
 printf("enter elements");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 i=0;
 modefreq=0;
 mv=0; 
 while(i<n)
  {
    runlength=1;
    runvalue=a[i];
   while(i+runlength<n && a[i+runlength]==runvalue)
     {
       runlength++;
     }
   if(runlength>modefreq)
    {
      modefreq=runlength;
       mv=runvalue;
    }
   i+=runlength;
  }
printf("\nmodefreq=%d mode value=%d",modefreq,mv);
}  
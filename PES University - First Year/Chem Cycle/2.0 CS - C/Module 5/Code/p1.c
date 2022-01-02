#include <stdio.h> 
  
// A simple representation of date 
struct date 
{ 
   unsigned int d; 
   unsigned int m; 
   unsigned int y; 
}; 
  
int main(void) 
{ 
   printf("Size of date is %d bytes\n", sizeof(struct date)); 
   struct date dt = {31, 12, 2014}; 
   printf("Date is %d/%d/%d", dt.d, dt.m, dt.y); 
   return 0;
}
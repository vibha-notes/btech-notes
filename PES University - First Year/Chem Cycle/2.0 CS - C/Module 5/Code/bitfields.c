#include <stdio.h> 
  
// A space optimized representation of date 
struct date 
{ 
   // d has value between 1 and 31, so 5 bits are sufficient 
   unsigned int d: 5; 
  
   // m has value between 1 and 12, so 4 bits are sufficient 
   unsigned int m: 4; 
  
   unsigned int y; 
}; 
  
int main(void) 
{ 
   printf("Size of date is %d bytes\n", sizeof(struct date)); 
   struct date dt = {31, 12, 2014}; 
   dt.m=18;
   printf("Date is %d/%d/%d", dt.d, dt.m, dt.y); 
   return 0; 
}
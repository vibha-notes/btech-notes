#include <stdio.h> 
struct test 
{ 
   unsigned int x: 5; 
   unsigned int y: 5; 
   unsigned int z; 
}; 
int main(void) 
{ 
   struct test t; 
  
   printf("Address of t.x is %p", &t.x); 
  
   // The below line works fine as z is not a bit field member 
   printf("Address of t.z is %p", &t.z); 
   return 0; 
}
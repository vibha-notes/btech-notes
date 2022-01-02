// Program to illustrate the #pragma GCC poison directive 
  
#include<stdio.h> 
  
#pragma GCC poison printf 
  
int main(void) 
{ 
    int a=10; 
      
    if(a==10) 
    { 
        printf("PES University"); 
    } 
    else
        printf("bye"); 
  
    return 0; 
} 
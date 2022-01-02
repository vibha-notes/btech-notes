#include<stdio.h>  
    
void at_entry();  
void at_exit();  
    
#pragma startup at_entry  
#pragma exit at_exit  
    
void at_entry()  
{  
    printf("Inside at_entry() function\n");  
}  
    
void at_exit()  
{  
    printf("Inside at_exit() function\n");     
}  
    
int main(void)  
{  
    printf("Inside main()\n");  
    return 0;  
}  
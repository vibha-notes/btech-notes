/*		m_realloc.c			*/

#include <stdio.h> 
#include <stdlib.h> 
int main(void) 
{ 
    int *ptr = (int *)malloc(sizeof(int)*2); 
    int i; 
     
    // Assuming malloc has not failed
    *ptr = 10;  
    *(ptr + 1) = 20; 
     
    ptr = (int *)realloc(ptr, sizeof(int)*3); // Assuming realloc has not failed
    *(ptr + 2) = 30; 
    
    // The original contents are not changed
    for(i = 0; i < 3; i++) 
        printf("%d ", *(ptr + i)); 
  
    getchar(); 
    free (ptr);
    return 0; 
} 
#include <stdio.h>

extern int g_int;        // Global variable; available to other files also
// extern int s_count;  visibility only in this .c file

void fnA (void)
{
    printf ("Global default value is %d\n", g_int);
    //printf ("Static Global default value is %d\n", s_count);
    //printf ("Address of r_int is %p\n", &r_int);
}
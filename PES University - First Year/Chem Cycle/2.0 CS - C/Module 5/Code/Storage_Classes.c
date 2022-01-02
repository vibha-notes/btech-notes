#include <stdio.h>

int g_int;        // Global variable; available to other files also
static int s_count; // visibility only in this .c file

extern void fnA (void);

void SampleFn (void)
{
    static int l_glob;
    printf ("l_glob is %d\n", l_glob);
    l_glob = 200;
    s_count = 600;
}


int main (void)
{
    int local_v = 400;
    register int r_int = 500;
    g_int = 1000;
    //count = 200;
    // volatile int v_int;
    int v_int;
    int *i_ptr = &local_v;

    printf ("Global default value is %d\n", g_int);
    printf ("Static Global default value is %d\n", s_count);
    fnA ();
    SampleFn ();
    SampleFn ();
    //printf ("l_glob is %d\n", l_glob);
    //printf ("Address of r_int is %p\n", &r_int);
    printf ("Static Global value is %d\n", s_count);
    v_int = *i_ptr;
    v_int = *i_ptr;
    return 0;
}
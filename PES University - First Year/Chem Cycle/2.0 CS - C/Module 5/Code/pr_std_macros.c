#include <stdio.h>

int main (void)
{
    printf ("File name is %s\n", __FILE__);
    printf ("Line number is %d\n", __LINE__);
    printf ("Date is %s\n", __DATE__);
    printf ("Time is %s\n", __TIME__);
    printf ("Standard C flag is %d\n", __STDC__);
    printf ("C version numberis %ld\n", __STDC_VERSION__);
    return 0;
}

#include <stdio.h>

// Separate and print the individual 
int main (void)
{
    union long_bytes
    {
	char ind [4];
	long ll;
    } u1;
    long l1 = 0x10203040;
    char *ptr = (char *) &l1;
    int i;

    // First method
    printf ("First method\n");
    for (i = 0; i < sizeof (long); i ++)
        printf ("Byte %d is %x\n", i, (char ) (l1 >> (i * 8))); 
    // Second method
    printf ("First method\n");
    for (i = 0; i < sizeof (long); i ++)
        printf ("Byte %d is %x\n", i, *ptr++);
 
    u1.ll = l1;
    printf ("Using unions\n");
    for (i = 0; i < sizeof (long); i ++)
        printf ("Byte %d is %x\n", i, u1.ind [i]);
    return 0;
}


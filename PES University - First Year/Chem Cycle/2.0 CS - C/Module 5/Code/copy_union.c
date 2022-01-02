#include <stdio.h>
#include <stdlib.h>

typedef union testu
{
    int i1;
    char c2;
} TESTU;

void print_union (union testu u1)
{
    printf ("i1 is %d\n", u1.i1);
}

void print_unionp (union testu *pu1)
{
    printf ("i1 through pointer is %d\n", pu1->i1);
}

int main (void)
{
    union testu u1, u2;
    TESTU u3 = {.c2='A'};  // Can also be initialized as union testu u3={0x41}
    TESTU *pu4;
    
    printf ("Size of union is %d\n", sizeof (union testu));
    pu4 = (TESTU *) malloc (sizeof (TESTU));
    pu4->i1 = 0;
    pu4->c2 = 0x41;

    u1.i1 = 100;
    u2 = u1;

    printf ("i1 in u2 is %d\n", u2.i1);
    print_union (u1);
    print_unionp (&u2);
    printf ("c2 in u3 is %c\n", u3.c2);
    printf ("c2 in pu4 is %c i1 is %x\n", pu4->c2, pu4->i1);
    return 0;
}

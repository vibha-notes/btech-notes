#include <stdio.h>
#include "3_mystr.h"

int main()
{
	char text[] = "together";
	int n = 8;
	char pat1[] = "to"; int m1 = 2;
	char pat2[] = "get"; int m2 = 3;
	char pat3[] = "her"; int m3 = 3;
	char pat4[] = "him"; int m4 = 3;
	char pat5[] = "them"; int m5 = 4;
	char pat6[] = "got"; int m6 = 3;

	printf("pos : %d\n", mymatch(text, n, pat1, m1));
	printf("pos : %d\n", mymatch(text, n, pat2, m2));
	printf("pos : %d\n", mymatch(text, n, pat3, m3));
	printf("pos : %d\n", mymatch(text, n, pat4, m4));
	printf("pos : %d\n", mymatch(text, n, pat5, m5));
	printf("pos : %d\n", mymatch(text, n, pat6, m6));



}

#include <stdio.h>
#include "2_util.h"

void read_array(int x[], int n)
{
	for(int i = 0; i < n; ++i)
	{
		scanf("%d", x++); // &x[i]   x + i  x++
	}

}

void disp_array(int *x, int n)
{
	for(int i = 0; i < n; ++i)
	{
		printf("%d ", *x++); // x[i]   *(x + i)
	}
	printf("\n");
}

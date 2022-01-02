#include <stdio.h>
#include "1_array.h"
void disp_array(int x[], int n)
{
	for(int i = 0; i < n; ++i)
	{
		printf("%d ", x[i]);
	}
	printf("\n");
}

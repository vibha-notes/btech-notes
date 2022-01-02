#include <stdio.h>
#include "3_mystr.h"
#if 0
int mymatch(char text[], int n, char pattern[], int m)
{
	int i; int j;
	// outer loop : walk thro the text
	for(i = 0; i <= n - m; ++i)
	{
		// inner loop : walk thto the pattern
		for(j = 0; j < m && text[i + j] == pattern[j]; ++j)
		{
			
		}
		if(j == m)
		{
			return i;
		}	
	}
	return -1;
}
#endif

int mymatch(char text[], int n, char pattern[], int m)
{
	int i; int j;
	int res = -1;
	// outer loop : walk thro the text
	for(i = 0; res == -1 && i <= n - m; ++i)
	{
		// inner loop : walk thto the pattern
		for(j = 0; j < m && text[i + j] == pattern[j]; ++j)
		{
			
		}
		if(j == m)
		{
			res = i;
		}	
	}
	return res;
}



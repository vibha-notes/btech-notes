#include <stdio.h>
#include "2_mystr.h"

int main()
{
	char x[] = "kitkat";
	// find the leftmost occurrence of say t	
	char ch;
	ch = getchar();
	#if 0
	int pos = find_left(x, ch);
	if(pos != -1)
	{
		printf("%c found at pos %d\n", ch, pos);
	}
	else
	{
		printf("%c not found in %s\n", ch, x);
	}
	#endif
	// find all occurrences
	int pos = -1;
	int i;
	while( (i = find_left(x + pos + 1, ch)) != -1)
	{
		pos = pos + i + 1;
		printf("%d ", pos);
	}
	printf("\n");



}













#include <stdio.h>
#include "2_mystr.h"

int find_left(const char *src, char ch)
{
	int pos = 0;
	while(src[pos] != '\0' && src[pos] != ch)
		++pos;
	return src[pos] ? pos : -1;
}

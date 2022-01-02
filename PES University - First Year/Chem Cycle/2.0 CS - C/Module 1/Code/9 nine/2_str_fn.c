#include <stdio.h>
#include "2_str_fn.h"

int mystrlen(char s[])
{
#if 0
// version 1
	int i = 0;
	while(s[i] != '\0')
	{
		++i;
	}
	return i;
#endif
#if 0
// version 2
	int i = 0;
//	while(*s++ != '\0')
//	while(*s++ != 0)
	while(*s++ )
	{
		++i;
	}
	return i;
#endif
// version 3:
	if(*s == '\0')
	{
		return 0;
	}
	else
	{
		//return 1 + mystrlen(s++); // infinite recursion
		return 1 + mystrlen(s + 1);
	}
}

void mystrcpy(char *dst, char *src)
{
#if 0
	int i = 0;
	while(src[i] != '\0')
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = '\0';
#endif
	while(*dst++ = *src++)
		;

}

int	mystrcmp(char *s1, char *s2)
{
	while(*s1 && *s2 && *s1 == *s2)
	{
		++s1; ++s2;
	}
	return *s1 - *s2;
}






































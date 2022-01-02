// read a file
#include <stdio.h>

int main()
{
	char ch;
	#if 0
	// cannot key in char with ASCII 0; becomes an infinite loop
	while( ch = getchar())
	{
		putchar(ch);
	}
	putchar('\n');
	#endif
	// EOF : end of file
	while( (ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	putchar('\n');
}















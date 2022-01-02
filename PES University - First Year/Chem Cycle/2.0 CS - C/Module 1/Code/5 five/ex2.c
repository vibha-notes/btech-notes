// read a line
#include <stdio.h>

int main()
{
	char ch;
	#if 0
	// ch not initialized; TERRIBLE CODE
	while(ch != '\n')
	{
		ch = getchar();
		putchar(ch);
	}
	#endif
	#if 0
	// infinite loop
	ch = getchar();
	while(ch != '\n')
	{
		putchar(ch);
	}
	#endif
	#if 0
	// ok
	ch = getchar();
	while(ch != '\n')
	{
		putchar(ch);
		ch = getchar();
	}
	#endif
	// assignment expr in the expr of the loop
	while( (ch = getchar()) != '\n')
	{
		putchar(ch);
	}
	putchar('\n');
}















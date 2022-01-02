// character input and output
#include <stdio.h>

int main()
{
	char x; char y;
	#if 0
	scanf("%c", &x);
	scanf("%c", &y);
	printf("x:%c y:%c\n", x, y);
	#endif
	x = getchar();
	y = getchar();
	putchar(x);
	putchar(y); printf("%d", y);
}
// If I entre P<newline>, x becomes P and y becomes newline
// scanf and printf : generic; not simple
// getchar and putchar : not generic; read /write a char; simple


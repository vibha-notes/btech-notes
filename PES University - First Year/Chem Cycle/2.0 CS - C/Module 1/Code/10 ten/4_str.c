#include <stdio.h>

int main()
{
	char x[] = "pes";
	char* y = "pes";
	printf("x : %s\n", x);
	printf("y : %s\n", y);
	x[0] = 'P';
	printf("x : %s\n", x);
	// y[0] = 'P'; // undefined behaviour
	//printf("y : %s\n", y);
	putchar(*++y); 
	//putchar(*++x); // compile time error

}

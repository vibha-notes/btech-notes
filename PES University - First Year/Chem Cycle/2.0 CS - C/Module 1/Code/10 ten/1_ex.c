#include <stdio.h>
#include <string.h>
// pointer arithmetic:
//	add an int to a pointer : pointer
//  subtract an int from a pointer : pointer
//  diff of two pointers : int
int mystrlen(char *y)
{
	char *z = y;
	while(*z)
	{
		++z;
	}
	return z - y;
}
int main()
{
	char x[10] = "pesu";
	printf("length : %d\n", mystrlen(x));
	char y[5] = "univ";
	strcat(x, y);
	printf("%s %s\n", x, y);

	strcat(x, " India"); // undefined behaviour; writing outside of the array bounds
	// classical example of buffer overflow - dangling pointer issue
	printf("%s\n", x);

}





















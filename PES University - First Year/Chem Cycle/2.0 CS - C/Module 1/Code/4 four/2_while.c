
#include <stdio.h>

int main()
{
	int a; int b;
	scanf("%d%d", &a, &b);
	printf("a : %d b : %d\n", a, b);
	int factor = (a < b) ? a : b;

	// a % factor != 0  || b % factor != 0
	while (! (a % factor == 0 && b % factor == 0))
	{
		--factor;
	}
	printf("gcd : %d\n", factor);
}

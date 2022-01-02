#include <stdio.h>

int main()
{
	int a; int b;
	int rem;
	scanf("%d%d", &a, &b);
	printf("a : %d b : %d\n", a, b);
#if 0
	rem = a % b;
	while(rem != 0)
	{
		a = b;
		b = rem;
		rem = a % b;
	}
#endif
	while(rem = a % b)
	{
		a = b;
		b = rem;
		rem = a % b;
	}
	printf("gcd : %d\n", b);
}














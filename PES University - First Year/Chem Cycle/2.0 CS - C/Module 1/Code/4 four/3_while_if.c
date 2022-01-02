#include <stdio.h>
// selection:
//	<if stat> ::= if (<expr>) <stat>|<block>   
//	<if stat> ::= if (<expr>) <stat>|<block> else <stat>|<block>
int main()
{
	int a; int b;
	scanf("%d%d", &a, &b);
	printf("a : %d b : %d\n", a, b);
	while (a != b)
	{
		if(a > b)
		{
			a -= b;
		}
		else
		{
			b -= a;
		}
	}
	printf("gcd : %d\n", a);
}

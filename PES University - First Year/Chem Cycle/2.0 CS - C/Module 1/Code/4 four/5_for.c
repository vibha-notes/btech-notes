// find the sum of numbers from 1 to n
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	#if 0
	int i = 1;
	int sum = 0;
	while(i <= n)
	{
		sum += i++;
	}
	#endif
	#if 0
	int sum = 0;
	// wrong code
	for(int i = 1; i <= n; sum += i)
	{
		++i;
	}
	#endif
	#if 0
	// corrected code
	int sum = 0;
	for(int i = 1; i <= n; ++i)
	{
		sum += i;
	}
	#endif

	int sum; int i;
	for(sum = 0, i = 1; i <= n; ++i)
	{
		sum += i;
	}

	printf("%d\n", sum);


	return 0;
}
// <for stmt>:: for(e1; e2; e3) <block>|<stmt>
// e1, e2, e3 : expressions
// e1 : initialization
// e2 : condition
// e3 : modification






#include <stdio.h>
#include "6_server.h"

int main()
{
	int a; int n;
// raise a to the power n where n is a composite of 2 and 3 : is a multiple of any
//	number of 2s and 3s.
// we exponentiate a to the power n by repeated cubing and then repeated squaring
	scanf("%d %d", &a, &n); // n is a composite of 3 and 2
	int res = 1;
	while(n && (n % 3 == 0))
		{
			res = res * cube(a);
			n -= 3;
		}
	while(n && (n % 2 == 0))
		{
			res = res * sqr(a);
			n -= 2;
		}
	
	printf("result : %d\n", res);
}


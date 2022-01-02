#include "5_palin.h"

int rev(int n)
{
	int r = 0;
	while(n)
	{
		r = r * 10 + n % 10;
		n /= 10;
	}
	return r;
}
int is_palindrome(int n)
{
#if 0
	int rev = 0; int m = n;
	while(n)
	{
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	return m == rev;
#endif
	return n == rev(n);
}

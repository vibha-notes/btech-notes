// find digital root
// n = 1729     1729|1
#include <stdio.h>

int main()
{
	int n = 1729;
	int s;
	#if 0
	for(s = 0; n; s += n % 10)
	{
		n /= 10;
	}
	printf("%d\n", s); // 10  !!!	
	#endif
	#if 0
	// sum of digits
	for(s = 0; n; n /= 10)
	{
		s += n % 10;
		
	}
	printf("%d\n", s); // 19	
	#endif
	// do .. while
	// do at least once
	// bottom tested
	do
	{
		for(s = 0; n; n /= 10)
		{
			s += n % 10;
		
		}
		n = s;
	} while(s > 9);
	printf("digital root : %d\n", s);
}













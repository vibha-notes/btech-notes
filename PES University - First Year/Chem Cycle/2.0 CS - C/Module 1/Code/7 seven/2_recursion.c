#include <stdio.h>

int what(int n)
{
	if(n == 0)
	{
		return 0;
	}
	else if(n % 2)
	{
		return 1 + what(n / 2);
		//         2 => 2
		//		   5 => 1
		//		   6 => 0
	}
	else
	{
		return what(n / 2);
		//		3 => 2
		//      4 => 2
	}
}

int main()
{
	int n  = 25;
	printf("val : %d\n", what(n));
	//						1 => 3
}

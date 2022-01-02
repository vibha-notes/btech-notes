#include <stdio.h>

int what(int a, int n)
{
	if(n == 0)
		return 1;
	else if(n % 2)
		return a * what(a * a, n / 2);
	else
		return what(a * a, n / 2);
}
int main()
{
	int a = 3; b = 5;
	printf("%d\n", what(a, b));
}

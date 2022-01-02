#include <stdio.h>

void what(int *p, int *q)
{
	int m = *p; int n = *q;
	while(m != n)
	{
		if(m > n)
		{
			m -= n;
		}
		else
		{
			n -= m;
		}
	}
	*p /= m; *q /= n;
}
int main()
{
	int a = 25; int b = 15;
	what(&a, &b);
	printf("%d %d\n", a, b);
	what(&a, &a);
	printf("%d\n", a);

}





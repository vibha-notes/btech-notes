// nested looping structure
#include <stdio.h>
// generate Armstrong numbers : 153
int main()
{
	int n; int h; int t; int u;
	int hc; int tc; int uc; int s;
	for(h = 0; h < 10; ++h)
	{
		for(t = 0; t < 10; ++t)
		{
			for(u = 0; u < 10; ++u)
			{
				hc = h * h * h;
				tc = t * t * t;
				uc = u * u * u;
				n = h * 100 + t * 10 + u;
				s = hc + tc + uc;
				if(n == s) 
				{
					printf("%d\n", n);
				}
			}
		}
	}
}

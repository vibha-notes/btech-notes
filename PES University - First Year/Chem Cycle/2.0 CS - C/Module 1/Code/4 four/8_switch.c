// classify triangle
#include <stdio.h>

int main()
{
	int a; int b; int c;
	int count = 0;
	scanf("%d %d %d", &a, &b, &c);
	if(a == b) ++count;
	if(b == c) ++count;
	if(c == a) ++count;
	switch(count)
	{
		case 0: printf("scalene\n"); break;
		case 3: printf("equi\n"); break;
		case 1: printf("iso\n"); break;
	}
}
// coding style: no continue; break if switch

// switch likely to be faster than a nested if
// restrictions:
// 1. expr of switch should be integral
// 2. compare with constants
// 3. compare for equality
// 4. same expr in all comparisons













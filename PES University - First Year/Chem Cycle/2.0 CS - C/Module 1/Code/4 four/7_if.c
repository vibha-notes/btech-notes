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
	if(count == 0) printf("scalene\n");
	if(count == 3) printf("equi\n");
	if(count == 1) printf("iso\n");
	
}

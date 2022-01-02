#include <stdio.h>
#include <math.h>

int f1(int x)
{
	return x * x;
}

int f2(int x,  int y)
{
	return x + y;
}

double f3(int x)
{
	return sqrt(x);
}

void f4()
{
	printf("f4 says hello\n");
}

int main()
{
	// calling f1
	int a = 25; int b = 10;
	int res;

	res = f1(a); printf("res : %d\n", res);
	res = f1(11); printf("res : %d\n", res);
	res = f1(11 + a); printf("res : %d\n", res);
	// res = f1(int); // error

	res = f2(a, b); printf("res : %d\n", res);

	printf("sqrt : %lf\n", f3(25.0));
	printf("sqrt : %lf\n", f3(a));

	f4();
}




#include "6_server.h"

int sqr(int x)
{
	return x * x;
}

int cube(int x)
{
	//return x * x * x;
	return x * sqr(x);
}

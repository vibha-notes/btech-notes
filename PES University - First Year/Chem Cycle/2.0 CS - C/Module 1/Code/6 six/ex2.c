#include <stdio.h>

void foo(int x);
void bar(int*);
void test(int t);
void what(int*);

int* one(int* x);
int* two();


int main()
{
	int a = 10;
	foo(a);
	printf("a : %d\n", a); // 10
	double b = 2.5;
	foo(b);
	printf("b : %lf\n", b); //  2.5

	int *p = &a; // pointer variable
	bar(p);
	printf("a : %d *p : %d\n", a, *p); // 10 10

	test(*p);
	printf("a : %d *p : %d p : %p\n", a, *p, p); // 10 10
	
	what(p);
	printf("a : %d *p : %d p : %p\n", a, *p, p); //  

	int c = 1000;
	p = one(&c);
	printf("%d \n", *p); // 1000

	p = two();
	printf("%d \n", *p);

}
// Terrible; should never return a pointer to a local variable
// becomes a dangling pointer
// no location; access
int* two()
{
	int x = 111;
	return &x;
}
int* one(int* x)
{
	return x;
}

void what(int* q)
{
	int temp = 100;
	*q = temp;
}
void bar(int* q)
{
	int temp = 100;
	q = &temp;
}
void foo(int x)
{
	x = 20;
}
void test(int t)
{
	t = 200;
}









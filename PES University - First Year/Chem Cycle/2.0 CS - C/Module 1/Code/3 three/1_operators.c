// operators
#include <stdio.h>
int main()
{
	printf("%d %f %f %f\n", 25 / 4, 25.0 / 4.0, 25.0 / 4, 25 / 4.0);
	// 6 6.25 6.25 6.25
	// mixed mode
	// 25.0 / 4  => 25.0 / (double)4.0

	int a = 25; int b = 15;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d\n", a, b);

	// check a bit
	unsigned int c = 25;
	int i;
	i = 2;
	printf("set : %d\n", c & (1 << i)); // zero value

	i = 3;
	printf("set : %d\n", c & (1 << i)); // non zero value

	//set a bit
	i = 2;
	c = c | 1 << i;
	printf("set : %d\n", c & (1 << i)); // non zero value

	// clear a bit
	i = 2;
	c = c & ~(1 << i);
	printf("set : %d\n", c & (1 << i)); //  zero value

	
	// assignment:
	//	is an expression
	int d;
	printf("%d\n", d = 123); 
	d = d + 100;
	printf("%d\n", d); 
	d += 100;
	printf("%d\n", d); 

	int e;
	// change the variable by 1
	// used as stmt; there is no diff
	e = 100;
	e = e + 1;
	printf("%d\n", e); 
	e += 1;
	printf("%d\n", e); 
	e++; // post increment op
	printf("%d\n", e); 
	++e; // pre increment op
	printf("%d\n", e); 

	// used as expressions
	// preincrement
	e = 100;
	printf("%d\n", ++e); // 101
	printf("%d\n", e); // 101
	// postincrement
	e = 100;
	printf("%d\n", e++); // 100
	printf("%d\n", e); // 101

	// pre : change and use
	// post : use and change
}
// type conversion or casting operation : (type)
// % : only for int
// arithmetic : + - * / %
// bitwise : << >> & | ^ ~
//		<< : left shift
//		>> : right shift
//		&  : bitwise and
//		|  : bitwise or
//		^  : bitwise exclusive or
//		~  : 1's complement

// relational : < > <= >= == !=
// logical : && || !
// combined assignment :
//		+= -= *= /= %= <<= >>= &= |= ^=
// short cuts
//		++ --
// casting
// sizeof



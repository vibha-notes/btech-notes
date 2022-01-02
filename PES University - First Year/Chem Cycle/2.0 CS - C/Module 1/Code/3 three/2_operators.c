#include <stdio.h>

int main()
{
	int a = 10;
	int *p = &a;
	printf("pointer to a : %p value \n", p, *p); // hex number 10
	int b = 20;
	*p = 30;
	printf("a : %d\n", *p); // 30
	
	p = &b;
	printf("pointer to b : %p value \n", p, *p); // hex number 20


	printf("res : %d\n", a == 10 ? 100 : 200); 
	printf("res : %d\n", a++ == 10 ? 100 : 200); 
	printf("res : %d\n", a++ == 11 ? a : a * 2); // 12
	printf("res : %d %d\n", a++, a); // undefined

	// relational operators:
	//	0 : false
	//  1 : true
	//  any non zero value is true
	printf("compare %d\n", 5 > 3); // 1
	printf("compare %d\n", 5 > 3 > 1); // 0
	// C does not meaningfully support association of relation operators

	// logical operators
	// ! => not, && => and, || => or
	// supports short ckt eval

	return 0;
}
// lvalue and rvalue
// l and r : left and right values; wrt assignment operator
// int a; int b; int c;
// a = 20; b = 30; c = 40; int d = 50;
// a = b + c; // ok
// b + c = a; // error; b + c is a temporary


// d = a + b + c;
// evaluation of operators:
//	- precedence
//	- association

// t1 <- a + b
// d <- t1 + c
// t1 : temporary
//	has no name in our program
// cannot refer to it 
// has r value and has no lvalue

// all variables are l-value and r-value
// variable has a l-value as the block is entered
// variable has a meaningful r-value either on initialization or assignment

// expressions having lvalue
// 'C':
//	dereference an operator
//	int a = 10;
//	int *p = &a;
//	int b = 20;
//	
//   p = &b; // does p have a l-value?
//  * : unary ; dereferencing operator
//	*p : whatever p points to
//	*p is same as b at this point
//	__ = b # rvalue of b; value of b
//   b = ___ # lvalue of b; location of b

// can *p be used as both l and r value? YES

// a = 10;
// b = a * a++;
//     10 * 10 => 100
//     11 * 10 => 110
//	undefined; depends on the order of evaluation of operands
//  bad code
//
// what is the value of b?

// order of evaluation of operators
//	1. precedence
//	2. association
// order of evaluation of operands
//	fetching the operands from the memory to the registers of the CPU
//	is not defined in the lang
//	left to the compiler writer(implementor)


// assignment operator(s) are not pure operators
// they have side effects; they also change something apart from giving a value

// assignment is an expr
// a = b = c = 10; // ok
// a = (b = (c = 10))
// while(a = b) ...

// sequence point:
//	by this point, all side effects will be complete
//	beyond this, any variable can be used with no ambiguity

// a = 10;
// a + a++ undefined
// to support short ckt evaluation, && becomes a sequence point
// expression before &&, || will be completely evaluated.
// a++ == 10 && a == 11 // ok; will be true 1


// ternary operator:
//	if expression
//	e1 ? e2 : e3



// order of evaluation of operands in an expression is not defined
// ordre of evaluation of arguments to a function is not defined

































































#include <stdio.h>
// arguments : fn call; expressions
// parameters : fn definition; always variables
int add(int, int); // declaration of function; prototype; signature of the function
int main()
{
	int a = 10; int b = 20; int c;
	c = add(a, b);
	printf("c : %d\n", c);
	//c = add(2, 3, 4); // error;  # of arguments does not match # of parameters
	//printf("c : %d\n", c);
	c = add(2.5, 3.6); // ok c = add((int)2.5, (int)3.6)
	// compiler introduces type casting to match argument to parameter
	
	printf("c : %d\n", c);

	c = add("one", "two"); // compile time warning ?
	printf("c : %d\n", c); // we deserve what we get

	printf("foo : %d\n", foo(2.8));
	printf("bar : %lf\n", bar(5));
	return 0;
}

// define a function
// returntype fnname(<list of parameters with type>)
// {
//		<stmt>
//		return <expr>
// }
#if 1
int add(int x, int y)
{
	int temp;
	temp = x + y;
	return temp;
}
#endif
#if 0
int add(double x, double y)
{
	int temp;
	temp = x + y;
	return temp;
}
#endif

int foo(double x)
{
	return x;
}

double bar(int x)
{
	return x;
}
// functions:
//		is a piece of code
//		takes some arguments
//		returns some result
//		not necessarily pure
//		pure function: 
//			result of a function depends only on the arguments
//			arguments are never changed
//		not every function in C is pure
//		why?
//			divide and conquer
//				divide the problem into small parts
//				facilitate sharing problem solving with a group of people
//			reuse; never invent a wheel 
//			sharing
//			maintenance
//				changing implementation becomes easy
//				no multiple copies to update
//				already tested

// matches the fn call to the fn declaration
//	# of arguments matched with # of parameters
//	type of argument : type of parameter
//	order of arguments and parameters
//	if types do not match exactly,
//		compiler introduces casting or coercion if possible

// return mechanism
//	return is always thro a temporary variable
//	has the type of the function return
//	return <Expr>;
//	initialize this variable

//	special fn: void fn : does not return a value
//  return <expr>; return returns a single value




















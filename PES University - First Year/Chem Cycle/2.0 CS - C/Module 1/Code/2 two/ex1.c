#include <stdio.h>

int main()
{
	printf("hello world\n");
	// no intepretation for the second argument in the format string
	printf("hello ", "world\n"); // hello
	printf("\n");
	printf("hello %s\n", "world\n");
	printf("%s %s %s %s\n", "one", "two", "three", "four");
	printf("%s %s %s\n", "one", "two", "three", "four");
	printf("%s %s %s %s\n", "one", "two", "three"); // undefined behaviour

	printf("%5d and %5d is %6d\n", 20, 30, 20 + 30);

	// at runtime, there is no type
	// we have a bit pattern
	// compiler does not introduce operators as it does not know what the function
	//	is supposed to do
	// at runtime, we cannot introduce operators as the compiler does not exist
	// - when printf encounters %d, it interprets the bit pattern as an int based
	// on the way the int is stored in that implementation, and displays that in decimal
	printf("what : %d\n", 2.5);
	return 0;
}

// printf:
//	one of the output functions
//	first argument : string
//	can take any # of arguments
//	output is controlled by the first argument : format string
//						int printf(const char*, ...);
//  %s : string
//  %d : dec int
//  %x : hex int
//	%o : oct int
//  %f : float
//	%c : char

// basic types:
//		int
//			long
//			short
//			char
//		double
//			float
// size of a type depends on the compiler




















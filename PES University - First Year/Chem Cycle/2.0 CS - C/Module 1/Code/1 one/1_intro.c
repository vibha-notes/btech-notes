// first program
#include <stdio.h>

int main()
{
	printf("hello world\n");
	return 0;
}
// indentation is not a language requirement
//  #include : pre-processor directive
//		not same as import of Python
// program has to have a function called main
//	is the starting point of execution

// main is a function
// - has a return type
//	int main() => int : return type of the function
//	there will be a temporary location to hold the return value
//	the expr of return is evaluated and copied to that location
//	caller can use that value

// function definition:
//	return_type fn_name(parameter declarations)
//  {
//		<stat>
//		...
//  }

// suite of Python == block : formed by a pair of flower brackets

// printf : output function

// steps in the execution of a program
//		editor
//				source program
//		pre-processing
//				translation (translation unit)
//		compile
//			converts to machine code
//				object file
//		link
//			combines # of object files and libraries
//				image (loadable image)
//		load
//			transfer the image into the memory of the computer
//		run
//			execute the program
//				process
//		output: you get what you deserve


// run a program
//	gcc <filename>  // image a.out
// ./a.out

//  gcc <filename> -o <imagename>
// ./<imagename>

// output of the pre-processor
// gcc -E <filename>

// compile
// gcc -c <filename>

// link
// gcc itself
// gcc <list of object files> -l<library>
// there is a default std library


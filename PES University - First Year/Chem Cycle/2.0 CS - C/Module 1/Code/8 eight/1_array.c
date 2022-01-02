// Array:
//	like the list of Python
//	has # of elements
//	all the elements should be of the same type - homogeneous
//	size of the array is specified at the point of creation
//		a) size is given as a constant at compile time
//		b) size specified at runtime - C99 VLA : variable length array
//	cannot grow or shrink
//	indexed by integer
//	random access (should be called direct access)
//		time required to access the element does not depend on its position
//		is always same
//	lower bound of index : 0
//	array has very little info stored at runtime
//	degenerates to a pointer at runtime
//	no info about the array size

//	int i; i = ...; a[i] = 111; 
//	what if i exceeds the array size?
//	cannot indicate an error while indexing at runtime
//	index out of bounds not checked
//  an undefined behaviour
//	by not checking, C saves memory and time.

// array : at compile time : is an array
//			knows the # of dimensions, knows the size of each dimenstion
//			knows its size
//		: at runtime : degenerates to a pointer
//					const pointer
// are not assignment compatible

#include <stdio.h>

int main()
{
#if 0
	int a[5];
	int b[5];
	//b = a; // compile time error
#endif
	int a[5] = {11, 22, 33, 44, 55};
	//printf("what : %d\n", a[5]); // undefined
	int n = 5;
#if 0
	for(int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	} 
	printf("\n");
#endif
	//int x = 10;
	//int *p = &x;

	// x + 20
	// int y = 20;
	// x + y ?

	// can use a variable at a place where a const was used
#if 0
	int *p = a;
	for(int i = 0; i < n; ++i)
	{
		printf("%d ", p[i]);
	} 
	printf("\n");
#endif
//   pointer arithmetic
//		do not treat pointers as integer
//		- add an int to a pointer
//		- subtract an int from a pointer
//		- diff of two pointers provided they point to the same array

//	p : pointer; i : integer
//	p + i => p + i * sizeof component to which p points to

#if 0
	int *p = a;
	for(int i = 0; i < n; ++i)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");
#endif
#if 0
	int *p = a;
	for(int i = 0; i < n; ++i)
	{
		printf("%d ", *(a + i));
	}
	printf("\n");
#endif
	int *p = a;
	for(int i = 0; i < n; ++i)
	{
		printf("%d ", *p++);
	}
	printf("\n");
	// reset ?
	// *p = a; p = *a; p = a; *p = *a;
	int i;
	for(p = a, i = 0; i < n; ++i)
	{
		printf("%d ", *p++);
	}
	printf("\n");
}










































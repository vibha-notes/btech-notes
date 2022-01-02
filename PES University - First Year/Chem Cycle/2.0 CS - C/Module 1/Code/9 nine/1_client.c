#include <stdio.h>
#include "1_array.h"
// sizeof :
//		compile time operator
//		int a = 10;
//		int b = sizeof(a = 20);
//		// int b = sizeof(int); // b is undefined; a remains at 10

int main()
{
	// initialization
	// - without the size
	//		compiler counts the # of elements in the initilization list
	// - no initializatio; size specified
	//		elements are not initialized; they may have undefined values
	// - partially initialized
	//		rest of the elements will be 0
	int a[] = {11, 22, 33, 44, 55};
	// a : array at compile time
	int n = sizeof(a) / sizeof(*a); // sizeof(a) / sizeof(int)
	printf("n : %d\n", n);
	int b[5] = {66, 77};
	int m = 5;
	disp_array(a, n);
	disp_array(b, m);

}

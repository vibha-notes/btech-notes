#include <stdio.h>

/*
variable:
	name
	type
		set of values
		set of operators
	value
	location
	
	storage class
	qualifier
	life
	scope

	initialization
	assignment


type of a variable is fixed at compile time
                   cannot change at runtime
must declare the type of variable before usage
cannot make variables on the fly
*/
int main()
{

	//a = 10; // NO
	int a; // declare before use; not initialized; value will be some garbage; undefined
	int b = 20; // initialization : giving a value to a variable at the point of declaration
	printf("a : %d b : %d\n", a, b);
	a = 30; // assignment
	printf("a : %d b : %d\n", a, b);


	//scanf("%d", a); // dangerous
	//scanf("%d", &a); // address operator
	//printf("a : %d ", a);

	scanf("%d,%d", &a, &b);
	printf("a : %d b : %d\n", a, b);


}





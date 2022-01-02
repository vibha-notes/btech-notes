//  c strings
#include <stdio.h>
#include "2_str_fn.h"

int main()
{
	// 'x' : character constant; occupies 1 byte
	// "y" : string constant or string literal; occupies 2 bytes :  'y' '\0'
	//	marks the end of the string; sentinel
	// '\0' or 0 or NULL
	// array of char becomes a C string if and only if the char NULL is used to
	//	mark the end of the string
	// Functons on strings in the library expect it | put it
	
	char a[10] = "pes univ";
	char b[] = "python";
	printf("size : %lu\n", sizeof(b) / sizeof(char)); 
	char c[] = { 'p', 'y', 't', 'h', 'o', 'n', '\0' };
	printf("size : %lu\n", sizeof(c) / sizeof(char)); 

	printf("str a : %s\n", a);
	printf("str b : %s\n", b);
	printf("str c : %s\n", c);

	char d[] = { 'c', 'a', 't', '\0', 't', 'l', 'e', '\0' };
	printf("d : %s\n", d);
	printf("size : %lu\n", sizeof(d) / sizeof(char)); 
	for(int i = 0; i < 8; ++i)
	{
		putchar(d[i]);
	}
	putchar('\n');
	// my functions
	char e[10] = "india";
	printf("length : %d\n", mystrlen(e));

	char f[10];
	printf("enter a string : ");
	scanf("%[^\n]s", f);
//	scanf("%[abcd]s", f); // read only a or b or c or d - any number of them
//	scanf("%[^abcd]s", f);
	printf("f : %s\n", f);
	char g[10];
	// copying to g(destination) from f(source)
	mystrcpy(g, f);
	printf("g : %s\n", g);

	printf("compare : %d\n", mystrcmp("amar", "amar")); // expect to get 0
	printf("compare : %d\n", mystrcmp("amar", "akbar")); // expect +ve value
	printf("compare : %d\n", mystrcmp("amar", "anthony")); // expect -ve value


}











// seems to work
// not a good idea
//	input should be at only one place
//	never be in an inner loop
//
// if we can manage with if within while, prefer that over while within while

// complete this
#include <stdio.h>

int main()
{
	char ch;
	int nl = 0;
	int nw = 0;
	int nc = 0;
	while( (ch = getchar()) != EOF)
	{
		++nc;
		while((ch = getchar()) != '\n')
		{
			++nc;;
		}
		++nl; ++nc;
	}
	//putchar('\n');
	printf("# of char : %d\n", nc);
	printf("# of lines : %d\n", nl);

}




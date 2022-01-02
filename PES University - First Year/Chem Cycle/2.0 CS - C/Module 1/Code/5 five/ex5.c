#include <stdio.h>
// works if there are no multiple delimiters
int main()
{
	char ch;
	int nl = 0;
	int nw = 0;
	int nc = 0;
	while( (ch = getchar()) != EOF)
	{
		++nc;
		if(ch == '\n')
		{
			++nl;
		}
		if(ch == ' ' || ch == '\n' || ch == '\t')
		{
			++nw;
		}
	}
	//putchar('\n');
	printf("# of char : %d\n", nc);
	printf("# of words : %d\n", nw);
	printf("# of lines : %d\n", nl);

}

#include <stdio.h>
int main()
{
	char ch;
	int nl = 0;
	int nw = 0;
	int nc = 0;
	int inword = 0; // not in a word so far
	while( (ch = getchar()) != EOF)
	{
		++nc;
		if(ch == '\n')
		{
			++nl;
		}
		if(inword && (ch == ' '|| ch == '\t' || ch == '\n'))
		{
			inword = 0; ++nw;
		}
		// avoid recomputation of white space concept
		else if (!(ch == ' '|| ch == '\t' || ch == '\n'))
		{
			inword = 1;
		}

	}
	printf("# of char : %d\n", nc);
	printf("# of words : %d\n", nw);
	printf("# of lines : %d\n", nl);

}

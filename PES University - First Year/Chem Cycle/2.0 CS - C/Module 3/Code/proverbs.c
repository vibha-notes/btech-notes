#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NO_PROVERBS	50

void disp_proverbs (char *proverbs[])
{
	int i;
	printf ("The entered proverbs are\n");

	for (i = 0; proverbs [i] != NULL; i ++)
		printf ("%s\n", proverbs[i]);

}

void free_memory (char *proverbs[])
{
	int i;
	for (i = 0; proverbs [i] != NULL; i ++)
		free (proverbs [i]);
}

int main (void)
{
	int count = 0, i;
	char *proverbs [NO_PROVERBS];
	char proverb [80];  // Each proverb cannot be more than 79 characters long
	char opt = 'y';	// Something other than 'q';
	int slen;

	for (i = 0; i < NO_PROVERBS; i ++)
		proverbs [i] = NULL;

	while (opt != 'q')
	{
		printf ("Key in a proverb:");
		scanf ("%[^\n]", proverb);
		if (count >= NO_PROVERBS)
		{
			printf ("Limit reached\n");
			break;
		}
		slen = strlen (proverb);
		if ((proverbs [count] = (char *) malloc (slen + 1)) == NULL)
		{
			printf ("malloc failure\n");
			exit (1);
		}
		strcpy (proverbs [count], proverb);
		count ++;
		printf ("Press q to quit any other key to continue:");
		scanf (" %c", &opt);
		while ((getchar ()) != '\n')
			;		// Clear the keyboard buffer
	}

	disp_proverbs (proverbs);
	free_memory (proverbs);
	return 0;
}
	
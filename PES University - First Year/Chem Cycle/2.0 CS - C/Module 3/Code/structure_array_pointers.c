#include <stdio.h>
#include <stdlib.h>
#include "node_struct.h"

#define NUM_RECS 	10

void get_node_data (NODE *in_node)
{
	printf ("Key in the title of the book (Max 50):");
	scanf ("%s", in_node->title);
	printf ("Key in the name of the author (Max 50):");
	scanf ("%s", in_node->author);
	printf ("Key in the year of publication of the book:");
	scanf ("%d", &in_node->pub_year);
	printf ("Key in the price of the book:");
	scanf ("%f", &in_node->price);
}

/* Display all the node data */
void display_record (NODE *in_node)
{
	printf ("In display record\n");
	printf ("Title of the book is %s\n", in_node->title);
	printf ("Name of the author is %s\n", in_node->author);
	printf ("Year of publication is %d\n", in_node->pub_year);
	printf ("Price of the book is %f\n", in_node->price);
}

int main (void)
{
	int i, count = 0;
	int choice, pos;
	NODE *records [NUM_RECS];
	
	while (1)
	{
		printf ("Key in your option:a - add s-show q - quit:");
		scanf (" %c", &choice);
		if (choice == 'q')
			break;
		
		switch (choice)
		{
			case 'a':
				if (count < NUM_RECS)
				{
					if ((records [count] = (NODE *) malloc (sizeof (NODE))) == NULL)
					{
						printf ("malloc failed\n");
						exit (0);
					}
					
					get_node_data (records [count]);
					count ++;
				}
				else
					printf ("Max limit reached\n");
			break;
				
			case 's':
				printf ("Key in the number of the record you want to display:");
				scanf ("%d", &pos);
				if (pos <= count)
					display_record (records [pos-1]);
			break;

			
			default:
				printf ("Unrecognized choice\n");
			break;
		}   
	}
	
        printf ("Freeing memory for %d number of structures\n", count);
	for (i = 0; i < count; i ++)
		free (records [count]);
	return 0;
}

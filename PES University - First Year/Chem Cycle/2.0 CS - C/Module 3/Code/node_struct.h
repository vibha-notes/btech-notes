#define TITLE_LEN 	50
#define NAME_LEN	50

typedef struct node
{
	char title [TITLE_LEN];
	char author [NAME_LEN];
	int pub_year;
	float price;
} NODE;

void get_node_data (NODE *);
void display_record (NODE *);

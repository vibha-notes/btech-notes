//program to implement double hashing 
//if collision compute 
//index=(hash(key)+i*hash1(key))%size for i=0,1,2,...tablesize
//hash(key)=key%size;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct element
{
   int key;
   char name[100];
   int mark;
};
void display(struct element *, int);
void insert_to_hash(struct element*, int,int, char*,int*);
void delete_from_hash(struct element *,int ,int,int* );
int hash1(int);
 
int main()
{
  struct element *hashtable;
  int i,n,ch,key,no_elements;
  char name[100];
  int tablesz;
  printf("Enter the table size..");
  scanf("%d",&tablesz);
  //create hash table
  hashtable=(struct element*)malloc(tablesz* sizeof(struct element));
   for(i=0;i<tablesz;i++)
     hashtable[i].mark=0;
   no_elements=0;
  
  while(1)
  {
    printf("\n1. Insert..");
    printf("\n2. Delete..");
    printf("\n3. Search..");
    printf("\n4. Display..");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: printf("Enter key..\n");
              scanf("%d",&key);
              printf("Enter name..\n");
              scanf("%s",name);
              insert_to_hash(hashtable,tablesz,key,name,&no_elements);
              break;
       case 2: printf("Enter the key for deletion..\n");
               scanf("%d",&key);
               delete_from_hash(hashtable,tablesz,key,&no_elements);
               break;
       /*case 3: printf("Enter the key to search..\n");
               scanf("%d",&key);
               search_in_hash(hashtable,tablesz,key);
               break;*/
        case 4:display(hashtable,tablesz);
    }
  }
 
}

void delete_from_hash(struct element *ht, int size, int key, int *n)
{
	int i,j,index, h, count;
	//apply the primary hash function
	index=key %size;
	i=index ;
	h=0;
	j=1;
	printf("\nThe number of entries = %d\n",*n);
	count = *n;
	while(j<=count)
	{
	   if(ht[i].mark==1)//slot occupied
	   {
	       if(ht[i].key==key)//if the key is found
	      {
		printf("key found..and deleted..\n");
		ht[i].mark=0;
		(*n)--;//decrement the no of elements
		return;
	      }
	    j++;
	}
	h++;
	i=((index+h*hash1(key))%size);
             }
             printf("Element not found..\n");
}
				
	
	

void insert_to_hash(struct element*ht, int size,int key, char *name ,int *count)
   {
     int index,i,h;
     index=key %size; //hash function
     i=index;
     h=1;
     
     for(h=1;h<=size;h++)
     {
        if(ht[i].mark==0)//empty slot
        {
         ht[i].key=key;
         strcpy(ht[i].name,name);
         ht[i].mark=1; //make the slot occupied
		 (*count)++;//increment the no. of elements
         return;
         }
       i=(index+h*hash1(key))%size; //apply the rehash function
      }
      printf("cannot insert..\n");
      return;
  }

 


 int hash1(int key)
 {
   return(key % 9);
 }
    

 
  void display(struct element *ht, int size)
  {
    int i;
    for(i=0;i<size;i++)
    {
      printf("%d :", i);
      if (ht[i].mark!=0)
         printf("Key = %d, name = %s",ht[i].key,ht[i].name);
      printf("\n");
    }
  }  

  

     
/*void delete_from_hash(struct element *ht,int size,int key, int *n )
  {
    int i,j,index,h,count;
    
     index=key %size;
     i=index;
     h=0;
     j=1;
     count=*n;
     while(j<=count)
     {
        if(ht[i].mark==1)
        {
           if(ht[i].key==key)
           {
            printf("\nkey found..and deleted\n");
            ht[i].mark=0;
             (*n)--;
            return;
           }
         j++;
       }
       h++;
       i=(index+h*hash1(key))%size;
      }
      printf("key not found\n");
    }
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
 int info;
 struct node *next;
}NODE;
void create(NODE **h)
{
  NODE *temp,*p;int wish;
  do{
      temp=(NODE*)malloc(sizeof(NODE));
      printf("enter the element");
      scanf("%d",&temp->info);
      if(*h==NULL)
       {
          temp->next=temp;
          *h=temp;
       }
      else
        {
         p=*h;
         while(p->next!=*h)
          {
            p=p->next;
          }
         temp->next=p->next;
         p->next=temp;
        }
       printf("do you want add another");
       scanf("%d",&wish);
      }while(wish);
  }

int winner(NODE **h,int m,int n)
{
  NODE *p=*h,*q;
  int cnt1=1,cnt2=1;
  while(cnt1<m)
   {
     p=p->next;
      cnt1++;
   }
  while(p->next!=p)
   {
    cnt2=1;
    while(cnt2<n)
      {
         q=p;
         p=p->next;
         cnt2++;
      }
    q->next=p->next;
    printf("\n %d lost",p->info);
     free(p);
     p=q->next;
   }
  
int win=p->info;
  free(p);
 return win;     

}

int main()
{
  NODE *h=NULL;
  create(&h);
  printf("\nwinner=%d",winner(&h,1,2));
 }  
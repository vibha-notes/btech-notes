#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
 int info;
 struct node *next;
}NODE;
void create(NODE **h)
{
 NODE *temp,*p;int ele,choice;
 do{
 temp=(NODE*)malloc(sizeof(NODE));
 printf("enter ele");
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
 printf("do you want to add another");
 scanf("%d",&choice);
}while(choice);
}
int winner(NODE **h,int m,int n)
{
 NODE *p=*h;NODE *q;
 int cnt1=1,cnt2=1;
 while(cnt1<m)
  {
    p=p->next;
    cnt1++;
   }
 while(p->next!=p)
  { cnt2=1;
    while(cnt2<n)
     {
      q=p;
      p=p->next;
      cnt2++;
     }
    q->next=p->next;
    printf("%d lost",p->info);
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
  int res=winner(&h,2,3);
  printf("\nwinner=%d",res);
}


   
   
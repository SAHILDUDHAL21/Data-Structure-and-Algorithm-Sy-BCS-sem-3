#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
   int data;
   struct node *next,*prev;
}NODE;
#define NODEALLOC (NODE*)malloc(sizeof(NODE))

NODE *create(NODE *list)
{
    int i,n;
    NODE *temp,*newnode;
    printf("Enter limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      newnode=NODEALLOC;
      printf("Enter value:");
      scanf("%d",&newnode->data);
       if(list==NULL)
       {
           list=temp=newnode;
           newnode->next=list;
           list->prev=newnode;
       } 
       else
       {
           temp->next=newnode;
           newnode->prev=temp;
           temp=newnode;
           temp->next=list;
           list->prev=temp;
       }
    }
return list;
}
void disp(NODE *list)
{
    NODE *temp;
     temp=list;
     do
     {
       printf("%d\t",temp->data);
       temp=temp->next;
     }while(temp!=list);
}
int main()
{
   NODE *list=NULL;
   list=create(list);
   disp(list); 
}

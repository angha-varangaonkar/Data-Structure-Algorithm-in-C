#include<stdio.h>
#include<stdlib.h>
typedef struct linknode
{
    struct linknode*prev;
    int data;
    struct linknode*next;
    
}node;

node*start,*rear,*temp;

void create_list()
{
    temp=(node*)malloc(sizeof(node));
    printf("enter new value ");
    scanf("%d",&temp->data);
    temp->next = NULL;
    temp->prev=NULL;
    if (start==NULL)
    {
        start =temp;
        rear=temp;

    }
    else
    {
      rear->next=temp;
      temp->prev=rear;
      rear=temp;
    } 
    
}


void insert_first()
{
    create_list();
    temp->next=start;
    start->prev=temp;
    start=temp;


}
void insert_mid()
{
    create_list();
    


}



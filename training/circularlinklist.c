#include<stdio.h>
#include<stdlib.h>

typedef struct linknode
{
   
    int data ;
    struct linknode* next;

}node;

node*temp,*last;

void create_node()
{
    temp=(node*)malloc(sizeof(node));
    printf("enter new value ");
    scanf("%d",&temp->data);
    temp->next = NULL;
} 

void enqueue()
{
    temp=(node*)malloc(sizeof(node));
    printf("enter value ");
    scanf("%d",temp->data);
    //if it is first node
    if (temp->next=last->next)
    {
        temp->next=NULL;
        last->next=NULL;
        temp=last;
    }
    else
    {
       temp->next=last->data;
       last->next=temp;

    }
}
void dequeue()
{
    if (temp==NULL)
    {
        printf("underflow");
    }
    //if first node 
    else if (last->next==NULL)
    {

        printf("%d",temp->data);
        free(last);

    }   
    else{
        temp=last->next;
        printf("%d",temp->data);


    } 
}


int main()
{

}
#include<stdio.h>
#include<stdlib.h>
typedef struct linknode
{
    int data;
    struct linknode*next;
    
}node;

// global varialble
node*start,*temp;
node*rear;
int x,y,z;
void create_list()
{
    temp=(node*)malloc(sizeof(node));
    printf("enter new value ");
    scanf("%d",&temp->data);
    temp->next = NULL;
    if (start==NULL)
    {
        start =temp;

    }
    else
    {
      node*ptr;
      ptr =start;
      while (ptr->next != NULL)
      {
        ptr=ptr->next;
      }
      ptr->next=temp;

    } 
     rear=start;
    x=start;
    y=x;
    z=y;
    
}

void reverse_linklist(){



}


int main()
{

}

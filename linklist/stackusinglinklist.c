#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node*next;
    
}stack;

stack *top, *temp;
void create_node();
void push();
void pop();
int main()
{
    int ch;
    while(1)
    {
        printf("1: push\n2: pop\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :
                 push();
            break;
            case 2:
                 pop();
            break;
            
            default:
                 printf("\nwrong choise\n");
        }
    }   
}
void create_node(){
    temp=(stack*)malloc(sizeof(stack));
    printf("enter new value ");
    scanf("%d",&temp->data);
    temp->next = NULL;
}
void push(){
    create_node();
    if (top==NULL)
    {
        top = temp;
        printf("Pushed %d onto the stack.\n", temp->data);
    }
    else
    {
        temp->next=top;
        
    }
    top=temp;

}
void pop(){
    if (top==NULL)
    {
        printf("underflow\n");
    }
    else{
        temp=top;
        top= top->next;
        printf("%d is deleted",top->data);
        free(temp);
        temp=NULL;
    }
    
    
}

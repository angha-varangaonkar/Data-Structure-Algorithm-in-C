#include<stdio.h>
#include<stdlib.h>


typedef struct linknode
{
    int data;
    struct linknode*next;
    
}node;

node*last,*temp;

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
    printf("enter new element");
    scanf("%d",temp->data);
    temp->next=NULL;
    // if for singal node
    if (last==NULL)
    {
        last=temp;
        last->next=temp;
    }
    else{
        temp->next=last->next;
        last->next=temp;
        last=temp;
    }
    

}
void dequeue()
{
    if (last==NULL)
    {
        printf("underflow");

    }
    else if (last->next == last) {
        printf("ELEMENT DELETED: %d\n", last->data);
        free(last);
        last = NULL;
    } 
    else {
        temp = last->next;
        printf("ELEMENT DELETED: %d\n", temp->data);
        last->next = temp->next;
        free(temp);

    }
}

void display()
{
    if (last==NULL)
    {
        printf("underflow");

    }
    else{
        temp=last->next;
        do
        {
            printf("%d",temp->data);
            temp=temp->next;

        } while (temp!=last->next);
        

        
    }
    
}

int main()
{
    int ch;
    while(1)
    {
        printf("1: enqueue\n 2: dequeue\n3: display\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :
                 enqueue();
            break;
            case 2:
                 dequeue();
    
            break;
            case 3:
                 display();

            break;
    
            default:
                 printf("\nwrong choise\n");
        }
    }

    return 0;

}
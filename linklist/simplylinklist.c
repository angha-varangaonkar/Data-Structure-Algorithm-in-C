#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node*next;
    

}linknode;

linknode*start=NULL;
linknode*temp,*rear;
int count=0;



void create_node()
{
    temp=(linknode*)malloc(sizeof(linknode));
    printf("enter new value ");
    scanf("%d",&temp->data);
    temp->next = NULL;
}



void insert_first()
{
    create_node();
    count++;
    if (start==NULL)
    {
        start =temp;
        rear=temp;
    }
    else{
        temp->next=start;
        start=temp;
        
    }
}


void insert_last()
{
    create_node();
    count++;
    if (start==NULL)
    {
        start =temp;
        rear=temp;
    }
    else{
        rear->next=temp;
        rear=temp;
    }
}


void insert_mid()
{
    int pos;
    printf("Enter Node Position:\n");
    scanf("%d",&pos);
    if (pos>=1 && pos<=count+1)
    {
        if (pos==1)
        {
            insert_first();
        }
        else if (pos==count+1)
        {
            insert_last();
        } 
        else
        {
        create_node();
        count++;
        linknode*p;
        p=start;
        for (int i = 1; i < pos-1; i++)
        {
            p=p->next;
        }
        temp->next=p->next;
        p->next=temp;
        
        }
    }
    
}


void display(){
    if (start==NULL)
    {
        printf("Underflow\n");
    }
    else
    {
        linknode*temp =start;
        printf("Linklist :\n");
        while (temp!= NULL)
        {
            printf("%d  ",temp->data);
            temp=temp->next;
        }
        printf("NULL");
        
    }
    
}

int main()
{  
    int ch;
    while(1)
    {
        printf("1: first element\n 2: last element\n3: middle element\n4: display\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :
                 insert_first();
            break;
            case 2:
                  insert_last();
    
            break;
            case 3:
                 insert_mid();

            break;
            case 4:
                 display();

            break;
            default:
                 printf("\nwrong choise\n");
        }
    }

    return 0;

}


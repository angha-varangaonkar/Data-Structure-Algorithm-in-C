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

void create_list()
{
    
    temp=(node*)malloc(sizeof(node));
    printf("enter new value ");
    scanf("%d",&temp->data);
    temp->next = NULL;
    if (start==NULL)
    {
        start =temp;
        rear=start;

    }
    else
    {
      rear->next=temp;
      rear=temp;

    } 
    
}

void display(){
    if (start==NULL)
    {
        printf("underflow\n");
    }
    else
    {
        temp=start;
        while (temp!= NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
        
    }
    
}

int main() {
    int choice;
    while (1) {
        printf("\nLINKED LIST MENU:\n");
        printf("1. CREATE LIST\n");
        printf("2. DISPLAY LIST\n");
        printf("3. EXIT\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                create_list();
                break;
            case 2:
                printf("Linked List:\n");
                display();
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice \n");
        }
    }

    return 0;
}

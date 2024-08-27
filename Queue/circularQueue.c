#include<stdio.h>
int queue[5];
int rear =-1;
int front =-1;
int max=5;

void enqueue();
void dequeue();
void display();
int main()
{
    int ch;
    while(1)
    {
        printf("1: enqueue\n2: dequeue\n3: display\n");
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


void enqueue()
{
    if ((front==0 && rear==max-1) || (front==rear+1))
    {
        printf("\n overflow\n");
    }
    else
    {
        if (rear ==-1)
        {
            
            front++;
            rear++;
        }
        else

            rear=(rear+1)%max;
            scanf("%d",&queue[rear]);
        
    }
    
}

void dequeue()
{
    if (front==-1)
    {
        
        printf("\n underflow\n");
    }
    else
    {
          
       front =(front+1)%max;
       printf("%d is deleted\n",queue[front]);
    }
    if (front > rear)
    {
        front = -1;
        rear = -1;
    }
    
    
}

void display()
{
    if (front == -1)
    {
        printf("\n underflow\n");
    }
    else 
    {
        for (int i = front; i <= rear; i++)
        {
            
            printf("%d is present in queue\n",queue[i]);
        }
        
    }
    
}
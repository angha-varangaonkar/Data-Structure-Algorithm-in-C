#include<stdio.h>
#include<process.h>
int stack[50];
int top=-1;

void push()
{
    if (top==49)
    {
        printf("\nOVERFLOW\n");
    }
    else 
    {
        top++;
        printf("ENTER NEW ELEMENT:");
        scanf("%d", &stack[top]);
    }
}
void pop()
{
    if (top==-1)
    {
        printf("\nunderflow\n");

    }
    else
    {
        printf("%d is deleted \n",stack[top]);
        top--;
    }
    
}
void peek()
{
    if (top==-1)
    {
        printf("\nunderflow\n");

    }
    else
    {
        printf("%d is on the top of stack \n",stack[top]);
    }
    
}
void display()
{
    int i;
    if (top==-1)
    {
        printf("\nunderflow\n");

    }
    else
    {
        for(i=top;i>=0;i--)
          printf("%d\n",stack[top]);
    }
}



int main()
{
    int ch;
    while(1)
    {
        printf("1: push\n2: pop\n3: peek\n4: display");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :
                 push();
            break;
            case 2:
                 pop();
    
            break;
            case 3:
                 peek();

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


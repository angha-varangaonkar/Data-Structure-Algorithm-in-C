//global variable 
#include<stdio.h>
#include<process.h>
int stack[50];
int top=-1;
void push();
void pop();
void peek();
void display();
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


//local variable 
/*#include<stdio.h>
#include<process.h>
int push(int[],int);
int pop(int[],int);
void peek(int[],int);
void display(int[],int);
int main()
{
    int stack[50];
    int top=-1;
    int ch;
    while(1)
    {
        printf("1: push\n 2: pop\n3: peek\n4: display");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :
                 top=push(stack,top);
            break;
            case 2:
                 top=pop(stack,top);
    
            break;
            case 3:
                 peek(stack,top);

            break;
            case 4:
                 display(stack,top);

            break;
            default:
                 printf("\nwrong choise\n");
        }
    }

    return 0;

}
int push(int stack[],int top)
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
    return top;
}
int pop(int stack[],int top)
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
    return top;
    
}
void peek(int stack[],int top)
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
void display(int stack[],int top)
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
}*/
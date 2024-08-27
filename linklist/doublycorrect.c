#include<stdio.h>
#include<stdlib.h>
typedef struct linklist{
    int data;
    struct linklist *pre,*next;
}node;
node *start,*rear,*ptr,*temp;
int count=0;
void create_node(){
    count++;
    temp=(node*)malloc(sizeof(node));
    printf("Enter element:");
    scanf("%d",& temp->data);
    temp->next=NULL;
    temp->pre=NULL;
}


void insert_first(){
    create_node();
    if(start==NULL){
        start=temp;
        rear=temp; 
    }
    else{
        start->pre=temp;
        temp->next=start;
        start=temp;
    }
}


void insert_last(){
    create_node();
    if(rear==NULL){
        start=temp;
        rear=temp;
    }
    else{
        temp->pre=rear;
        rear->next=temp;
        rear=temp;
    }
}


void insert_mid(){
    int p;
    printf("Enter node position:");
    scanf("%d",& p);
    create_node();
    if(p>=1 && p<=count+1){
        if(p==1){
            insert_first();
        }
        else if(p==count+1){
            insert_last();
        }
        else{
            ptr=start;
            for(int i=1;i<p-1;i++){
                ptr=ptr->next;
            }
            temp->next=ptr->next;
            ptr->next->pre=temp;
            ptr->next=temp;
            temp->pre=ptr;
        }
    }
}

void dfirst(){
    temp=start;
    start=start->next;
    start->pre=NULL;
    free(temp);
    count--;
}

void dlast(){
    temp=rear;
    rear=rear->pre;
    rear->next=NULL;
    free(temp);
    count--;
}


void dmid(){
    int p;
    printf("Enter node position:");
    scanf("%d",& p);
    if(p>=1 && p<=count){
        if(p==1){
            dfirst();
        }
        else if(p==count){
            dlast();
        }
        else{
            ptr=start;
            for(int i=1;i<p-1;i++){
                ptr=ptr->next;
            }
            temp=ptr->next;
            ptr->next=temp->next;
            temp->next->pre=ptr->next;
            free(temp);
        }
    }
}

void display(){
    if(start==NULL){
        printf("underflow\n");
    }
    else{
        temp=start;
        while(temp!=NULL){
            printf("%d\t", temp->data);
            temp=temp->next;
        }
    printf("\n");
    }
}


int main(){
    int c;
    while(1){
    printf("Enter choice:");
    scanf("%d", &c);
    switch(c){
        case 1:
            insert_first();
            break;
        case 2:
            insert_mid();
            break;
        case 3:
            insert_last();
            break;
        case 4:
            dfirst();
            break;
        case 5:
            dmid();
            break;
        case 6:
            dlast();
            break;
        case 7:
            display();
            break;
    }
    }
}
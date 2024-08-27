#include<stdio.h>
#include<stdlib.h>
typedef struct treenode{
    struct treenode*l;
    int data;
    struct treenode*r;
}node;
node *temp,*root;
void create_tree()
{
    temp=(node*)malloc(sizeof(node));
    printf("enter element  ");
    scanf("%d",&temp->data);
    temp->l=NULL;
    temp->r=NULL;
    if (root==NULL)
    {
        root=temp;
    }
    else
    {
        node*p,*q;
        p=root;
        while (p!=NULL)
        {
           
            if (p->data > temp->data)
            {
               q=p;
               p=p->l;

            }
            else
            {
                q=p;
                p=p->r;

            }
            
        }
        if (q->data > temp->data)
        {
            q->l=temp;

        }
        else
        {
            q->r=temp;
        }
        
        
    }
    
}
void inorder (node*root)
{
    if (root!=NULL)
    {
        inorder(root->l);
        printf("%d  ",root->data);
        inorder(root->r);
    }
    
}
void perordre(node*root)
{
    if (root!=NULL)
    {
    printf("%d  ",root->data);
    perordre(root->l);
    perordre(root->r);
    }

}
void postordre(node*root)
{
    if (root!=NULL)
    {
    perordre(root->l);
    perordre(root->r);
    printf("%d  ",root->data);
    }

}

/*void displaytree(node*root,int level,char pos)
{
    if (root !=NULL)
    {
        displaytree(root->r,level+1,'r');
        for (int i = 0; i < level ; i++)
        {
           printf("   ");
        }
        if (level>0)
        {
            printf("     ");
            printf("%c:%d\n",pos,root->data);
        }
        else
        {
            printf("%d\n",root->data);
        }
        displaytree(root->l,level+1,'l');
        
        
    }
    
}*/

/*void search(root, int item)
{
    if (item==root->data || root==NULL)
    {
        return root;
    }
    else if (item < root->data)
    {
        return search(root->left ,item);
    }
    else
    {
        return search (root->right ,item);
    }
    
}*/

int main() {
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        create_tree();
    }
    //printf("\n tree structure \n");
    //displaytree(root,0,' ');

    printf("\nInorder traversal: ");
    inorder(root);
    printf("\n");

    printf("Preorder traversal: ");
    perordre(root);
    printf("\n");

    printf("Postorder traversal: ");
    postordre(root);
    printf("\n");
    
   

    return 0;
}
//p=search(root)
//if(p==null)
//else
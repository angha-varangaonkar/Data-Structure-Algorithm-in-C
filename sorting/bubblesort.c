#include<stdio.h>
int main()
{
    int a[10]={2,1,3,4,5,6},n=6,i,j;
    int temp;
    //x=0; this is only valid for when the wholw array is sorted
    for (int i = 0; i < n-1; i++)
    {
        int x=0;
        for (int j = 0; j < n-1-i; j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                x=1;          
            }
            
        }
        if (x==0)
        {
            break;
        }
        
        int k;
        printf("\npass %d   ",i+1);
        for ( k = 0; k < n; k++)
        { printf("%d   ",a[k]); }
        
    }
    
    
    
return 0;
}
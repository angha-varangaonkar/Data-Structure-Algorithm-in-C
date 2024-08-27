#include<stdio.h>
int main()
{
    int a[10]={12,42,22,8,42,9};
    int temp , n=6,i,j;
    
    for (int i = 0; i < n-1; i++)
    {
        
        for (int j = 0; j < n-1-i; j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                         
            }
            
        }
        
    
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d  ",a[i]);
    }
    
    
    
    
return 0;
}
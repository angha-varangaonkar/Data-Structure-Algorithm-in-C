#include<stdio.h>
int main()
{
     int a[10]={23,12,42,21,7,32},n=6,i,j,temp,k,min;
     for ( i = 0; i < n; i++)
     {
        min=i;
        for ( j = i+1; j < n; j++)
        {
            if (a[j]<a[min])
            {
                min=j;
            }
            
            
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
         printf("\n pass %d  ",i+1)  ; 
         for (int  k = 0; k < n; k++)
          {printf("%d  ",a[k]);}
     }
     for (int  k = 0; k < n; k++)
     {
        printf("%d  ",a[k]);
     }
     
     
}
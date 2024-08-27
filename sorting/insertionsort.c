#include<stdio.h>
int main()
{
   int a[10]={23,12,42,21,7,32},n=6,i,j,key; 
   for ( i = 0; i < n; i++)
   {
      key=a[i];
      j=i-1;
      while (j>=0 && a[j]>key)
      {
        a[j+1]=a[j];
        j--;
      }
      a[j+1]=key;
      printf("\n pass %d ",i);
      for ( int k = 0; k < n; k++)
       {printf("%d  ",a[k]); }


   }
   for ( i = 0; i < n; i++)
   {
     printf("%d  ",a[i]);
   }
   


   return 0;
}
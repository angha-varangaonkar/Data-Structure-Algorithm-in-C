#include<stdio.h>
int main()
{
    int a[10]={4,5,10,12,6,8,11,15},n=8;
    int l=0 ,h=n-1;
    int m=(l+h)/2;
    merge(a,l,m,h);

  return 0;
}
void merge(int arr[],int low,int mid,int high)
{
    
    int n1=mid-low+1;
    int n2=high-mid;
    int x[n1] ,y[n2];
    for (int i = 0; i < n1; i++)
    {
        x[i]=arr[low+i];
    }
    for (int j = mid; j <high ; j++)
    {
        y[j]=arr[mid+1+j];
    }
    for (int k = 0; k < high; k++)
    {
        
    }
    
    
    
}
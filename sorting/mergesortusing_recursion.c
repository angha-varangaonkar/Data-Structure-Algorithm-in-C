#include<stdio.h>
void merge(int a[],int l ,int h ,int m);
void mergesort(int a[],int l,int h);
int main(){
    int arr[10]={6,5,10,12,6,8,11,15},n=8;
    int low=0;
    int high=n-1;
    
    mergesort(arr,low,high);
    for(int i=0;i<8;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
void mergesort(int a[], int l,int h)
{
    if (l>=h)
    {
        return ;
    }
    int m=(l+h)/2;
    mergesort( a, l, m);
    mergesort(a,m+1,h);
    merge(a,l,m,h);
    


}

void merge(int a[],int l,int h,int m){
    int n1=m-l+1;int n2=h-m;
    int x[n1];
    int y[n2];
    for(int i=0;i<n1;i++){
        x[i]=a[i];
        
    }
    
   
    for(int j=n1,i=0;j<h;i++,j++){
        y[j]=a[j];
        
    }
   
    for(int i=0,j=0,k=0;i<=h;i++){
        if(x[k]<y[j]){
            a[i]=x[k];
            k++;
        }
        else{
            a[i]=y[j];
            j++;
        }
     
       
    }
}
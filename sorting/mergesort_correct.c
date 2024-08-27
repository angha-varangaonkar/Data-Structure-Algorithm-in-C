// when the two halfs are already sorted
#include<stdio.h>
void merge(int a[],int ,int ,int);
int main(){
    int arr[10]={4,5,10,12,6,8,11,15},n=8;
    int low=0;
    int high=n-1;
    int mid=(low+high/2);
    merge(arr,low,high,mid);
    for(int i=0;i<8;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}

void merge(int a[],int l,int h,int m){
    int n1=m-l+1;int n2=h-m;
    int x[n1];
    int y[n2];
    for(int i=0;i<n1;i++){
        x[i]=a[i];
        printf(" %d",x[i]); 
    }
    
    printf("\n");
    for(int i=0,j=n2;i<n2;i++,j++){
        y[i]=a[j];
        printf(" %d ",y[i]);
    }
    printf("\n");
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
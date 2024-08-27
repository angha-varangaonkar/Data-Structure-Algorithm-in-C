#include<stdio.h>
int fact(int);
int main()
{
    int ans;
    int n=5;
    ans=fact(n);
    printf("%d",ans);
}
int fact(int n)
{
    if (n==1)
    {
        return 1;
    }
    return (n*fact(n-1));
    
}


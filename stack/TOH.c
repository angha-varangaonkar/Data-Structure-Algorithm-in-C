#include<stdio.h>
void TOH(int n ,char a ,char b,char c);
int main()
{
    char a='A',b='B',c='C';
    int n=3;
    TOH(n,a,b,c);


}
void TOH(int n,char a,char b,char c)
{
    if (n>0)
    {
        TOH((n-1),a,c,b);
        printf("%c -> %c\n",a,c);
        TOH((n-1),b,a,c);

    }
    
}

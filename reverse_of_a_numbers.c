#include<stdio.h>
int main()
{
    int i,j,n,k;
    scanf("%d",&n);
    while(n>0)
    {
        i=n%10;
        printf("%d",i);
        n=n/10;
    }
    
}
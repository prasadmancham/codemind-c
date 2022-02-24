#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&x);
    n=(x-1)/2;
    if(x%2&&x%3&&x%5&&x%7!=0)
    printf("prime");
    else
    printf("not a prime");
    return 0;
}
#include<stdio.h>
int main()
{
    int a,b,max;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    max=(a>b?a:b);
    printf("maximum=%d",max);
    return 0;
}
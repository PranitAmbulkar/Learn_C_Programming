#include<stdio.h>
int main()//Print Maximum of two numbers.
{
    int a,b,max;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    if(a>b)
    max=a;
    else
    max=b;
    printf("max number is %d",max);
    return 0;
}
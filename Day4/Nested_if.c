#include<stdio.h>
int main()//Find out the maximum of the three numbers
{
    int a,b,c,max;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        max=a;
        else
        max=c;
    }
    else
    {
        if(b>c)
        max=b;
        else
        max=c;
    }
    printf("maximum=%d",max);
    return 0;
}
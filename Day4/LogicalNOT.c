#include<stdio.h>
int main()
{
    int a=4,b=9;
    if(a>b)
    printf("one");
    if(!(a<b))
    printf("two");
    else
    printf("Three\n");
    printf("b=%d !b=%d !!b=%d",b,!b,!!b);
    return 0;
}
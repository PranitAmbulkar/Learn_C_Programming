#include<stdio.h>
int main()
{
    int a,b;
    a=(2,3);
    b=(5,++a);
    printf("a=%d b=%d",a,b);
    return 0;
}
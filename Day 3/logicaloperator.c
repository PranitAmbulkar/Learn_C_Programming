#include<stdio.h>
int main()
{
    int a=3,b=6,c=9;
    int d=a<b && b<c;//logical and operator
    int e=a<b||b>c;//Logical OR operator
    int f=!(a>b);//Logical NOT operator
    printf("d=%d e=%d f=%d",d,e,f);
    return 0;
}
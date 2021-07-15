#include<stdio.h>
int main()//Find out if the given number is even or odd.
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a%2==0)
    printf("%d is even number",a);
    else
    printf("%d is odd number",a);
    return 0;
}
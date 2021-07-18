#include<stdio.h>
int main()//Input the number by user and find the sum of all its digits.
{
    int num,sum,digit;
    printf("Enter a number");
    scanf("%d",&num);
    sum=0;
    while(num!=0)
    {
        digit=num%10;
        sum=sum+digit;
        num=num/10;

    }
    printf("sum:%d",sum);
    return 0;

}
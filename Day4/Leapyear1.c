#include<stdio.h>
int main()//Input a year from user and check whether it is a leap year or not.Leap year is that year which is divisible by 4,but it should not be devisible by 100.In case if it is divisible by 100 it must be divisible by 400.
{
    int y;
    printf("Enter year");
    scanf("%d",&y);
    if( (y%4==0 && y%100!=0)|| y%400==0)
    printf("Leap year");
    else
    printf("Not leap year");
    return 0;
}
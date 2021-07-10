#include<stdio.h>
int main()
{
    int num1;
    int num2;
    int sum,sub,mult;
    float div;
    printf("Enter any two numbers\n");
    scanf("%d%d",&num1,&num2);
    sum=num1+num2;
    sub=num1-num2;
    mult=num1*num2;
    div=(float)num1/num2;
    printf("Sum of the two numbers is %d\n",sum);
    printf("substraction of two number is %d\n",sub);
    printf("Multiplication of two numbers is %d\n",mult);
    printf("Division of two numbers is %f\n",div);
    return 0;
} 
#include<stdio.h>
int main()//print the table of the given number.
{
    int a,num;
    printf("Enter a number");
    scanf("%d",&num);
    for(a=1;a<=10;a++)
    {
        printf("%d\n",a*num);

    }
    return 0;
}
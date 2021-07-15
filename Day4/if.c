#include<stdio.h>
int main()//Enter total sales made by the salesman.If it is greater than Rs.5000,then give him commission of Rs.300.Assuming his basic salary of Rs.2500 and calculate the gross salary of salesman.
{
    float ts,bs=2500,com=0,gs;
    printf("Enter total sales:");
    scanf("%f",&ts);
    if(ts>5000)
    {
        com=300;
    }
    gs=bs+com;
    printf("comission=%f\ngross salary=%f",com,gs);
    return 0;
}
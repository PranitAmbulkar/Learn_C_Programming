#include<stdio.h>
int main()//Input the employee id and department number from the user and display the detailed information message.Use the following department numbers:10(marketing),20(sales),30(Production),40(Accounts),other(unknown).
{
    int empid,deptno;
    printf("enter employee id and department number");
    scanf("%d%d",&empid,&deptno);
    printf("Employee with Employee id %d works in",empid);
    switch(deptno)
    {
        case 10:
        printf("Marketing");
        break;
        case 20:
        printf("Sales");
        break;
        case 30:
        printf("Production");
        break;
        case 40:
        printf("Accounts");
        break;
        default:
        printf("unknown");
        break;
    }
printf("Department.");
return 0;
}
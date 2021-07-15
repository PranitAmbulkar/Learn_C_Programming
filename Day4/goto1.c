#include<stdio.h>
int main()
{
    float num1,num2,result;
    int choice;
    START:
    printf("Enter two numbers:");
    scanf("%f%f",&num1,&num2);
    printf("\n1.Add\n2.Subtract\n3.Multiply\nEnter choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        result=num1+num2;
        printf("Add:%f",result);
        break;
        case 2:
        result=num1-num2;
        printf("Subtract:%f",result);
        break;
        case 3:
        result=num1*num2;
        printf("Multiplication:%f",result);
        break;
        default:
        printf("Invalid choice\n");
    }
    printf("\n0.Exit\n1.Repeat\nEnter choice:");
    scanf("%d",&choice);
    if(choice!=0)
    goto START;
    return 0;

}
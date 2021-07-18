#include<stdio.h>
int main()
{
  float num1,num2,result;
  int choice;
  do 
    {
        printf("Enter the two numbers");
        scanf("%f%f",&num1,&num2);
        printf("\n0.Exit");
        printf("\n1.Add\n2.Subtract\n3.Multiply\nEnter choice");
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
        printf("multiply:%f",result);
        break;

        default:
        printf("Invalid choice\n");
      }
    }while(choice!=0);
    return 0;
}
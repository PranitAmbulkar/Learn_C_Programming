#include<stdio.h>
int main()
{
    float num1,num2,result;
    int choice;
   {
     printf("Enter two numbers");
     scanf("%f%f",&num1,&num2);
     printf(\n0.Exit)
     printf("\n1.add\n2.Multiply\n3.Subtract\n4.divide\nEnter choice");
     scanf("%d",&choice);
     switch (choice!=0)
     {
        case 1:
        result=num1+num2;
        printf("add:%d");
        break;

        case 2:
        result=num1*num2;
        printf("multiply:%d");
        break;

        case 3:
        result=num1-num2;
        printf("subract:");
        break;

        case 4:
        result=num1/num2;
        printf("divide:");
        break;

        default:
        printf("Invalid choice");
      }
    }while(choice!=0);
    return 0;
}










































    
} 
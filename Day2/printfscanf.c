#include<stdio.h>
int main()
{
    float si,prin,roi,noy; /* type declaration*/ 
    printf("Enter Principle,Rate of Interest & number of years");
    scanf("%f%f%f",&prin,&roi,&noy);    /*input the values*/
    si=prin*roi*noy/100;   /*formula for simple interest*/
    printf("Principle=%f\nsimple Interest =%f",prin,si); /*display results*/
    return 0;

}
#include<stdio.h>
int main()//write a program to convert temperature in Celsius to Farenheit and vice versa
{
    float celsius,farenheit;
    printf("Enter the temperature in Celsius");
    scanf("%f%f",&celsius,&farenheit);
    farenheit=((celsius*9)/5)+32;
    printf("\n%.2fCelsius=%.2fFarenheit",celsius,farenheit);
    return 0;
}
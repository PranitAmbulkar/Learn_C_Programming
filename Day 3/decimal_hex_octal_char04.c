#include<stdio.h>
int main()//write a program to print the ascii value of user entered character in decimal,hex,octal and character format
{
    int dec,hex,oct;
    char c;
    printf("Enter Decimal Hexadecimal Octal and character\n");
    scanf("%d%x%o%c",&dec,&hex,&oct,&c);
    printf("ascii value of decimal=%d\nascii value of hexadecimal=%d\nascii value of octal=%d\nascii value of character=%d",dec,hex,oct,c);
    return 0;
}
#include<stdio.h>
int main()
{
    char c; //character data type
    short s; //short int data type
    float a=2.3f; //float data type
    printf("Size of char:%d byte(s)\n",sizeof(c));
    printf("Size of short:%d byte(s)\n",sizeof(s));
    printf("Size of float:%d byte(s)",sizeof(a));
    return 0;
}
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character");
    ch=getchar();
    switch(ch)
    {
        case 'A':
        printf("Apple");
        break;
        case 'B':
        printf("Baby");
        break;
        case 'C':
        printf("Cat");
        break;
    }
return 0;    
}
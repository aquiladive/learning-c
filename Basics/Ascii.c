//program to convert character to ASCII and vice-versa
#include<stdio.h>
void main()
{
    char a;
    int b;
    printf("Input a character.\n");
    scanf(" %c",&a);
    printf("ASCII value of %c is %d.\n",a,a);
    printf("Input an integer.\n");
    scanf("%d",&b);
    printf("ASCII character of %d is %c\n",b,b);
}
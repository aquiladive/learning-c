//program to find largest of three numbers using only ternary operator
#include<stdio.h>
void main()
{
    int a,b,c,max;
    printf("Enter three numbers.\n");
    scanf("%d %d %d",&a,&b,&c);
    max=(a>b)?(a>c?a:c):(b>c?b:c);
    printf("The largest number is %d.",max);
}
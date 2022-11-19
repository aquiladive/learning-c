//program to swap two variable values
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter two numbers.\n");
    scanf("%d %d",&a,&b);
    printf("Before swapping, a = %d, b = %d\n",a,b);
    //with temp variable
    c=a;
    a=b;
    b=c;
    printf("After first swap, a = %d, b = %d\n",a,b);
    //without temp variable
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After second swap, a = %d, b = %d\n",a,b);
}
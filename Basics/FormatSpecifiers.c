//different format specifiers in C
#include<stdio.h>
void main()
{
    char ch='A';
    int a=1;
    short int b=2;
    long int c=30;
    long long int d=400;
    float f=3.14;
    double dl=1.414;
    long double l=0.142857;
    printf("Chosen values for each data type are-\n");
    printf("char = %c",ch);
    printf("short int = %hd\nint = %d\nlong int = %ld\nlong long int = %Ld",a,b,c,d);
    printf("float = %f\ndouble = %lf\nlong double = %Lf",f,dl,l);
}
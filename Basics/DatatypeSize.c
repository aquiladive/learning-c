//program to find storage size of all datatypes
#include<stdio.h>
void main()
{
    printf("Storage size of each data type is as follows:\n");
    //%lu is format specifier for long unsigned int
    printf("char = %lu\n",sizeof(char));
    printf("short int = %lu\nint = %lu\nlong int = %lu\nlong long int = %lu\n",sizeof(short int),sizeof(int),sizeof(long int),sizeof(long long int));
    printf("float = %lu\ndouble = %lu\nlong double = %lu\n",sizeof(float),sizeof(double),sizeof(long double));
}
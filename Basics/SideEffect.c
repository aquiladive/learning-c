//program showing side effect on variables
#include<stdio.h>
void main()
{
    int a=1,b=2,c=3,d,e;
    printf("a=%d, b=%d, c=%d\n",a,b,c);
    e=a+b+c;
    printf("e=a+b+c=%d\nAfter this expression, the values of the variables are-\na=%d, b=%d, c=%d\n",e,a,b,c);
    d=(a++)+(b--)+(++c);
    printf("d=(a++)+(b--)+(++c)=%d\nAfter this expression, the values of the variables are-\na=%d, b=%d, c=%d\n",d,a,b,c);
    printf("The second expression has a side effect on the value of the variables, while the first does not.\n");
}
//program showing output formatting in C
#include<stdio.h>
void main()
{
    float x=1.23,y=1.25;
    printf("%10.3f\n",y);
    printf("%-010.3f\n",x);
    printf("%-1.3f\n",y);
    printf("%-0+10.3f\n",x);
    printf("%020f\n",y);
    printf("%20.20f\n",x);
    printf("%+20.20f\n",-y);
    printf("%20.3s\n","Welcome");
}
#include<stdio.h>
void main()
{
    float a,b,c;
    printf("Enter two numbers");
    scanf("%f%f",&a,&b);
    c=a+b;
    printf("addition=%f\n",c);
    c=a-b;
    printf("difference=%f\n",c);
    c=a*b;
    printf("production=%f\n",c);
    c=a/b;
    printf("division=%f\n",c);
}
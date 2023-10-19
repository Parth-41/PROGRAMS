#include<stdio.h>
void main()
{
    float l,b;
    printf("enter the length");
    scanf("%f",&l);
    printf("enter the breadth");
    scanf("%f",&b);
    float area,peri;
    area=l*b;
    peri=2*(l+b);
    printf("area of rectangle=%2f\n",area);
    printf("perimeter of circle=%2f\n",peri);
}
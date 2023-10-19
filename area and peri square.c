#include<stdio.h>
void main()
{
    float s;
    printf("enter the side");
    scanf("%f",&s);
    float area,peri;
    area=s*s;
    peri=4*s;
    printf("area of square=%2f\n",area);
    printf("perimeter of square=%2f\n",peri);
}
#include<stdio.h>
void main()
{
    float r;
    printf("enter the radius");
    scanf("%f",&r);
    float area,circumfrence;
    area=3.14*r*r;
    circumfrence=2*3.14*r;
    printf("area of circle=%2f\n",area);
    printf("circumfrence of circle=%2f\n",circumfrence);
}
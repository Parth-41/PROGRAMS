#include<stdio.h>
int main()
{
    int n,side,c,d,l,b,r,pi;
    printf("Enter your choice from 1 To 3\n 1=circle\n 2=square\n 3=rectangle");
    scanf("%d",&n);

    switch (n)
    {
        case 1:
        printf("enter the radius");
        scanf("%d",&r);
        c=pi*r*r;
        d=2*pi*r;
        printf("area of circle is=%d",c);
        printf("perimeter of circle is=%d",d);
        break;
        case 2:
        printf("enter the side");
        scanf("%d",&side);
        c=side*side;
        d=4*side;
        printf("area of square is=%d",c);
        printf("perimeter of square is=%f",d);
        break;
        case 3:
        printf("enter the length and breadth");
        scanf("%d%d",&l,&b);
        c=l*b;
        d=2*(l+b);
        printf("area of rectangle is=%d",c);
        printf("perimeter of rectangle is=%d",d);
        break;
    }
    return 0;
}
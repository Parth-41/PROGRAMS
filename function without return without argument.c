#include<stdio.h>
void main()
{
void add();
int a,b,c; 
printf("enter two numbers");
scanf("%d%d",&a,&b);
c=a+b;
printf("sum=%d",c);
}
void add()
{
int x,y;
printf("enter the number");
scanf("%d%d",&x,&y);
int z=x+y;
}
#include<stdio.h>
void main()
{
int add();
int c;
c=add();
printf("sum=%d",c);
}
int add()
{
int x,y;
printf("enter two numbers");
scanf("%d%d",&x,&y);
int z=x+y;
return z;
}
#include<stdio.h>
void fun();
void main()
{
static int a=10;
printf("%d\n",a);
{
printf("%d\n",a);
fun();
fun();
fun();
}
}
int a=90;
void fun()
{
static int a=30,b;
b=a++;
printf("coming from fun b=%d\n",b);
}

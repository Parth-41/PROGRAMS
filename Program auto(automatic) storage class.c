#include<stdio.h>
void main()
{
auto int i=19;
{
auto int i=20;
printf("inside block:%d",i);
}
printf("outside block:%d",i);
}
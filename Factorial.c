#include<stdio.h>
void main()
{
int i;
printf("enter the number for factorial");
scanf("%d",&i);
if(i<0)
{
    printf("do not work with negaative number");
    return;
}
int n=i-1;
while(n>=1)
{
    i*=n;
    n--;
}
printf("the factorial of that number is %d",i);
}
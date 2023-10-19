#include<stdio.h>
void main()
{
    int i,n;
    printf("enter the number to pet its cube");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("cubes=%d",i*i*i);
    }
}
#include<stdio.h>
void main()
{
int n;
printf("enter the size of an array");
scanf("%d",&n);
int a[n],sum=0;
printf("enter array elements");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("sum of array elements=%d",sum);
}
#include<stdio.h>
void main()
{
int hindi,english,maths,science,socialscience,total,avg,grade;
printf("enter the mark for hindi,english,maths,science and socialscience");
scanf("%d%d%d%d%d",&hindi,&english,&maths,&science,&socialscience);
total=hindi+english+maths+science+socialscience;
avg=total/5;
if((avg>=90)&&(avg<=100))
{
grade='A';
printf("you have scored A grade");
}
else if((avg>=80)&&(avg<=90))
{
grade='B';
printf("you have scored B grade");
}
else if((avg>=70)&&(avg<=80))
{
grade='C';
printf("you have scored C grade");
}
else if((avg>=60)&&(avg<=70))
{
grade='D';
printf("you have scored D grade");
}
else if((avg>=50)&&(avg<=60))
{
grade='E';
printf("you have scored E grade");
}
else
{
printf("Fail");
}
}
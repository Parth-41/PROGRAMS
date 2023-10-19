#include<stdio.h>
void main()
{
    char a;
    printf("Enter the char");
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
    {
        printf("it is a vowel");
    }else{
        printf("it is a consonant");
    }
}
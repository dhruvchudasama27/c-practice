#include<stdio.h>
#include<stdlib.h>
void main()
{
    int num = 0;
    float num1 = 0;
    char m= 'a';

    printf("enter num");
    scanf("%d",&num);
    printf("enter num1");
    scanf("%f",&num1);
    fflush(stdin);
    printf("enter char");
    scanf("%c",&m);

    printf("value of num is %d",num);
    printf("value of num1 is %f",num1);
    printf("value of character is %c",m);
}
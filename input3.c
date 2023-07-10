// write a programe to perform split two digit number
#include<stdio.h>
void main()
{
    int num = 0;
    int first = 0;
    int second = 0;

    printf("the number is ");
    scanf("%d",&num);

    first = num/10;
    second = num - (first*10);

    printf("the first number is %d",first);
    printf("\n the second number is %d",second);

}
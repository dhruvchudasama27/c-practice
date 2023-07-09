#include<stdio.h>
void main()
{
    int number = 0;

    printf(" the value is");
    scanf("%d",&number);

    if((number <=9)(number>=-9))
    {
        printf("the given number single digit");
    }
    else
    {
        printf(" the given number is double digit");
    }
}
#include<stdio.h>
void main()
{
    int number = 0;

    printf(" the value is");
    scanf("%d",&number);

    if(number % 2 == 0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}
// write a programe to findout whether given year is milinium year or not 

#include<stdio.h>
void main()
{
    int year = 0;

    printf(" the year is ");
    scanf("%d",&year);

    if(year % 1000 == 0)
    {
        printf(" year is milinium year");
    }
    else
    {
        printf(" year is not milinium year");
    }
}